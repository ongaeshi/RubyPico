//
// mrb misc functions
// 

#import "mrb_misc.h"

#import "MrubyUtil.h"
#import "MrubyViewController.h"
#import "mrb_attr_string.h"
#import "mrb_image.h"
#import "mruby/array.h"
#import "mruby/hash.h"
#import "mruby/string.h"
#import <Foundation/Foundation.h>

static void
printstr_in(mrb_state *mrb, mrb_value obj)
{
    if (mrb_string_p(obj)) {
        const char* cstr = mrb_string_value_cstr(mrb, &obj);
        NSString* nstr = [[NSString alloc] initWithUTF8String:cstr];
        // NSLog(@"%@", nstr);
        [globalMrubyViewController printstr:nstr];
    } else if (mrb_obj_is_instance_of(mrb, obj, mrb_class_get(mrb, "Image"))) {
        [globalMrubyViewController printimage:mrb_rubypico_image_to_ptr(mrb, obj)];
    } else if (mrb_obj_is_instance_of(mrb, obj, mrb_class_get(mrb, "AttrString"))) {
        [globalMrubyViewController printAttrString:mrb_rubypico_attr_string_to_ptr(mrb, obj)];
    }
}

static void
printstr(mrb_state *mrb, mrb_value obj)
{
    dispatch_sync(dispatch_get_main_queue(), ^{
        printstr_in(mrb, obj);
    });
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
mrb_clearprint(mrb_state *mrb, mrb_value self)
{
    mrb_value *vals;
    mrb_int len;
    mrb_get_args(mrb, "*", &vals, &len);

    dispatch_sync(dispatch_get_main_queue(), ^{
        [globalMrubyViewController clear];

        for (int i = 0; i < len; ++i) {
            printstr_in(mrb, vals[i]);
        }
    });
    
    return mrb_nil_value();
}

static mrb_value
mrb_popup_receive_picked(mrb_state *mrb)
{
    while (![globalMrubyViewController isCanceled]) {
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
mrb_gets(mrb_state *mrb, mrb_value self)
{
    dispatch_sync(dispatch_get_main_queue(), ^{
        [globalMrubyViewController startInput];
    });

    return mrb_popup_receive_picked(mrb);
}

static mrb_value
mrb_sleep(mrb_state *mrb, mrb_value self)
{
    mrb_float interval;
    mrb_get_args(mrb, "f", &interval);

    [NSThread sleepForTimeInterval:interval];

    return mrb_nil_value();
}

static mrb_value
mrb_clear(mrb_state *mrb, mrb_value self)
{
    dispatch_sync(dispatch_get_main_queue(), ^{
        [globalMrubyViewController clear];
    });
    
    return mrb_nil_value();
}

static mrb_value
mrb_clicked_link(mrb_state *mrb, mrb_value self)
{
    __block NSString *str;

    dispatch_sync(dispatch_get_main_queue(), ^{
        str = [globalMrubyViewController getClickedLink];
    });

    if (str) {
        return mrb_str_new_cstr(mrb, [str UTF8String]);
    } else {
        return mrb_nil_value();
    }
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

    const char* path = mrb_string_value_cstr(mrb, &str);
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

    const char* cstr = mrb_string_value_cstr(mrb, &str);
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

    const char* cstr = mrb_string_value_cstr(mrb, &str);
    NSString* nstr = [[NSString alloc] initWithUTF8String:cstr];

    NSURL *url = [NSURL URLWithString:nstr];
    BOOL isSuccess = [[UIApplication sharedApplication] openURL:url];

    if (isSuccess) {
        [globalMrubyViewController setBackground];

        while ([globalMrubyViewController isBackground]) {
            [NSThread sleepForTimeInterval:0.1];
        }
    }

    return str;
}

static mrb_value
mrb_browser_open_q(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* cstr = mrb_string_value_cstr(mrb, &str);
    NSString* nstr = [[NSString alloc] initWithUTF8String:cstr];

    NSURL *url = [NSURL URLWithString:nstr];
    BOOL canOpen = [[UIApplication sharedApplication] canOpenURL:url];
    
    return mrb_bool_value(canOpen);
}

static mrb_value
mrb_browser_get(mrb_state *mrb, mrb_value self)
{
    mrb_value url;
    mrb_value opt = mrb_nil_value();
    mrb_get_args(mrb, "S|o", &url, &opt);
   
    mrb_value header = mrb_nil_value();
    if (mrb_hash_p(opt)) {
        header = [MrubyUtil hashGet:mrb hash:opt key:"header"];
    }

    NSURL *nsurl = [NSURL URLWithString:[MrubyUtil str2nstr:mrb value:url]];
    NSMutableURLRequest *request = [[NSMutableURLRequest alloc] initWithURL:nsurl];

    // header
    if (!mrb_nil_p(header)) {
        mrb_value keys = mrb_hash_keys(mrb, header);
        for (int i = 0; i < RARRAY_LEN(keys); ++i) {
            mrb_value key = RARRAY_PTR(keys)[i];
            mrb_value value = mrb_hash_get(mrb, header, key);
            [request addValue: [MrubyUtil str2nstr:mrb value:value]
                     forHTTPHeaderField:[MrubyUtil str2nstr:mrb value:key]];
        }
    }

    NSData* data = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:nil];
    NSString *result = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    return mrb_str_new_cstr(mrb, [result UTF8String]);
}

static mrb_value
mrb_browser_post_in(mrb_state *mrb, mrb_value self)
{
    mrb_value url, header, body;
    mrb_get_args(mrb, "SoS", &url, &header, &body);

    NSURL *nsurl = [NSURL URLWithString:[MrubyUtil str2nstr:mrb value:url]];
    NSMutableURLRequest *request = [[NSMutableURLRequest alloc] initWithURL:nsurl];
    request.HTTPMethod = @"POST";

    // header
    if (!mrb_nil_p(header)) {
        mrb_value keys = mrb_hash_keys(mrb, header);
        for (int i = 0; i < RARRAY_LEN(keys); ++i) {
            mrb_value key = RARRAY_PTR(keys)[i];
            mrb_value value = mrb_hash_get(mrb, header, key);
            [request addValue: [MrubyUtil str2nstr:mrb value:value]
                     forHTTPHeaderField:[MrubyUtil str2nstr:mrb value:key]];
        }
    }

    // body
    request.HTTPBody = [[MrubyUtil str2nstr:mrb value:body] dataUsingEncoding:NSUTF8StringEncoding];

    NSData* data = [NSURLConnection sendSynchronousRequest:request returningResponse:nil error:nil];
    NSString *result = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    return mrb_str_new_cstr(mrb, [result UTF8String]);
}

static mrb_value
mrb_popup_input(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* path = mrb_string_value_cstr(mrb, &str);
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

    const char* path = mrb_string_value_cstr(mrb, &str);
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
        mrb_define_method(mrb, krn, "clearprint", mrb_clearprint, MRB_ARGS_REQ(1));
        mrb_define_method(mrb, krn, "gets", mrb_gets, MRB_ARGS_REQ(1));
        mrb_define_method(mrb, krn, "sleep", mrb_sleep, MRB_ARGS_OPT(1));
        mrb_define_method(mrb, krn, "clear", mrb_clear, MRB_ARGS_NONE());
        mrb_define_method(mrb, krn, "clicked_link", mrb_clicked_link, MRB_ARGS_NONE());
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
        mrb_define_class_method(mrb , cc, "get", mrb_browser_get, MRB_ARGS_ARG(1,1));
        mrb_define_class_method(mrb , cc, "post_in", mrb_browser_post_in, MRB_ARGS_REQ(3));
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
