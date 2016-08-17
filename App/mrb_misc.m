//
// mrb misc functions
// 

#import "mrb_misc.h"

#import "MrubyViewController.h"
#import "mrb_image.h"
#import "mruby/array.h"
#import "mruby/string.h"
#import <Foundation/Foundation.h>

static void
printstr(mrb_state *mrb, mrb_value obj)
{
  if (mrb_string_p(obj)) {
    const char* cstr = mrb_string_value_ptr(mrb, obj);
    NSString* nstr = [[NSString alloc] initWithUTF8String:cstr];
    // NSLog(@"%@", nstr);
    dispatch_sync(dispatch_get_main_queue(), ^{ // Should use dispatch_async?
        [globalMrubyViewController printstr:nstr];
    });
  } else if (mrb_obj_is_instance_of(mrb, obj, mrb_class_get(mrb, "Image"))) {
    dispatch_sync(dispatch_get_main_queue(), ^{ // Should use dispatch_async?
        [globalMrubyViewController printimage:mrb_rubypico_image_to_ptr(mrb, obj)];
    });
  }
}

void rubypico_misc_p(mrb_state *mrb, mrb_value obj)
{
    mrb_p(mrb, obj);
    printstr(mrb, mrb_funcall(mrb, obj, "inspect", 0));
}

static mrb_value
mrb_printstr(mrb_state *mrb, mrb_value self)
{
  mrb_value argv;

  mrb_get_args(mrb, "o", &argv);
  printstr(mrb, argv);

  return argv;
}

static mrb_value
mrb_gets(mrb_state *mrb, mrb_value self)
{
    return mrb_nil_value();
}

static mrb_value
mrb_clipboard_get(mrb_state *mrb, mrb_value self)
{
    UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
    NSString *string = [pasteboard valueForPasteboardType:@"public.text"];

    return mrb_str_new_cstr(mrb, [string UTF8String]);
}

static mrb_value
mrb_clipboard_set(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* path = mrb_string_value_ptr(mrb, str);
    NSString *npath = [[NSString alloc] initWithUTF8String:path];

    UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
    [pasteboard setValue:npath forPasteboardType:@"public.text"];

    return str;
}

static mrb_value
mrb_uri_encode_www_form_component(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* cstr = mrb_string_value_ptr(mrb, str);
    NSString* nstr = [[NSString alloc] initWithUTF8String:cstr];

    NSString* encodeString = [nstr stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet alphanumericCharacterSet]];

    mrb_value dst = mrb_str_new_cstr(mrb, [encodeString UTF8String]);
    
    return dst;
}

static mrb_value
mrb_browser_open(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* cstr = mrb_string_value_ptr(mrb, str);
    NSString* nstr = [[NSString alloc] initWithUTF8String:cstr];

    NSURL *url = [NSURL URLWithString:nstr];
    [[UIApplication sharedApplication] openURL:url];
    
    return str;
}

static mrb_value
mrb_browser_open_q(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* cstr = mrb_string_value_ptr(mrb, str);
    NSString* nstr = [[NSString alloc] initWithUTF8String:cstr];

    NSURL *url = [NSURL URLWithString:nstr];
    BOOL canOpen = [[UIApplication sharedApplication] canOpenURL:url];
    
    return mrb_bool_value(canOpen);
}

static mrb_value
mrb_browser_get(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* cstr = mrb_string_value_ptr(mrb, str);
    NSString* nstr = [[NSString alloc] initWithUTF8String:cstr];

    NSURL* url = [NSURL URLWithString:nstr];
    NSURLRequest* request = [NSURLRequest requestWithURL:url];
    NSData* data = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:nil];

    NSString *result = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];

    return mrb_str_new_cstr(mrb, [result UTF8String]);
}

static mrb_value
mrb_popup_receive_picked(mrb_state *mrb)
{
    while (YES) {
        NSMutableArray* nsarray = [globalMrubyViewController receivePicked];

        if (nsarray) {
            mrb_value array = mrb_ary_new(mrb);

            for (NSString* e in nsarray) {
                mrb_ary_push(mrb, array, mrb_str_new_cstr(mrb, [e UTF8String]));
            }

            return mrb_ary_ref(mrb, array, 0);
        }

        [NSThread sleepForTimeInterval:0.1];
    }

    return mrb_nil_value();
}

static mrb_value
mrb_popup_input(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* path = mrb_string_value_ptr(mrb, str);
    NSString *npath = [[NSString alloc] initWithUTF8String:path];

    dispatch_sync(dispatch_get_main_queue(), ^{
        [globalMrubyViewController startPopupInput:npath];
    });
    
    return mrb_popup_receive_picked(mrb);
}

static mrb_value
mrb_popup_msg(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* path = mrb_string_value_ptr(mrb, str);
    NSString *npath = [[NSString alloc] initWithUTF8String:path];

    dispatch_sync(dispatch_get_main_queue(), ^{
        [globalMrubyViewController startPopupMsg:npath];
    });

    return mrb_popup_receive_picked(mrb);
}

void
mrb_rubypico_misc_init(mrb_state* mrb)
{
    {
        struct RClass *krn = mrb->kernel_module;

        mrb_define_method(mrb, krn, "__printstr__", mrb_printstr, MRB_ARGS_REQ(1));
        mrb_define_method(mrb, krn, "gets", mrb_gets, MRB_ARGS_REQ(1));
    }

    {
        struct RClass *cc = mrb_define_class(mrb, "Clipboard", mrb->object_class);

        mrb_define_class_method(mrb , cc, "get", mrb_clipboard_get, MRB_ARGS_NONE());
        mrb_define_class_method(mrb , cc, "set", mrb_clipboard_set, MRB_ARGS_REQ(1));
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "URI");

        mrb_define_class_method(mrb , cc, "encode_www_form_component", mrb_uri_encode_www_form_component, MRB_ARGS_REQ(1));
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "Browser");

        mrb_define_class_method(mrb , cc, "open", mrb_browser_open, MRB_ARGS_REQ(1));
        mrb_define_class_method(mrb , cc, "open?", mrb_browser_open_q, MRB_ARGS_REQ(1));
        mrb_define_class_method(mrb , cc, "get", mrb_browser_get, MRB_ARGS_REQ(1));
    }

    {
        struct RClass *cc = mrb_define_class(mrb, "Popup", mrb->object_class);

        mrb_define_class_method(mrb , cc, "input", mrb_popup_input, MRB_ARGS_REQ(1));
        mrb_define_class_method(mrb , cc, "msg"  , mrb_popup_msg  , MRB_ARGS_REQ(1));
    }

}

void
mrb_rubypico_misc_final(mrb_state* mrb)
{
}
