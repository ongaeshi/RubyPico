#pragma once

#import "ScriptController.h"
#import "mruby.h"
#import <UIKit/UIKit.h>

//----------------------------------------------------------
namespace pictruby {

extern ScriptController *globalScriptController;

class BindImage {
public:
    static void Bind(mrb_state* mrb);
    static mrb_value ToMrb(mrb_state* mrb, UIImage* aPtr);
    static UIImage* ToPtr(mrb_state* mrb, mrb_value aValue);
    static void SetScriptController(void* aScriptController);
};

}
