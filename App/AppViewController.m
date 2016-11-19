#include "AppViewController.h"

#include "FCFileManager.h"

@interface AppViewController ()

@end

@implementation AppViewController

- (id)init
{
    NSString *appDir = [[FCFileManager pathForDocumentsDirectory] stringByAppendingPathComponent:@".app"];

    if (![FCFileManager existsItemAtPath:appDir]) {
        [FCFileManager createDirectoriesForPath:appDir];
    }

    self = [super initWithFileDirectory: appDir
                                  title: @"App"
                                   edit: false
        ];
    return self;
}

@end
