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

    textView.text = @"circle(x, y, radius)\n"
        "ellipse(x, y, width, height)\n"
        "line(x1, y1, x2, y2)\n"
        "rect(x, y, w, h)\n"
        "rect_rounded(x, y, w, h, r)\n"
        "text(str, x, y)\n"
        "triangle(x1, y1, x2, y2, x3, y3)\n"
        "\n"
        "push_matrix(&block)\n"
        "pop_matrix\n"
        "translate(x, y)\n"
        "scale(x, y)\n"
        "rotate(degrees)\n"
        "\n"
        "set_circle_resolution(res)\n"
        "set_fill(enable = true)\n"
        "set_no_fill\n"
        "is_fill\n"
        "set_line_width(width)\n"
        "set_color(r, g, b, a = 255)\n"
        "set_color_hex(hex, a = 255)\n"
        "set_background(r, g, b)\n"
        "set_background_hex(hex)\n"
        "set_background_auto(flag)\n"
        "\n"
        "frame_rate\n"
        "width\n"
        "height\n"
        "window_width\n"
        "window_height\n"
        "screen_width\n"
        "screen_height\n"
        "\n"
        "srand\n"
        "srand(seed)\n"
        "rand(max = 1.0)\n"
        "clamp(value, min, max)\n"
        "lerp(start, stop, amt)\n"
        "dist(x, y, x2, y2)\n"
        "dist_squared(x, y, x2, y2)\n"
        "rad_to_deg(radians)\n"
        "deg_to_rad(degrees)\n"
        "noise(x)\n"
        "noise(x, y)\n"
        "noise(x, y, z)\n"
        "\n"
        "Input\n"
        "  Input.touch(idx)\n"
        "  Input.touches\n"
        "\n"
        "TouchPoint\n"
        "  valid?\n"
        "  x\n"
        "  y\n"
        "  press?\n"
        "  down?\n"
        "  release?\n"
        "\n"
        "Image\n"
        "  Image.load(path)\n"
        "  Image.sample(path)\n"
        "  Image.emoji(name)\n"
        "  Image.grab_screen(x, y, w, h)\n"
        "\n"
        "  clone(image)\n"
        "  color(x, y)\n"
        "  set_color(x, y, color)\n"
        "  resize(width, height)\n"
        "  crop(x, y, w, h)\n"
        "  crop!(x, y, w, h)\n"
        "  rotate90(rotation)\n"
        "  mirror(vertical, horizontal)\n"
        "  update\n"
        "  set_anchor_percent(xpct, ypct)\n"
        "  set_anchor_point(x, y)\n"
        "  reset_anchor\n"
        "  draw(x, y, w, h)\n"
        "  draw_sub(x, y, w, h, sx, sy, sw = nil, sh = nil)\n"
        "  height      \n"
        "  width\n"
        "  each_pixels(&block)\n"
        "  map_pixels(&block)\n"
        "\n"
        "Twemoji\n"
        "Copyright 2014 Twitter, Inc and other contributors\n"
        "CC BY 4.0 (https://creativecommons.org/licenses/by/4.0/)\n"
        ;

    [self.view addSubview:textView];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
