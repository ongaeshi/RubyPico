//
// mrb misc functions
// 

#import "mrb_misc.h"

#import "mruby/string.h"
#import <Foundation/Foundation.h>

static void
printstr(mrb_state *mrb, mrb_value obj)
{
  if (mrb_string_p(obj)) {
    const char* cstr = mrb_string_value_ptr(mrb, obj);
    NSString* nstr = [[NSString alloc] initWithUTF8String:cstr];
    NSLog(@"foo: %@", nstr);
    // [globalScriptController printstr:nstr];
  }
}

static mrb_value
mrb_printstr(mrb_state *mrb, mrb_value self)
{
  mrb_value argv;

  mrb_get_args(mrb, "o", &argv);
  printstr(mrb, argv);

  return argv;
}

void
mrb_rubypico_misc_init(mrb_state* mrb)
{
    struct RClass *krn = mrb->kernel_module;

    mrb_define_method(mrb, krn, "__printstr__", mrb_printstr, MRB_ARGS_REQ(1));
}

void
mrb_rubypico_misc_final(mrb_state* mrb)
{
}
