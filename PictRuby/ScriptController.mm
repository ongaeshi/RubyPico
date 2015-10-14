#import "ScriptController.h"

#import "BindImage.hpp"
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
    UIImageView* mImageView;
    NSMutableArray* mReceivePicked;
}

- (id) initWithScriptName:(NSString*)scriptPath
{
    self = [super init];
    mScriptPath = scriptPath;
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
    mMrb = mrb_open();

    // Bind
    pictruby::BindImage::Bind(mMrb);
    pictruby::BindImage::SetScriptController((__bridge void*)self);

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
        if (!mrb_obj_is_instance_of(mMrb, ret, mrb_class_get(mMrb, "Image"))) {
            mrb_value str = mrb_funcall(mMrb, ret, "inspect", 0);
            const char* errorMsg = mrb_string_value_cstr(mMrb, &str);

            UILabel* label = [[UILabel alloc] init];
            label.frame = self.view.bounds;
            label.backgroundColor = [UIColor whiteColor];
            label.text = [NSString stringWithFormat:@"%s", errorMsg];
            [label setLineBreakMode:NSLineBreakByWordWrapping];
            [label setNumberOfLines:0];
            [self.view addSubview:label];

        } else {
            UIImage* image = pictruby::BindImage::ToPtr(mMrb, ret);

            // NSLog(@"image w:%f, h:%f", image.size.width, image.size.height);

            // TODO: Adjust navbar
            mImageView = [[UIImageView alloc] initWithImage:image];
            mImageView.frame = self.view.frame;
            mImageView.contentMode = UIViewContentModeScaleAspectFit; //UIViewContentModeCenter?
            [self.view addSubview:mImageView];
        }


        // End script
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

- (NSMutableArray*) receivePicked
{
    NSMutableArray* array = mReceivePicked;
    mReceivePicked = NULL;
    return array;
}

- (void) tapSaveButton
{
    UIImageWriteToSavedPhotosAlbum(
        mImageView.image, 
        self, 
        @selector(onSaved:didFinishSavingWithError:contextInfo:),
        NULL
        );
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
