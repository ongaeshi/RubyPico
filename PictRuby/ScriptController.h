#import <UIKit/UIKit.h>

@interface ScriptController : UIViewController<UINavigationControllerDelegate, UIImagePickerControllerDelegate>
- (id) initWithScriptName:(char*)scriptPath;
- (void) startPickFromLibrary;
- (UIImage*) receivePicked;
@end
