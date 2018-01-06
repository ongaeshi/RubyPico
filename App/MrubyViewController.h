//
//  mruby View Controller
//

#import <UIKit/UIKit.h>
#import <QBImagePickerController/QBImagePickerController.h>

@interface MrubyViewController :
    UIViewController<UINavigationControllerDelegate, QBImagePickerControllerDelegate, UITextViewDelegate>

- (id)initWithScriptPath:(NSString*)scriptPath;
- (id)initWithScriptPath:(NSString*)scriptPath runDir:(NSString*)runDir;
- (void)printstr:(NSString*)str;
- (void)printAttrString:(NSMutableAttributedString*)str;
- (void)printimage:(UIImage*)image;
- (BOOL)isCanceled;
- (void)startPopupInput:(NSString*)path;
- (void)startPopupMsg:(NSString*)path;
- (NSMutableArray*) receivePicked;
- (void)startPickFromLibrary:(int)num;
- (void)startInput;
- (void)clear;
- (NSString*)getClickedLink;
- (BOOL)isBackground;
- (void)setBackground;

@end

extern MrubyViewController *globalMrubyViewController;
