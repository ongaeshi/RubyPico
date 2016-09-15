//
//  mruby View Controller
//

#import <UIKit/UIKit.h>
#import <QBImagePickerController/QBImagePickerController.h>

@interface MrubyViewController :
    UIViewController<UINavigationControllerDelegate, QBImagePickerControllerDelegate, UITextViewDelegate>

- (id)initWithScriptPath:(NSString*)scriptPath;
- (void)printstr:(NSString*)str;
- (void)printAttrString:(NSMutableAttributedString*)str;
- (void)printimage:(UIImage*)image;
- (BOOL)isCanceled;
- (void)startPopupInput:(NSString*)path;
- (void)startPopupMsg:(NSString*)path;
- (NSMutableArray*) receivePicked;
- (void)startPickFromLibrary:(int)num;
- (void)startInput;

@end

extern MrubyViewController *globalMrubyViewController;
