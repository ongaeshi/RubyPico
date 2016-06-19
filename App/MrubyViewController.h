//
//  mruby View Controller
//

#import <UIKit/UIKit.h>

@interface MrubyViewController :
    // UIViewController<UINavigationControllerDelegate, QBImagePickerControllerDelegate>
    UIViewController<UINavigationControllerDelegate>

- (id)initWithScriptPath:(NSString*)scriptPath;
- (void)printstr:(NSString*)str;

@end

extern MrubyViewController *globalMrubyViewController;
