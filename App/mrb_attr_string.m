//
// mrb attribute string functions
// 

#import "mrb_attr_string.h"

#import "MrubyUtil.h"
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
mrb_rubypico_attr_string_to_mrb(mrb_state *mrb, NSMutableAttributedString *ptr)
{
    if (ptr) {
        struct RData *data = mrb_data_object_alloc(mrb, mrb_class_get(mrb, "AttrString"), (__bridge void*)ptr, &data_type); //TODO inc?
        return mrb_obj_value(data);
    } else {
        return mrb_nil_value();
    }
}

NSMutableAttributedString*
mrb_rubypico_attr_string_to_ptr(mrb_state *mrb, mrb_value value)
{
    if (!mrb_obj_is_instance_of(mrb, value, mrb_class_get(mrb, "AttrString"))) {
        mrb_raise(mrb, E_TYPE_ERROR, "wrong argument class");
    }

    return (__bridge NSMutableAttributedString*)(DATA_PTR(value));
}


static mrb_value
mrb_rubypico_attr_string_initialize(mrb_state *mrb, mrb_value self)
{
    @autoreleasepool {
        mrb_value str, opt;
        mrb_int parse_num = mrb_get_args(mrb, "|So", &str, &opt);
        
        // str
        NSString *nstr = (parse_num >= 1) ? [[MrubyUtil str2nstr:mrb value:str] autorelease] : @"";
        
        // opt
        NSMutableDictionary *attributes = [NSMutableDictionary dictionaryWithObjectsAndKeys: nil];

        if (parse_num >= 2) {
            // link
            mrb_value link_value = [MrubyUtil hashGet:mrb hash:opt key:"link"];
            if (!mrb_nil_p(link_value)) {
                NSString *url = [[MrubyUtil str2nstr:mrb value:link_value] autorelease];
                [attributes setObject:url forKey:NSLinkAttributeName];
            }
        }    

        // default font
        [attributes setObject:[MrubyUtil font] forKey:NSFontAttributeName];

        // result
        NSMutableAttributedString *attr_str = [[NSMutableAttributedString alloc]
                                                  initWithString:nstr
                                                      attributes:attributes
            ];

        mrb_data_init(self, attr_str, &data_type);
        return self;
    }
}

static mrb_value
mrb_rubypico_attr_string_plus(mrb_state *mrb, mrb_value self)
{
    NSMutableAttributedString *self_str = mrb_rubypico_attr_string_to_ptr(mrb, self);
    NSMutableAttributedString *lhs_str = [[NSMutableAttributedString alloc] initWithAttributedString:self_str];

    mrb_value rhs;
    mrb_get_args(mrb, "o", &rhs);

    @autoreleasepool {
        NSMutableAttributedString *rhs_str;

        if (mrb_string_p(rhs)) {
            NSString *nstr = [[MrubyUtil str2nstr:mrb value:rhs] autorelease];
            rhs_str = [[[NSMutableAttributedString alloc]
                           initWithString: nstr
                               attributes:@{NSFontAttributeName:[MrubyUtil font]}]
                          autorelease];
        } else {
            rhs_str = mrb_rubypico_attr_string_to_ptr(mrb, rhs);
        }

        [lhs_str appendAttributedString:rhs_str];
    }
    
    return mrb_rubypico_attr_string_to_mrb(mrb, lhs_str);
}

void
mrb_rubypico_attr_string_init(mrb_state *mrb)
{
    struct RClass *cc = mrb_define_class(mrb, "AttrString", mrb->object_class);

    mrb_define_method(mrb , cc, "initialize", mrb_rubypico_attr_string_initialize, MRB_ARGS_OPT(2));
    mrb_define_method(mrb , cc, "+"         , mrb_rubypico_attr_string_plus      , MRB_ARGS_REQ(1));
}

void
mrb_rubypico_attr_string_final(mrb_state *mrb)
{
}
