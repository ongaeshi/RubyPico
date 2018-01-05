//
//  mruby Utility Implementation
//

#import "MrubyUtil.h"

#import "mruby/hash.h"
#import "mruby/string.h"

#if __has_feature(objc_arc)
#error This code needs compiler option -fno-objc-arc
#endif

@implementation MrubyUtil {
}

+ (NSString*) str2nstr:(mrb_state*)mrb value:(mrb_value)value {
    const char *cstr = mrb_string_value_cstr(mrb, &value);
    return [[NSString alloc] initWithUTF8String:cstr];
}

+ (mrb_value) nstr2str:(mrb_state*)mrb value:(NSString*)value {
    return mrb_str_new_cstr(mrb, [value UTF8String]);
}

+ (mrb_value) hashGet:(mrb_state*)mrb hash:(mrb_value)hash key:(const char*)key {
    mrb_value sym = mrb_symbol_value(mrb_intern_cstr(mrb, key));
    return mrb_hash_get(mrb, hash, sym);
}

+ (BOOL) ja {
    @autoreleasepool {
        NSArray *languages = [NSLocale preferredLanguages];
        NSString *lang = [[languages objectAtIndex:0] substringToIndex:2];
        return [lang isEqualToString:@"ja"];
    }
}

+ (UIFont*) font {
    if ([MrubyUtil ja]) {
        return [UIFont fontWithName:@"SourceHanCodeJP-Regular" size:12];
    } else {
        return [UIFont fontWithName:@"Courier" size:12];
    }
}
@end
