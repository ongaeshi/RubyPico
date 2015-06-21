#import "ScriptController.h"

#import "BindImage.hpp"
#import "mruby.h"
#import "mruby/class.h"
#import "mruby/compile.h"
#import "mruby/irep.h"
#import "mruby/string.h"

@implementation ScriptController
{
    const char* mScriptPath;
    mrb_state* mMrb;
    mrb_value mFiber;
    NSTimer* mTimer;
    int mValue;
    UIImagePickerController* mImagePicker;
    UIImageView* mImageView;
    UIImage* mReceivePicked;
}

- (id) initWithScriptName:(char*)scriptPath
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
    mImagePicker = [[UIImagePickerController alloc] init];
    [mImagePicker setSourceType:UIImagePickerControllerSourceTypePhotoLibrary];
    [mImagePicker setAllowsEditing:YES];
    [mImagePicker setDelegate:self];

    // Create timer
    mTimer = [NSTimer scheduledTimerWithTimeInterval:1.0/30.0 target:self selector:@selector(timerProcess) userInfo:nil repeats:YES];
    mValue = 0;

    // Init mruby
    [self initScript];
}

- (void)timerProcess
{
    if (!mMrb) {
        return;
    }

    [self callScript];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info
{
    UIImage *image = (UIImage *)[info objectForKey:UIImagePickerControllerOriginalImage];
    if (image) {
        mReceivePicked = image;
    }

    [self dismissViewControllerAnimated:YES completion:nil];
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
    FILE *fd = fopen(mScriptPath, "r");
    mrb_load_file(mMrb, fd);
    fclose(fd);

    // Create fiber
    mFiber = mrb_funcall(mMrb, mrb_obj_value(mMrb->kernel_module), "make_convert_to_fiber", 0);
}

- (void)callScript
{
    mrb_value ret = mrb_funcall(mMrb, mFiber, "execute", 0, NULL);
    mrb_p(mMrb, ret);
    mrb_value isAlive = mrb_funcall(mMrb, mFiber, "continue?", 0 , NULL);
    mrb_p(mMrb, isAlive);

    if (mrb_obj_eq(mMrb, isAlive, mrb_false_value())) {
        UIImage* image = pictruby::BindImage::ToPtr(mMrb, ret);

        // TODO: Adjust navbar
        mImageView = [[UIImageView alloc] initWithImage:image];
        mImageView.frame = self.view.frame;
        mImageView.contentMode = UIViewContentModeScaleAspectFit; //UIViewContentModeCenter?
        [self.view addSubview:mImageView];

        // End script
        // TODO: Stop timer
        mrb_close(mMrb);
        mMrb = NULL;
    }
}

- (void) startPickFromLibrary
{
    mReceivePicked = NULL;
    [self presentViewController:mImagePicker animated:YES completion:nil];
}

- (UIImage*) receivePicked
{
    UIImage* img = mReceivePicked;
    mReceivePicked = NULL;
    return img;
}

@end
