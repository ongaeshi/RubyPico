#import <UIKit/UIKit.h>
#import <QBImagePickerController/QBImagePickerController.h>

@interface ScriptController : UIViewController<UINavigationControllerDelegate, QBImagePickerControllerDelegate>
- (id) initWithScriptName:(NSString*)scriptPath;
- (void) startPickFromLibrary:(int)num;
- (NSMutableArray*) receivePicked;
@end
