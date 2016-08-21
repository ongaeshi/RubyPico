//
// mrb image functions
// 

#import "mrb_image.h"

#import "MrubyViewController.h"
#import "mruby.h"
#import "mruby/array.h"
#import "mruby/class.h"
#import "mruby/data.h"
#import "mruby/string.h"
#import "NYXImagesKit.h"

static UIImage*
mrb_rubypico_image_to_obj(mrb_value self)
{
    return (__bridge UIImage*)DATA_PTR(self);
}

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

static mrb_value
mrb_rubypico_image_load(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);
    const char *path = mrb_string_value_ptr(mrb, str);
    NSString *npath = [[NSString alloc] initWithUTF8String:path];

    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"^https?://"
                                                                           options:0
                                                                             error:&error];
    NSTextCheckingResult *match = [regex firstMatchInString:npath
                                                options:0
                                                  range:NSMakeRange(0, npath.length)];
    UIImage* image;

    if (!match) {
        image = [[UIImage imageNamed:npath] retain];
    } else {
        NSURL *url = [NSURL URLWithString:npath];
        NSData *data = [NSData dataWithContentsOfURL:url];
        image = [[UIImage imageWithData:data] retain];
    }

    return mrb_rubypico_image_to_mrb(mrb, image);
}

static mrb_value
mrb_rubypico_image_receive_picked(mrb_state *mrb, int num)
{
    @autoreleasepool {
        while (![globalMrubyViewController isCanceled]) {
            NSMutableArray* nsarray = [globalMrubyViewController receivePicked];

            if (nsarray) {
                mrb_value array = mrb_ary_new(mrb);

                for (UIImage* image in nsarray) {
                    mrb_ary_push(mrb, array, mrb_rubypico_image_to_mrb(mrb, [image retain]));
                }

                return num == 1 ? mrb_ary_ref(mrb, array, 0) : array;
            }

            [NSThread sleepForTimeInterval:0.1];
        }
    }

    return mrb_nil_value();
}

static mrb_value
mrb_rubypico_image_pick_from_library(mrb_state *mrb, mrb_value self)
{
    mrb_int num = 1;
    mrb_get_args(mrb, "|i", &num);

    dispatch_sync(dispatch_get_main_queue(), ^{
        [globalMrubyViewController startPickFromLibrary:num];
    });

    return mrb_rubypico_image_receive_picked(mrb, num);
}

static mrb_value
mrb_rubypico_image_render(mrb_state *mrb, mrb_value self)
{
    mrb_int x, y;
    mrb_value block;
    mrb_get_args(mrb, "ii&", &x, &y, &block);

    UIGraphicsBeginImageContext(CGSizeMake(x, y));
    mrb_yield_argv(mrb, block, 0, NULL);
    UIImage* new_image = [UIGraphicsGetImageFromCurrentImageContext() retain];
    UIGraphicsEndImageContext();

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_resize(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);
        
    mrb_int x, y;
    mrb_get_args(mrb, "ii", &x, &y);

    // UIImage* new_image = [[image scaleToCoverSize:CGSizeMake(x, y)] retain];
    UIImage* new_image = [[image scaleToFitSize:CGSizeMake(x, y)] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_resize_force(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);
        
    mrb_int x, y;
    mrb_get_args(mrb, "ii", &x, &y);

    UIImage* new_image = [[image scaleToSize:CGSizeMake(x, y)] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_crop(mrb_state *mrb, mrb_value self)
{
    UIImage* obj = mrb_rubypico_image_to_obj(self);
        
    mrb_int x, y, w, h;
    mrb_get_args(mrb, "iiii", &x, &y, &w, &h);

    CGImageRef ref = CGImageCreateWithImageInRect(obj.CGImage, CGRectMake(x, y, w, h));
    obj = [[UIImage imageWithCGImage:ref] retain];
    
    return mrb_rubypico_image_to_mrb(mrb, obj);
}

static mrb_value
mrb_rubypico_image_rotate(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);
        
    mrb_float degree;
    mrb_get_args(mrb, "f", &degree);

    UIImage* new_image = [[image rotateInDegrees:degree] retain];
    
    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_height(mrb_state *mrb, mrb_value self)
{
    return mrb_float_value(mrb, mrb_rubypico_image_to_obj(self).size.height);
}

static mrb_value
mrb_rubypico_image_width(mrb_state *mrb, mrb_value self)
{
    return mrb_float_value(mrb, mrb_rubypico_image_to_obj(self).size.width);
}

static mrb_value
mrb_rubypico_image_bright(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image brightenWithValue:bias] retain]; // -255 ~ 255

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_contrast(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image contrastAdjustmentWithValue:bias] retain]; // -255 ~ 255

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_edge(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);
    UIImage* new_image = [[image edgeDetectionWithBias:0] retain]; // Unused bias parameter

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_emboss(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image embossWithBias:bias] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_gamma(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    mrb_float value;
    mrb_get_args(mrb, "f", &value);
    
    UIImage* new_image = [[image gammaCorrectionWithValue:value] retain]; // 0.01 ~ 8

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_gray(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    UIImage* new_image = [[image grayscale] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_sepia(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    UIImage* new_image = [[image sepia] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_invert(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    UIImage* new_image = [[image invert] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_opacity(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    mrb_float value;
    mrb_get_args(mrb, "f", &value);
    
    UIImage* new_image = [[image opacity:value] retain]; // 0.0 ~ 1.0

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_sharp(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image sharpenWithBias:bias] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_unsharp(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image unsharpenWithBias:bias] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_blur(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image gaussianBlurWithBias:bias] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_reflection(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    mrb_float from_alpha, to_alpha;
    mrb_get_args(mrb, "ff", &from_alpha, &to_alpha);
    
    UIImage* new_image = [[image reflectedImageWithHeight:image.size.height fromAlpha:from_alpha toAlpha:to_alpha] retain];

    return mrb_rubypico_image_to_mrb(mrb, new_image);
}

static mrb_value
mrb_rubypico_image_save(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);

    [image saveToPhotosAlbum];

    return self;
}

static mrb_value
mrb_rubypico_image_draw(mrb_state *mrb, mrb_value self)
{
    UIImage* image = mrb_rubypico_image_to_obj(self);
        
    mrb_int x, y, w, h;
    mrb_get_args(mrb, "iiii", &x, &y, &w, &h);

    [image drawInRect:CGRectMake(x, y, w, h)];
    
    return self;
}
void
mrb_rubypico_image_init(mrb_state* mrb)
{
    struct RClass *cc = mrb_define_class(mrb, "Image", mrb->object_class);

    mrb_define_class_method(mrb , cc, "load",               mrb_rubypico_image_load,               MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb , cc, "pick_from_library",  mrb_rubypico_image_pick_from_library,  MRB_ARGS_OPT(1));
    mrb_define_class_method(mrb , cc, "render",             mrb_rubypico_image_render,             MRB_ARGS_REQ(2));

    mrb_define_method(mrb, cc,        "width",              mrb_rubypico_image_width,              MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "height",             mrb_rubypico_image_height,             MRB_ARGS_NONE());

    mrb_define_method(mrb, cc,        "resize",             mrb_rubypico_image_resize,            MRB_ARGS_REQ(2));
    mrb_define_method(mrb, cc,        "resize_force",       mrb_rubypico_image_resize_force,      MRB_ARGS_REQ(2));
    mrb_define_method(mrb, cc,        "crop",               mrb_rubypico_image_crop,              MRB_ARGS_REQ(4));
    mrb_define_method(mrb, cc,        "rotate",             mrb_rubypico_image_rotate,            MRB_ARGS_REQ(1));
    
    mrb_define_method(mrb, cc,        "bright",            mrb_rubypico_image_bright,             MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "contrast",          mrb_rubypico_image_contrast,           MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "edge",              mrb_rubypico_image_edge,               MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "emboss",            mrb_rubypico_image_emboss,             MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "gamma",             mrb_rubypico_image_gamma,              MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "gray",              mrb_rubypico_image_gray,               MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "sepia",             mrb_rubypico_image_sepia,              MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "invert",            mrb_rubypico_image_invert,             MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "opacity",           mrb_rubypico_image_opacity,            MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "sharp",             mrb_rubypico_image_sharp,              MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "unsharp",           mrb_rubypico_image_unsharp,            MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "blur",              mrb_rubypico_image_blur,               MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "reflection",        mrb_rubypico_image_reflection,         MRB_ARGS_REQ(2));

    mrb_define_method(mrb, cc,        "save",              mrb_rubypico_image_save,               MRB_ARGS_NONE());
        
    mrb_define_method(mrb, cc,        "draw",               mrb_rubypico_image_draw,               MRB_ARGS_REQ(4));
}

void
mrb_rubypico_image_final(mrb_state* mrb)
{
}
