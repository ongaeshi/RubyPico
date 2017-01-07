#import "ImageViewController.h"

@implementation ImageViewController {
    NSString* _path;
}

- (id) initWithFileName:(NSString*)path {
    self = [super init];
    if (self) {
        _path = path;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
