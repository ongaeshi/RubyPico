#import "AppViewController.h"

#import "FCFileManager.h"

@interface AppViewController ()

@end

@implementation AppViewController {
    NSString* _appDir;
}

- (id)init {
    _appDir = [[FCFileManager pathForDocumentsDirectory] stringByAppendingPathComponent:@".app"];

    if (![FCFileManager existsItemAtPath:_appDir]) {
        [FCFileManager createDirectoriesForPath:_appDir];
        
        // Link default tools
        NSString *sampleDir = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"sample"];
        [self createLinkAtPath:[sampleDir stringByAppendingPathComponent:@"irb.rb"]];
    }

    self = [super initWithFileDirectory: _appDir
                                  title: @"App"
                                   edit: false];
    return self;
}

- (void)createLinkAtPath:(NSString*)destPath {
    NSString *name = [[destPath lastPathComponent] stringByDeletingPathExtension];
    NSString *path = [_appDir stringByAppendingPathComponent:name];

    [[NSFileManager defaultManager] createSymbolicLinkAtPath:path
                                         withDestinationPath:destPath
                                                       error:nil];
}

@end
