//
//  mruby View Controller Implementation
//

#import "MrubyViewController.h"

#import "FCFileManager.h"
#import "mrb_misc.h"
#import "mruby.h"
#import "mruby/array.h"
#import "mruby/class.h"
#import "mruby/compile.h"
#import "mruby/error.h"
#import "mruby/irep.h"
#import "mruby/string.h"
#import "mruby/variable.h"

MrubyViewController *globalMrubyViewController;

@implementation MrubyViewController {
    NSString* _scriptPath;
    mrb_state* _mrb;
    UITextView* _textView;
}

- (id)initWithScriptPath:(NSString*)scriptPath {
    self = [super init];

    _scriptPath = scriptPath;
    _mrb = [self initMrb];
    globalMrubyViewController = self;

    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    // TextView
    _textView = [[UITextView alloc] initWithFrame:self.view.bounds];
    _textView.editable = NO;
    _textView.dataDetectorTypes = UIDataDetectorTypeLink;
    _textView.font = [UIFont fontWithName:@"Courier" size:12];
    _textView.text = @"";
    [self.view addSubview:_textView];

    // Run script
    [self runMrb];
}

- (mrb_state*)initMrb {
    mrb_state* mrb = mrb_open();

    // Bind
    mrb_rubypico_misc_init(mrb);

    // Load builtin library
    // {
    //     NSString* path = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"builtin.rb"];
    //     char* scriptPath = (char *)[path UTF8String];
    //     FILE *fd = fopen(scriptPath, "r");
    //     mrb_load_file(mrb, fd);
    //     fclose(fd);
    // }
 
    // Set LOAD_PATH($:)
    {
        mrb_value load_path = mrb_gv_get(mrb, mrb_intern_cstr(mrb, "$:"));
        mrb_ary_push(mrb, load_path, mrb_str_new_cstr(mrb, [[FCFileManager pathForDocumentsDirectory] UTF8String]));
        mrb_ary_push(mrb, load_path, mrb_str_new_cstr(mrb, [[FCFileManager pathForMainBundleDirectory] UTF8String]));
        // mrb_p(mrb, load_path);
    }

    return mrb;
}

- (void)runMrb {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        int arena = mrb_gc_arena_save(_mrb);

        {
            char* scriptPath = (char *)[_scriptPath UTF8String];
            FILE *fd = fopen(scriptPath, "r");

            mrbc_context *cxt = mrbc_context_new(_mrb);

            const char* fileName = [[[[NSString alloc] initWithUTF8String:scriptPath] lastPathComponent] UTF8String];
            mrbc_filename(_mrb, cxt, fileName);
            mrb_gv_set(_mrb, mrb_intern(_mrb, "$0", 2), mrb_str_new_cstr(_mrb, fileName));

            mrb_load_file_cxt(_mrb, fd, cxt);

            mrbc_context_free(_mrb, cxt);

            fclose(fd);
        }

        mrb_gc_arena_restore(_mrb, arena);
    });
}

- (void)printstr:(NSString*)str {
    [_textView setText:[_textView.text stringByAppendingString:str]];
}

@end
