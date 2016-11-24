#import "AppViewController.h"

#import "FCFileManager.h"

@interface AppViewController ()

@end

@implementation AppViewController {
    NSString *_appDir;
}

- (id)init {
    _appDir = [[FCFileManager pathForDocumentsDirectory] stringByAppendingPathComponent:@".app"];

    if (![FCFileManager existsItemAtPath:_appDir]) {
        [FCFileManager createDirectoriesForPath:_appDir];

        // Add sample app
        [self createApp:[_appDir stringByAppendingPathComponent:@"irb"] requirePath:@"sample/irb"];
        [self createApp:[_appDir stringByAppendingPathComponent:@"lineno"] requirePath:@"sample/lineno"];
    }

    self = [super initWithFileDirectory:_appDir
                                  title:@"App"
                                   edit:NO
                              directRun:YES
                                 runDir:[FCFileManager pathForDocumentsDirectory]];
    return self;
}

- (void)createApp:(NSString*)path requirePath:(NSString*)requirePath {
    [FCFileManager createFileAtPath:path
                        withContent:[NSString stringWithFormat:@"require \"%@\"\n", requirePath]];
}

@end
