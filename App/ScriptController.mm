#import "ScriptController.h"

#import "BindImage.hpp"
#import "BindPopup.hpp"
#import "ChatViewController.h"
#import "FCFileManager.h"
#import "mruby.h"
#import "mruby/class.h"
#import "mruby/compile.h"
#import "mruby/error.h"
#import "mruby/irep.h"
#import "mruby/string.h"
#import "mruby/array.h"
#import "mruby/variable.h"

@implementation ScriptController
{
    NSString* mScriptPath;
    mrb_state* mMrb;
    mrb_value mFiber;
    NSTimer* mTimer;
    int mValue;
    QBImagePickerController* mImagePicker;
    UITextView* mTextView;
    UIImageView* mImageView;
    NSMutableArray* mReceivePicked;
}

+ (id) NewWithScriptName:(NSString*)scriptPath
{
    mrb_state* mrb = [self InitMrb:scriptPath];

    // ScriptController or ChatViewController
    if (mrb_class_defined(mrb, "Chat")) {
        return [[ChatViewController alloc] init:scriptPath mrb:mrb];
    } else {
        return [[ScriptController alloc] init:scriptPath mrb:mrb];
    }
}

+ (mrb_state*)InitMrb:(NSString*)nscriptPath
{
    mrb_state* mrb = mrb_open();

    // Bind
    pictruby::BindImage::SetScriptController(NULL);
    pictruby::BindImage::Bind(mrb);
    pictruby::BindPopup::Bind(mrb);

    // Load builtin library
    // mrb_load_irep(mrb, BuiltIn);
    {
        NSString* path = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"builtin.rb"];
        char* scriptPath = (char *)[path UTF8String];
        FILE *fd = fopen(scriptPath, "r");
        mrb_load_file(mrb, fd);
        fclose(fd);
    }
 
    // Set LOAD_PATH($:)
    {
        mrb_value load_path = mrb_gv_get(mrb, mrb_intern_cstr(mrb, "$:"));
        mrb_ary_push(mrb, load_path, mrb_str_new_cstr(mrb, [[FCFileManager pathForDocumentsDirectory] UTF8String]));
        mrb_ary_push(mrb, load_path, mrb_str_new_cstr(mrb, [[FCFileManager pathForMainBundleDirectory] UTF8String]));
        mrb_p(mrb, load_path);
    }

    // Load user script
    int arena = mrb_gc_arena_save(mrb);
    {
        char* scriptPath = (char *)[nscriptPath UTF8String];
        FILE *fd = fopen(scriptPath, "r");

        mrbc_context *cxt = mrbc_context_new(mrb);

        const char* fileName = [[[[NSString alloc] initWithUTF8String:scriptPath] lastPathComponent] UTF8String];
        mrbc_filename(mrb, cxt, fileName);

        mrb_load_file_cxt(mrb, fd, cxt);

        mrbc_context_free(mrb, cxt);

        fclose(fd);
    }
    mrb_gc_arena_restore(mrb, arena);

    return mrb;
}

- (id) init:(NSString*)scriptPath mrb:(mrb_state*)mrb
{
    self = [super init];
    mScriptPath = scriptPath;
    mMrb = mrb;
    mTextView = NULL;
    mImageView = NULL;
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor blackColor];

    // Create ImagePicker
    mImagePicker = [QBImagePickerController new];
    [mImagePicker setDelegate:self];
    mImagePicker.showsNumberOfSelectedAssets = YES;
    
    // Create timer
    mTimer = [NSTimer scheduledTimerWithTimeInterval:1.0/30.0 target:self selector:@selector(timerProcess) userInfo:nil repeats:YES];
    mValue = 0;

    // NavButton
    UIBarButtonItem* saveButton = [[UIBarButtonItem alloc] initWithTitle:@"Save"
                                                                   style:UIBarButtonItemStyleBordered
                                                                  target:self
                                                                  action:@selector(tapSaveButton)];
    self.navigationItem.rightBarButtonItems = [NSArray arrayWithObjects:saveButton, nil];

    // mTextView
    mTextView = [[UITextView alloc] initWithFrame:self.view.bounds];
    mTextView.editable = NO;
    mTextView.dataDetectorTypes = UIDataDetectorTypeLink;
    mTextView.font = [UIFont fontWithName:@"Courier" size:12];
    mTextView.text = @"";
    [self.view addSubview:mTextView];

    // Tap title
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.backgroundColor = [UIColor clearColor];
    [button setTitle:[mScriptPath lastPathComponent] forState:UIControlStateNormal];
    [button setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    button.frame = CGRectMake(0.0, 0.0, 120.0, self.navigationController.navigationBar.frame.size.height);
    self.navigationItem.titleView = button;

    // mImageView
    mImageView = [[UIImageView alloc] init];
    mImageView.image = NULL;
    mImageView.frame = self.view.frame;
    mImageView.contentMode = UIViewContentModeScaleAspectFit; //UIViewContentModeCenter?
    [self.view addSubview:mImageView];

    // Init mruby
    [self initScript];
}

- (void)didMoveToParentViewController:(UIViewController *)parent
{
    if (![parent isEqual:self.parentViewController]) {
        if (mMrb) {
            mrb_close(mMrb);
            mMrb = NULL;
        }
    }
}

- (void)timerProcess
{
    if (!mMrb) {
        return;
    }

    if (mMrb->exc) {
        // Display to console
        mrb_p(mMrb, mrb_obj_value(mMrb->exc));
        // mrb_p(mMrb, mrb_get_backtrace(mMrb));

        // Display to view
        mrb_value str = mrb_funcall(mMrb, mrb_obj_value(mMrb->exc), "inspect", 0);
        const char* errorMsg = mrb_string_value_cstr(mMrb, &str);
        
        UILabel* label = [[UILabel alloc] init];
        label.frame = self.view.bounds;
        label.backgroundColor = [UIColor whiteColor];
        label.text = [[NSString alloc] initWithUTF8String:errorMsg];
        [label setLineBreakMode:NSLineBreakByWordWrapping];
        [label setNumberOfLines:0];
        [self.view addSubview:label];

        mrb_close(mMrb);
        mMrb = NULL;

        return;
    }

    [self callScript];
}

- (void)qb_imagePickerController:(QBImagePickerController *)picker didFinishPickingAssets:(NSArray *)assets
{
    mReceivePicked = [[NSMutableArray alloc] initWithCapacity:[assets count]];
    
    PHImageRequestOptions *options = [[PHImageRequestOptions alloc] init];
    options.synchronous = YES;
    options.deliveryMode = PHImageRequestOptionsDeliveryModeHighQualityFormat;
    options.resizeMode = PHImageRequestOptionsResizeModeExact;
    
    for (PHAsset* asset in assets) {
        [[PHImageManager defaultManager] requestImageForAsset:asset
                                                   targetSize:PHImageManagerMaximumSize
                                                  contentMode:PHImageContentModeAspectFit
                                                      options:options
                                                resultHandler:^(UIImage *result, NSDictionary *info) {
                if (result) {
                    [mReceivePicked addObject:result];
                }
            }];
    }

    [self dismissViewControllerAnimated:YES completion:NULL];
}

- (void)qb_imagePickerControllerDidCancel:(QBImagePickerController *)picker 
{
    [self dismissViewControllerAnimated:YES completion:NULL];
}

- (void)initScript
{
    pictruby::BindImage::SetScriptController((__bridge void*)self);

    // Create fiber
    mFiber = mrb_funcall(mMrb, mrb_obj_value(mMrb->kernel_module), "make_convert_to_fiber", 0);
}

- (void)callScript
{
    mrb_value ret = mrb_funcall(mMrb, mFiber, "execute", 0, NULL);
    // mrb_p(mMrb, ret);
    mrb_value isAlive = mrb_funcall(mMrb, mFiber, "continue?", 0 , NULL);
    // mrb_p(mMrb, isAlive);

    if (mrb_obj_eq(mMrb, isAlive, mrb_false_value())) {
        if (mrb_obj_is_instance_of(mMrb, ret, mrb_class_get(mMrb, "Image"))) {
            UIImage* image = pictruby::BindImage::ToPtr(mMrb, ret);
            // NSLog(@"image w:%f, h:%f", image.size.width, image.size.height);
            mImageView.image = image;
        }

        // TODO: Stop timer
        mrb_close(mMrb);
        mMrb = NULL;
    }
}

- (void) startPickFromLibrary:(int)num
{
    mReceivePicked = NULL;
    mImagePicker.allowsMultipleSelection = (num > 1) ? YES : NO;
    mImagePicker.maximumNumberOfSelection = num;
    [self presentViewController:mImagePicker animated:YES completion:nil];
}

- (void) startPopupInput:(NSString*)path;
{
    mReceivePicked = NULL;

    UIAlertView* alert = [[UIAlertView alloc] init];
    alert.title = path;
    [alert addButtonWithTitle:@"Cancel"];
    [alert addButtonWithTitle:@"OK"];
    [alert setAlertViewStyle:UIAlertViewStylePlainTextInput];
    alert.delegate = self;
    alert.cancelButtonIndex = 0;
    [alert show];
}

- (void) startPopupMsg:(NSString*)path;
{
    mReceivePicked = NULL;

    UIAlertView* alert = [[UIAlertView alloc] initWithTitle:@""
                                                    message:path
                                                   delegate:self
                                          cancelButtonTitle:@"OK"
                                          otherButtonTitles:nil];
    [alert show];
}

- (void)alertView:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    mReceivePicked = [[NSMutableArray alloc] initWithCapacity:1];

    if (buttonIndex == alertView.cancelButtonIndex) {
        return;
    }

    NSString* text = [[alertView textFieldAtIndex:0] text];
    [mReceivePicked addObject:text];
}

- (NSMutableArray*) receivePicked
{
    NSMutableArray* array = mReceivePicked;
    mReceivePicked = NULL;
    return array;
}

- (void) printstr:(NSString*)str
{
    [mTextView setText:[mTextView.text stringByAppendingString:str]];
}

- (void) tapSaveButton
{
    if (mImageView.image) {
        UIImageWriteToSavedPhotosAlbum(
            mImageView.image, 
            self, 
            @selector(onSaved:didFinishSavingWithError:contextInfo:),
            NULL
            );
    } else {
        UIPasteboard *pastebd = [UIPasteboard generalPasteboard];
        [pastebd setValue:mTextView.text forPasteboardType: @"public.utf8-plain-text"];

        UIAlertView* alert = [[UIAlertView alloc] initWithTitle:@""
                                                        message:mTextView.text
                                                       delegate:nil
                                              cancelButtonTitle:@"OK"
                                              otherButtonTitles:nil];
        [alert show];
    }
}

- (void) onSaved:(UIImage*)image didFinishSavingWithError:(NSError*)error contextInfo:(void*)contextInfo
{
    NSString* message = !error ? @"Save Complete" : @"Save Failed";

    UIAlertView* alert = [[UIAlertView alloc] initWithTitle:@""
                                                    message:message
                                                   delegate:nil
                                          cancelButtonTitle:@"OK"
                                          otherButtonTitles:nil];
    [alert show];
}

@end
