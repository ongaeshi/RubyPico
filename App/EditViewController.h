//
//  EditViewController.h
//  ofruby
//
//  Created by ongaeshi on 2014/08/09.
//
//

#import <UIKit/UIKit.h>

@interface EditViewController : UIViewController<UITextViewDelegate>
{
    BOOL mEditable;
@private
    NSString* mFileName;
    BOOL mTouched;
}

- (id) initWithFileName:(NSString*)aFileName edit:(BOOL)aEditable;

@end
;
