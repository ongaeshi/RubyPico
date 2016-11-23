#import <UIKit/UIKit.h>

@interface SelectViewController : UITableViewController

- (id)initWithFileDirectory:(NSString*)directory title:(NSString*)title edit:(BOOL)editable;
- (id)initWithFileDirectory:(NSString*)directory title:(NSString*)title edit:(BOOL)editable directRun:(BOOL)isDirecRun runDir:(NSString*)runDir;
- (void)runWithScriptName:(NSString*)name;

@end
