#import "HelpViewController.h"

@interface HelpViewController ()

@end

@implementation HelpViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

    // TextView
    CGRect rect = self.view.bounds;
    UITextView* textView = [[UITextView alloc]initWithFrame:rect];
    textView.editable = NO;
    //DIFF textView.textAlignment = UITextAlignmentLeft;
    //textView.font = [UIFont fontWithName:@"Helvetica" size:14];
    //textView.backgroundColor = [UIColor whiteColor];
    textView.autocapitalizationType = UITextAutocapitalizationTypeNone;

    textView.text = @
        "Image\n"
        "  Iamge.pick_from_library(num = 1)\n"
        "  Image.load(path)\n"
        "  Image.render(x, y)\n"
        "\n"
        "  bright(bias)    # -255~255\n"
        "  contrast(bias)  # -255~255\n"
        "  edge\n"
        "  emboss(bias)\n"
        "  gamma(value)    # 0.01~8\n"
        "  gray\n"
        "  sepia\n"
        "  invert\n"
        "  opacity(value)  # 0.0~1.0\n"
        "  sharpe(bias)\n"
        "  unsharp(bias)\n"
        "  blur(bias)\n"
        "  reflection(from_alpha, to_alpha)\n"
        "\n"
        "  width\n"
        "  height\n"
        "\n"
        "  resize(x, y)\n"
        "  resize_force(x, y)\n"
        "  crop(x, y, width, height)\n"
        "  rotate(degree)\n"
        "\n"
        "  save\n"
        "\n"
        "  draw(x, y, w, h)\n"
        "\n"
        "ImageUtil\n"
        "  IamgeUtil.grid(imgs)\n"
        "  ImageUtil.vertical(imgs)\n"
        "  ImageUtil.horizontal(imgs)\n"
        "\n"
        "\n"
        "\n"
        "--- \n"
        "WPZOOM Developer Icon Set\n"
        "CC BY-SA 3.0 (http://creativecommons.org/licenses/by-sa/3.0/)\n"
        ;

    [self.view addSubview:textView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
