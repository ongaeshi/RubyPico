#import "BindPopup.hpp"

#import "mruby.h"
#import "mruby/string.h"
#import <UIKit/UIKit.h>

namespace pictruby {

namespace {
mrb_value input(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* path = mrb_string_value_ptr(mrb, str);
    NSString *npath = [[NSString alloc] initWithUTF8String:path];

    UIAlertView* alert = [[UIAlertView alloc] init];
    alert.title = npath;

    [alert addButtonWithTitle:@"Cancel"];
    [alert addButtonWithTitle:@"OK"];
    [alert setAlertViewStyle:UIAlertViewStylePlainTextInput];
    alert.cancelButtonIndex = 0;
    [alert show];
    
    return mrb_nil_value();
}

}

//----------------------------------------------------------
void BindPopup::Bind(mrb_state* mrb)
{
    struct RClass *cc = mrb_define_class(mrb, "Popup", mrb->object_class);

    mrb_define_class_method(mrb , cc, "input",               input,               MRB_ARGS_REQ(1));
}

}
