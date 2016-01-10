#import <UIKit/UIKit.h>

@interface SelectViewController : UITableViewController
{
    NSMutableArray* mDataSource;
    NSString* mFileDirectory;
    NSString* mTitle;
    BOOL mEditable;
}

- (id)initWithFileDirectory:(NSString*)directory title:(NSString*)title edit:(BOOL)editable;
- (void)directRun:(NSString*)name;

@end
