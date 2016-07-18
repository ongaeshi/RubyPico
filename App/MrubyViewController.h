//
//  mruby View Controller
//

#import <UIKit/UIKit.h>

@interface MrubyViewController :
    // UIViewController<UINavigationControllerDelegate, QBImagePickerControllerDelegate>
    UIViewController<UINavigationControllerDelegate>

- (id)initWithScriptPath:(NSString*)scriptPath;
- (void)printstr:(NSString*)str;
- (BOOL)isCanceled;
- (void) startPopupInput:(NSString*)path;
- (void) startPopupMsg:(NSString*)path;
- (NSMutableArray*) receivePicked;

@end

extern MrubyViewController *globalMrubyViewController;
