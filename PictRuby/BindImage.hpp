#pragma once

#import "ScriptController.h"
#import "mruby.h"
#import <UIKit/UIKit.h>

//----------------------------------------------------------
namespace pictruby {

class BindImage {
public:
    static void Bind(mrb_state* mrb);
    static mrb_value ToMrb(mrb_state* mrb, UIImage* aPtr);
    static UIImage* ToPtr(mrb_state* mrb, mrb_value aValue);
};

}
