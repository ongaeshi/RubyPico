#include "FileViewController.h"

#include "FCFileManager.h"

@interface FileViewController ()

@end

@implementation FileViewController

- (id)init {
    self = [super initWithFileDirectory: [FCFileManager pathForDocumentsDirectory]
                                  title: @"File"
                                   edit: YES];
    return self;
}

@end
