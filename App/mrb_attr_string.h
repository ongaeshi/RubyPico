//
// mrb attribute string functions
// 

#import "mruby.h"
#import <UIKit/UIKit.h>

void mrb_rubypico_attr_string_init(mrb_state* mrb);
void mrb_rubypico_attr_string_final(mrb_state* mrb);

mrb_value mrb_rubypico_attr_string_to_mrb(mrb_state* mrb, NSMutableAttributedString* aPtr);
NSMutableAttributedString* mrb_rubypico_attr_string_to_ptr(mrb_state* mrb, mrb_value aValue);
