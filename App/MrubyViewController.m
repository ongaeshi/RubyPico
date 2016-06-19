//
//  mruby View Controller Implementation
//

#import "MrubyViewController.h"

@implementation MrubyViewController {
    NSString* _scriptPath;
}

- (id) initWithScriptPath:(NSString*)scriptPath {
    self = [super init];
    _scriptPath = scriptPath;
    return self;
}

@end
