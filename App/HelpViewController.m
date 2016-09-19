#import "HelpViewController.h"

#import "MrubyUtil.h"

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
    textView.dataDetectorTypes = UIDataDetectorTypeLink;
    //DIFF textView.textAlignment = UITextAlignmentLeft;
    textView.font = [MrubyUtil font];
    //textView.backgroundColor = [UIColor whiteColor];
    textView.autocapitalizationType = UITextAutocapitalizationTypeNone;

    textView.text = @
        "Browser\n"
        "  Browser.get(url)\n"
        "  Browser.json(url)\n"
        "  Browser.open(url)\n"
        "  Browser.open?(url)\n"
        "\n"
        "Image\n"
        "  Image.pick_from_library(num = 1)\n"
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
        "  sharp(bias)\n"
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
        "  draw(x, y, width, height)\n"
        "\n"
        "ImageUtil\n"
        "  IamgeUtil.grid(imgs)\n"
        "  ImageUtil.vertical(imgs)\n"
        "  ImageUtil.horizontal(imgs)\n"
        "\n"
        "Popup\n"
        "  Popup.input(msg)\n"
        "  Popup.msg(msg)\n"
        "\n"
        "URI\n"
        "  URI.encode_www_form(enum)\n"
        "  URI.encode_www_form_component(str)\n"
        "\n"
        "\n"
        "\n"
        "--- \n"
        "LICENSE\n"
        "https://github.com/ongaeshi/RubyPico/blob/master/LICENSE.md\n"
        ;

    [self.view addSubview:textView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
