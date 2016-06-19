//
//  mruby View Controller Implementation
//

#import "MrubyViewController.h"

#import "FCFileManager.h"
#import "mruby.h"
#import "mruby/class.h"
#import "mruby/compile.h"
#import "mruby/error.h"
#import "mruby/irep.h"
#import "mruby/string.h"
#import "mruby/array.h"
#import "mruby/variable.h"

@implementation MrubyViewController {
    NSString* _scriptPath;
    mrb_state* _mrb;
}

- (id)initWithScriptPath:(NSString*)scriptPath {
    self = [super init];

    _scriptPath = scriptPath;
    _mrb = [self initMrb];

    return self;
}

- (mrb_state*)initMrb {
    mrb_state* mrb = mrb_open();

    // Bind
    // pictruby::BindImage::SetScriptController(NULL);
    // pictruby::BindImage::Bind(mrb);
    // pictruby::BindPopup::Bind(mrb);

    // Load builtin library
    // mrb_load_irep(mrb, BuiltIn);
    {
        NSString* path = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"builtin.rb"];
        char* scriptPath = (char *)[path UTF8String];
        FILE *fd = fopen(scriptPath, "r");
        mrb_load_file(mrb, fd);
        fclose(fd);
    }
 
    // Set LOAD_PATH($:)
    {
        mrb_value load_path = mrb_gv_get(mrb, mrb_intern_cstr(mrb, "$:"));
        mrb_ary_push(mrb, load_path, mrb_str_new_cstr(mrb, [[FCFileManager pathForDocumentsDirectory] UTF8String]));
        mrb_ary_push(mrb, load_path, mrb_str_new_cstr(mrb, [[FCFileManager pathForMainBundleDirectory] UTF8String]));
        // mrb_p(mrb, load_path);
    }

    // Load user script
    int arena = mrb_gc_arena_save(mrb);
    {
        char* scriptPath = (char *)[_scriptPath UTF8String];
        FILE *fd = fopen(scriptPath, "r");

        mrbc_context *cxt = mrbc_context_new(mrb);

        const char* fileName = [[[[NSString alloc] initWithUTF8String:scriptPath] lastPathComponent] UTF8String];
        mrbc_filename(mrb, cxt, fileName);
        mrb_gv_set(mrb, mrb_intern(mrb, "$0", 2), mrb_str_new_cstr(mrb, fileName));

        mrb_load_file_cxt(mrb, fd, cxt);

        mrbc_context_free(mrb, cxt);

        fclose(fd);
    }
    mrb_gc_arena_restore(mrb, arena);

    return mrb;
}

@end
