#import <UIKit/UIKit.h>

@interface SelectViewController : UITableViewController

- (id)initWithFileDirectory:(NSString*)directory title:(NSString*)title edit:(BOOL)editable;
- (void)runWithScriptName:(NSString*)name;

@end
