/*
** button.c - UIButton wrapper
*/

#import "BindButton.h"

void mrb_pictruby_button_init(mrb_state* mrb)
{
    struct RClass *cc = mrb_define_class(mrb, "Button", mrb->object_class);
}

void mrb_pictruby_button_final(mrb_state* mrb)
{
}
