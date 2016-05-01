#import "BindImage.hpp"

#import "mruby.h"
#import "mruby/array.h"
#import "mruby/class.h"
#import "mruby/data.h"
#import "mruby/string.h"
#import "NYXImagesKit.h"

namespace pictruby {

ScriptController *globalScriptController;

namespace {
UIImage* toObj(mrb_value self)
{
    return (__bridge UIImage*)DATA_PTR(self);
}

void free(mrb_state *mrb, void *p)
{
    [(UIImage*)p release];
}

struct mrb_data_type data_type = { "pictruby_image", free };

mrb_value load(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);

    const char* path = mrb_string_value_ptr(mrb, str);
    NSString *npath = [[NSString alloc] initWithUTF8String:path];

    UIImage* image = [[UIImage imageNamed:npath] retain];

    return BindImage::ToMrb(mrb, image);
}

mrb_value start_pick_from_library(mrb_state *mrb, mrb_value self)
{
    mrb_int num;
    mrb_get_args(mrb, "i", &num);

    [globalScriptController startPickFromLibrary:num];
    return mrb_nil_value();
}

mrb_value receive_picked(mrb_state *mrb, mrb_value self)
{
    @autoreleasepool {
        NSMutableArray* nsarray = [globalScriptController receivePicked];

        if (nsarray == NULL) {
            return BindImage::ToMrb(mrb, NULL);
        }
        
        mrb_value array = mrb_ary_new(mrb);
            
        for (UIImage* image in nsarray) {
            mrb_ary_push(mrb, array, BindImage::ToMrb(mrb, [image retain]));
        }

        return array;
    }
}

mrb_value render(mrb_state *mrb, mrb_value self)
{
    mrb_int x, y;
    mrb_value block;
    mrb_get_args(mrb, "ii&", &x, &y, &block);

    UIGraphicsBeginImageContext(CGSizeMake(x, y));
    mrb_yield_argv(mrb, block, 0, NULL);
    UIImage* new_image = [UIGraphicsGetImageFromCurrentImageContext() retain];
    UIGraphicsEndImageContext();

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value resize(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);
        
    mrb_int x, y;
    mrb_get_args(mrb, "ii", &x, &y);

    // UIImage* new_image = [[image scaleToCoverSize:CGSizeMake(x, y)] retain];
    UIImage* new_image = [[image scaleToFitSize:CGSizeMake(x, y)] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value resize_force(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);
        
    mrb_int x, y;
    mrb_get_args(mrb, "ii", &x, &y);

    UIImage* new_image = [[image scaleToSize:CGSizeMake(x, y)] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value crop(mrb_state *mrb, mrb_value self)
{
    UIImage* obj = toObj(self);
        
    mrb_int x, y, w, h;
    mrb_get_args(mrb, "iiii", &x, &y, &w, &h);

    CGImageRef ref = CGImageCreateWithImageInRect(obj.CGImage, CGRectMake(x, y, w, h));
    obj = [[UIImage imageWithCGImage:ref] retain];
    
    return BindImage::ToMrb(mrb, obj);
}

mrb_value rotate(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);
        
    mrb_float degree;
    mrb_get_args(mrb, "f", &degree);

    UIImage* new_image = [[image rotateInDegrees:degree] retain];
    
    return BindImage::ToMrb(mrb, new_image);
}

mrb_value height(mrb_state *mrb, mrb_value self)
{
    return mrb_float_value(mrb, toObj(self).size.height);
}

mrb_value width(mrb_state *mrb, mrb_value self)
{
    return mrb_float_value(mrb, toObj(self).size.width);
}

mrb_value bright(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image brightenWithValue:bias] retain]; // -255 ~ 255

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value contrast(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image contrastAdjustmentWithValue:bias] retain]; // -255 ~ 255

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value edge(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);
    UIImage* new_image = [[image edgeDetectionWithBias:0] retain]; // Unused bias parameter

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value emboss(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image embossWithBias:bias] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value gamma(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    mrb_float value;
    mrb_get_args(mrb, "f", &value);
    
    UIImage* new_image = [[image gammaCorrectionWithValue:value] retain]; // 0.01 ~ 8

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value gray(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    UIImage* new_image = [[image grayscale] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value sepia(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    UIImage* new_image = [[image sepia] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value invert(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    UIImage* new_image = [[image invert] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value opacity(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    mrb_float value;
    mrb_get_args(mrb, "f", &value);
    
    UIImage* new_image = [[image opacity:value] retain]; // 0.0 ~ 1.0

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value sharp(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image sharpenWithBias:bias] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value unsharp(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image unsharpenWithBias:bias] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value blur(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    mrb_int bias;
    mrb_get_args(mrb, "i", &bias);
    
    UIImage* new_image = [[image gaussianBlurWithBias:bias] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value reflection(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    mrb_float from_alpha, to_alpha;
    mrb_get_args(mrb, "ff", &from_alpha, &to_alpha);
    
    UIImage* new_image = [[image reflectedImageWithHeight:image.size.height fromAlpha:from_alpha toAlpha:to_alpha] retain];

    return BindImage::ToMrb(mrb, new_image);
}

mrb_value save(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);

    [image saveToPhotosAlbum];

    return self;
}

mrb_value draw(mrb_state *mrb, mrb_value self)
{
    UIImage* image = toObj(self);
        
    mrb_int x, y, w, h;
    mrb_get_args(mrb, "iiii", &x, &y, &w, &h);

    [image drawInRect:CGRectMake(x, y, w, h)];
    
    return self;
}
}

//----------------------------------------------------------
mrb_value BindImage::ToMrb(mrb_state* mrb, UIImage* aPtr)
{
    if (aPtr) {
        struct RData *data = mrb_data_object_alloc(mrb, mrb_class_get(mrb, "Image"), (__bridge void*)aPtr, &data_type); //TODO inc?
        return mrb_obj_value(data);
    } else {
        return mrb_nil_value();
    }
}

//----------------------------------------------------------
UIImage* BindImage::ToPtr(mrb_state* mrb, mrb_value aValue)
{
    if (!mrb_obj_is_instance_of(mrb, aValue, mrb_class_get(mrb, "Image"))) {
        mrb_raise(mrb, E_TYPE_ERROR, "wrong argument class");
    }

    return (__bridge UIImage*)(DATA_PTR(aValue));
}

//----------------------------------------------------------
void BindImage::SetScriptController(void* aScriptController)
{
    globalScriptController = (__bridge ScriptController*)aScriptController;
}

//----------------------------------------------------------
void BindImage::Bind(mrb_state* mrb)
{
    struct RClass *cc = mrb_define_class(mrb, "Image", mrb->object_class);

    mrb_define_class_method(mrb , cc, "load",               load,               MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb , cc, "start_pick_from_library",  start_pick_from_library, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb , cc, "receive_picked",  receive_picked,        MRB_ARGS_NONE());
    mrb_define_class_method(mrb , cc, "render",          render,                MRB_ARGS_REQ(2));

    mrb_define_method(mrb, cc,        "width",              width,              MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "height",             height,             MRB_ARGS_NONE());

    mrb_define_method(mrb, cc,        "resize",             resize,            MRB_ARGS_REQ(2));
    mrb_define_method(mrb, cc,        "resize_force",       resize_force,      MRB_ARGS_REQ(2));
    mrb_define_method(mrb, cc,        "crop",               crop,              MRB_ARGS_REQ(4));
    mrb_define_method(mrb, cc,        "rotate",             rotate,            MRB_ARGS_REQ(1));
    
    mrb_define_method(mrb, cc,        "bright",            bright,             MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "contrast",          contrast,           MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "edge",              edge,               MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "emboss",            emboss,             MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "gamma",             gamma,              MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "gray",              gray,               MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "sepia",             sepia,              MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "invert",            invert,             MRB_ARGS_NONE());
    mrb_define_method(mrb, cc,        "opacity",           opacity,            MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "sharp",             sharp,              MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "unsharp",           unsharp,            MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "blur",              blur,               MRB_ARGS_REQ(1));
    mrb_define_method(mrb, cc,        "reflection",        reflection,         MRB_ARGS_REQ(2));

    mrb_define_method(mrb, cc,        "save",              save,               MRB_ARGS_NONE());
        
    mrb_define_method(mrb, cc,        "draw",               draw,               MRB_ARGS_REQ(4));
}

}
