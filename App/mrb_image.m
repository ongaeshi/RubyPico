//
// mrb image functions
// 

#import "mrb_image.h"

#import "mruby.h"
#import "mruby/array.h"
#import "mruby/class.h"
#import "mruby/data.h"
#import "mruby/string.h"
#import "NYXImagesKit.h"

static void
mrb_rubypico_image_free(mrb_state *mrb, void *p)
{
    [(__bridge UIImage*)p release];
}

static struct mrb_data_type data_type = { "rubypico_image", mrb_rubypico_image_free };

mrb_value
mrb_rubypico_image_to_mrb(mrb_state* mrb, UIImage* ptr)
{
    if (ptr) {
        struct RData *data = mrb_data_object_alloc(mrb, mrb_class_get(mrb, "Image"), (__bridge void*)ptr, &data_type); //TODO inc?
        return mrb_obj_value(data);
    } else {
        return mrb_nil_value();
    }
}

UIImage*
mrb_rubypico_image_to_ptr(mrb_state* mrb, mrb_value value)
{
    if (!mrb_obj_is_instance_of(mrb, value, mrb_class_get(mrb, "Image"))) {
        mrb_raise(mrb, E_TYPE_ERROR, "wrong argument class");
    }

    return (__bridge UIImage*)(DATA_PTR(value));
}

void
mrb_rubypico_image_init(mrb_state* mrb)
{
}

void
mrb_rubypico_image_final(mrb_state* mrb)
{
}
