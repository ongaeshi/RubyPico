#import <UIKit/UIKit.h>
#import <QBImagePickerController/QBImagePickerController.h>

@interface ScriptController : UIViewController<UINavigationControllerDelegate, QBImagePickerControllerDelegate>
- (id) initWithScriptName:(NSString*)scriptPath;
- (void) startPickFromLibrary:(int)num;
- (void) startPopupInput:(NSString*)path;
- (NSMutableArray*) receivePicked;
@end
