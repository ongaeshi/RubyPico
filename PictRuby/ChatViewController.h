#import <JSQMessagesViewController/JSQMessages.h>
#import "mruby.h"

@interface ChatViewController : JSQMessagesViewController

- (id) init:(NSString*)scriptPath mrb:(mrb_state*)mrb;

@end
