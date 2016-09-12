//
// mrb attribute string functions
// 

#import "mrb_attr_string.h"

#import "MrubyViewController.h"
#import "mruby.h"
#import "mruby/array.h"
#import "mruby/class.h"
#import "mruby/data.h"
#import "mruby/hash.h"
#import "mruby/string.h"

static NSMutableAttributedString*
mrb_rubypico_attr_string_to_obj(mrb_value self)
{
    return (__bridge NSMutableAttributedString*)DATA_PTR(self);
}

static void
mrb_rubypico_attr_string_free(mrb_state *mrb, void *p)
{
    [(__bridge NSMutableAttributedString*)p release];
}

static struct mrb_data_type data_type = { "rubypico_attr_string", mrb_rubypico_attr_string_free };

mrb_value
mrb_rubypico_attr_string_to_mrb(mrb_state* mrb, NSMutableAttributedString* ptr)
{
    if (ptr) {
        struct RData *data = mrb_data_object_alloc(mrb, mrb_class_get(mrb, "AttrString"), (__bridge void*)ptr, &data_type); //TODO inc?
        return mrb_obj_value(data);
    } else {
        return mrb_nil_value();
    }
}

NSMutableAttributedString*
mrb_rubypico_attr_string_to_ptr(mrb_state* mrb, mrb_value value)
{
    if (!mrb_obj_is_instance_of(mrb, value, mrb_class_get(mrb, "AttrString"))) {
        mrb_raise(mrb, E_TYPE_ERROR, "wrong argument class");
    }

    return (__bridge NSMutableAttributedString*)(DATA_PTR(value));
}

static NSString* str2nstr(mrb_state* mrb, mrb_value value)
{
    const char *cstr = mrb_string_value_ptr(mrb, value);
    return [[[NSString alloc] initWithUTF8String:cstr] autorelease];
}

static mrb_value hash_get(mrb_state* mrb, mrb_value hash, const char* sym)
{
    mrb_value key = mrb_symbol_value(mrb_intern_cstr(mrb, "link")); 
    return mrb_hash_get(mrb, hash, key);
}

static mrb_value
mrb_rubypico_attr_image_initialize(mrb_state *mrb, mrb_value self)
{
    @autoreleasepool {
        mrb_value str, opt;
        mrb_get_args(mrb, "|So", &str, &opt);
        // TODO default value
        
        // str
        NSString *nstr = str2nstr(mrb, str);
        
        // opt
        NSMutableDictionary* attributes = [NSMutableDictionary dictionaryWithObjectsAndKeys: nil];

        // link
        mrb_value link_value = hash_get(mrb, opt, "link");
        if (!mrb_nil_p(link_value)) {
            NSString *url = str2nstr(mrb, link_value);
            [attributes setObject:url forKey:NSLinkAttributeName];
        }
    
        // result
        NSMutableAttributedString* attr_str = [[NSMutableAttributedString alloc]
                                                  initWithString:nstr
                                                      attributes:attributes
            ];

        mrb_data_init(self, attr_str, &data_type);
        return self;
    }
}

void
mrb_rubypico_attr_string_init(mrb_state* mrb)
{
    struct RClass *cc = mrb_define_class(mrb, "AttrString", mrb->object_class);

    mrb_define_method(mrb , cc, "initialize", mrb_rubypico_attr_image_initialize, MRB_ARGS_OPT(2));
}

void
mrb_rubypico_attr_string_final(mrb_state* mrb)
{
}
