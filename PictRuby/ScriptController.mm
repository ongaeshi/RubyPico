#import "ScriptController.h"

#import "BindImage.hpp"
#import "BindPopup.hpp"
#import "mruby.h"
#import "mruby/class.h"
#import "mruby/compile.h"
#import "mruby/irep.h"
#import "mruby/string.h"
#import "mruby/error.h"

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

- (id) initWithScriptName:(NSString*)scriptPath
{
    self = [super init];
    mScriptPath = scriptPath;
    mTextView = NULL;
    mImageView = NULL;
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];

    // // Create ImagePicker
    // mImagePicker = [QBImagePickerController new];
    // [mImagePicker setDelegate:self];
    // mImagePicker.showsNumberOfSelectedAssets = YES;
    
    // // Create timer
    // mTimer = [NSTimer scheduledTimerWithTimeInterval:1.0/30.0 target:self selector:@selector(timerProcess) userInfo:nil repeats:YES];
    // mValue = 0;

    // // NavButton
    // UIBarButtonItem* saveButton = [[UIBarButtonItem alloc] initWithTitle:@"Save"
    //                                                                style:UIBarButtonItemStyleBordered
    //                                                               target:self
    //                                                               action:@selector(tapSaveButton)];
    // self.navigationItem.rightBarButtonItems = [NSArray arrayWithObjects:saveButton, nil];

    // // mTextView
    // mTextView = [[UITextView alloc] initWithFrame:self.view.bounds];
    // mTextView.editable = NO;
    // mTextView.dataDetectorTypes = UIDataDetectorTypeLink;
    // mTextView.font = [UIFont fontWithName:@"Courier" size:12];
    // mTextView.text = @"";
    // [self.view addSubview:mTextView];

    // // Tap title
    // UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    // button.backgroundColor = [UIColor clearColor];
    // [button setTitle:[mScriptPath lastPathComponent] forState:UIControlStateNormal];
    // [button setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    // button.frame = CGRectMake(0.0, 0.0, 120.0, self.navigationController.navigationBar.frame.size.height);
    // self.navigationItem.titleView = button;

    // // mImageView
    // mImageView = [[UIImageView alloc] init];
    // mImageView.image = NULL;
    // mImageView.frame = self.view.frame;
    // mImageView.contentMode = UIViewContentModeScaleAspectFit; //UIViewContentModeCenter?
    // [self.view addSubview:mImageView];

    UIButton *button1 = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    button1.translatesAutoresizingMaskIntoConstraints = NO;
    [button1 setTitle:@"Button1dfaffsaffafa" forState:UIControlStateNormal];
    [self.view addSubview:button1];

    UILabel* label = [[UILabel alloc] init];
    label.translatesAutoresizingMaskIntoConstraints = NO;
    label.text = @"HELLO hogehoh aoaaa 今日には";
    [self.view addSubview:label];

    UIButton *button2 = [UIButton buttonWithType:UIButtonTypeRoundedRect];
    button2.translatesAutoresizingMaskIntoConstraints = NO;
    [button2 setTitle:@"Button2" forState:UIControlStateNormal];
    [self.view addSubview:button2];

    NSDictionary *viewsDictionary = NSDictionaryOfVariableBindings(button1, label, button2);

    NSArray* constraints;
    
    constraints = [NSLayoutConstraint constraintsWithVisualFormat:@"|-[label]"
                                                          options:0
                                                          metrics:nil
                                                            views:viewsDictionary];
    [self.view addConstraints:constraints];

    constraints = [NSLayoutConstraint constraintsWithVisualFormat:@"|-[button1]"
                                                          options:0
                                                          metrics:nil
                                                            views:viewsDictionary];
    [self.view addConstraints:constraints];

    constraints = [NSLayoutConstraint constraintsWithVisualFormat:@"|-[button2]"
                                                          options:0
                                                          metrics:nil
                                                            views:viewsDictionary];
    [self.view addConstraints:constraints];

    constraints = [NSLayoutConstraint constraintsWithVisualFormat:@"V:|-200-[button1]-[label]-[button2]"
                                                          options:0
                                                          metrics:nil
                                                            views:viewsDictionary];
    [self.view addConstraints:constraints];

    // Init mruby
    // [self initScript];
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
    mMrb = mrb_open();

    // Bind
    pictruby::BindImage::SetScriptController((__bridge void*)self);
    pictruby::BindImage::Bind(mMrb);
    pictruby::BindPopup::Bind(mMrb);

    // Load builtin library
    // mrb_load_irep(mMrb, BuiltIn);
    {
        NSString* path = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"builtin.rb"];
        char* scriptPath = (char *)[path UTF8String];
        FILE *fd = fopen(scriptPath, "r");
        mrb_load_file(mMrb, fd);
        fclose(fd);
    }

    // Load user script
    int arena = mrb_gc_arena_save(mMrb);
    {
        char* scriptPath = (char *)[mScriptPath UTF8String];
        FILE *fd = fopen(scriptPath, "r");

        mrbc_context *cxt = mrbc_context_new(mMrb);

        const char* fileName = [[[[NSString alloc] initWithUTF8String:scriptPath] lastPathComponent] UTF8String];
        mrbc_filename(mMrb, cxt, fileName);

        mrb_load_file_cxt(mMrb, fd, cxt);

        mrbc_context_free(mMrb, cxt);

        fclose(fd);
    }
    mrb_gc_arena_restore(mMrb, arena);

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
