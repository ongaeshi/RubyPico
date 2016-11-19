#include "AppViewController.h"

#include "FCFileManager.h"

@interface AppViewController ()

@end

@implementation AppViewController

- (id)init
{
    self = [super initWithFileDirectory: [FCFileManager pathForDocumentsDirectory]
                                  title: @"App"
                                   edit: false
        ];
    return self;
}

@end
