//
//  mruby Utility
//

#import <UIKit/UIKit.h>
#import "mruby.h"

@interface MrubyUtil : NSObject

+ (NSString*) str2nstr:(mrb_state*)mrb value:(mrb_value)value;
+ (mrb_value) hashGet:(mrb_state*)mrb hash:(mrb_value)hash key:(const char*)key;

@end

