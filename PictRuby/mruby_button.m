/*
** mruby_button.m - UIButton wrapper
*/

#import "mruby_button.h"

#import <UIKit/UIKit.h>
#include "mruby.h"
#include "mruby/class.h"
#include "mruby/data.h"

static void free_func(mrb_state *mrb, void *p)
{
    [(__bridge UIButton*)p release];
}

struct mrb_data_type mrb_pictruby_button_type = { "pictruby_button", free_func };

static mrb_value to_value(mrb_state* mrb, struct RClass* cc, UIButton* ptr)
{
    if (ptr) {
        return mrb_obj_value(Data_Wrap_Struct(mrb, cc, &mrb_pictruby_button_type, (__bridge void*)ptr));
    } else {
        return mrb_nil_value();
    }
}

static mrb_value
initialize(mrb_state* mrb, mrb_value self)
{
    UIButton *button = [[UIButton buttonWithType:UIButtonTypeCustom] retain];
    return to_value(mrb, mrb_class_ptr(self), button);
}

void
mrb_pictruby_button_init(mrb_state* mrb)
{
    struct RClass *cc = mrb_define_class(mrb, "Button", mrb->object_class);
    MRB_SET_INSTANCE_TT(cc, MRB_TT_DATA);

    mrb_define_method(mrb, cc, "initialize", initialize, MRB_ARGS_NONE());
}

void
mrb_pictruby_button_final(mrb_state* mrb)
{
}
