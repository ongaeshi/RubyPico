//
// mrb image functions
// 

#import "mruby.h"
#import <UIKit/UIKit.h>

void mrb_rubypico_image_init(mrb_state* mrb);
void mrb_rubypico_image_final(mrb_state* mrb);

mrb_value mrb_rubypico_image_to_mrb(mrb_state* mrb, UIImage* aPtr);
UIImage* mrb_rubypico_image_to_ptr(mrb_state* mrb, mrb_value aValue);
