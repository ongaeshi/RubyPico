#import <UIKit/UIKit.h>
#import <QBImagePickerController/QBImagePickerController.h>

@interface ScriptController : UIViewController<UINavigationControllerDelegate, QBImagePickerControllerDelegate>
- (id) initWithScriptName:(NSString*)scriptPath;
- (void) startPickFromLibrary:(int)num;
- (void) startPopupInput:(NSString*)path;
- (void) startPopupMsg:(NSString*)path;
- (NSMutableArray*) receivePicked;
- (void) printstr:(NSString*)str;
@end

#ifdef __cplusplus
extern "C" {
#endif

extern ScriptController *globalScriptController;

#ifdef __cplusplus
}
#endif
