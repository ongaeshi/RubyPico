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
        // Create directories
        [FCFileManager createDirectoriesForPath:_appDir];

        NSString *sampleDir = [[FCFileManager pathForDocumentsDirectory] stringByAppendingPathComponent:@".sample"];
        [FCFileManager createDirectoriesForPath:sampleDir];

        // Copy sample to Documents/.sample
        NSString *resourceSampleDir = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"sample"];
        [FCFileManager copyItemAtPath:[resourceSampleDir stringByAppendingPathComponent:@"irb.rb"]
                               toPath:[sampleDir stringByAppendingPathComponent:@"irb.rb"]];

        // Link default tools
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
