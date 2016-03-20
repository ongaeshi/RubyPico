#import "ChatViewController.h"

#import "mruby.h"
#import "mruby/class.h"
#import "mruby/compile.h"
#import "mruby/error.h"
#import "mruby/irep.h"
#import "mruby/string.h"
#import "mruby/variable.h"

@interface ChatViewController ()

@property (strong, nonatomic) NSMutableArray *messages;
@property (strong, nonatomic) JSQMessagesBubbleImage *incomingBubble;
@property (strong, nonatomic) JSQMessagesBubbleImage *outgoingBubble;
@property (strong, nonatomic) JSQMessagesAvatarImage *incomingAvatar;
@property (strong, nonatomic) JSQMessagesAvatarImage *outgoingAvatar;

@end

@implementation ChatViewController
{
    NSString* mScriptPath;
    mrb_state* mMrb;
}

- (id) init:(NSString*)scriptPath mrb:(mrb_state*)mrb
{
    self = [super init];
    mScriptPath = scriptPath;
    mMrb = mrb;
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Init ChatViewController
    self.senderId = @"you";
    self.senderDisplayName = @"You";

    JSQMessagesBubbleImageFactory *bubbleFactory = [JSQMessagesBubbleImageFactory new];
    UIColor* c = [UIColor colorWithRed:0.21f
                                 green:0.23f
                                  blue:0.31f
                                 alpha:1.0f];
    self.incomingBubble = [bubbleFactory  incomingMessagesBubbleImageWithColor:c];
    self.outgoingBubble = [bubbleFactory  outgoingMessagesBubbleImageWithColor:[UIColor jsq_messageBubbleGreenColor]];

    self.incomingAvatar = [JSQMessagesAvatarImageFactory avatarImageWithImage:[UIImage imageNamed:@"chat_ruby.png"] diameter:64];
    self.outgoingAvatar = [JSQMessagesAvatarImageFactory avatarImageWithImage:[UIImage imageNamed:@"chat_you.png"] diameter:64];

    // Hide AccessoryButton
    self.inputToolbar.contentView.leftBarButtonItem = nil;

    // Chage text and font to JSQMessagesBubbleImageFactory
    self.collectionView.collectionViewLayout.messageBubbleFont = [UIFont fontWithName:@"Courier" size:14];

    self.messages = [NSMutableArray array];

    // Init mruby
    [self initScript];
}

- (void)initScript
{
    // Create instance
    struct RClass* cc = mrb_class_get(mMrb, "Chat");
    mrb_value obj = mrb_obj_new(mMrb, cc, 0, NULL);

    // Set to Chat::OBJ
    mrb_define_const(mMrb, cc, "OBJ", obj);
}

- (void)didMoveToParentViewController:(UIViewController *)parent
{
    if (![parent isEqual:self.parentViewController]) {
        if (mMrb) {
            mrb_close(mMrb);
            mMrb = NULL;
        }
    }
}

- (void)didPressSendButton:(UIButton *)button
           withMessageText:(NSString *)text
                  senderId:(NSString *)senderId
         senderDisplayName:(NSString *)senderDisplayName
                      date:(NSDate *)date
{
    // Send message
    [JSQSystemSoundPlayer jsq_playMessageSentSound];

    JSQMessage *message = [JSQMessage messageWithSenderId:senderId
                                              displayName:senderDisplayName
                                                     text:text];
    [self.messages addObject:message];

    [self finishSendingMessageAnimated:YES];

    // Receive message
    [self receiveAutoMessage:text];
}

- (void)receiveAutoMessage:(NSString*)input
{
    // [JSQSystemSoundPlayer jsq_playMessageSentSound];

    [self.messages addObject:[self createMessage:input]];

    [self finishReceivingMessageAnimated:YES];
}

- (JSQMessage*)createMessage:(NSString*)input
{
    mrb_value ret = [self callMethod:"call" input:input];
    return [self createMessageIN:ret];
}

- (mrb_value)callMethod:(const char*)name input:(NSString*)input 
{
    mrb_value rinput = mrb_str_new_cstr(mMrb, [input UTF8String]);
    struct RClass* cc = mrb_class_get(mMrb, "Chat");
    mrb_value obj = mrb_const_get(mMrb, mrb_obj_value(cc), mrb_intern_cstr(mMrb, "OBJ"));
    return mrb_funcall(mMrb, obj, name, 1, rinput);
}

- (JSQMessage*)createMessageIN:(mrb_value)ret
{
    if (!mrb_obj_is_instance_of(mMrb, ret, mrb_class_get(mMrb, "String"))) {
        ret = mrb_funcall(mMrb, ret, "inspect", 0);
    }

    // String#chomp!
    mrb_funcall(mMrb, ret, "chomp!", 0);

    const char* str = mrb_string_value_cstr(mMrb, &ret);
    NSString* nstr = [[NSString alloc] initWithUTF8String:str];

    return [JSQMessage messageWithSenderId:@"ruby"
                               displayName:@"Ruby" // TODO: customize
                                      text:nstr];
}

- (id<JSQMessageData>)collectionView:(JSQMessagesCollectionView *)collectionView messageDataForItemAtIndexPath:(NSIndexPath *)indexPath
{
    return [self.messages objectAtIndex:indexPath.item];
}

- (id<JSQMessageBubbleImageDataSource>)collectionView:(JSQMessagesCollectionView *)collectionView messageBubbleImageDataForItemAtIndexPath:(NSIndexPath *)indexPath
{
    JSQMessage *message = [self.messages objectAtIndex:indexPath.item];
    if ([message.senderId isEqualToString:self.senderId]) {
        return self.outgoingBubble;
    }
    return self.incomingBubble;
}

- (id<JSQMessageAvatarImageDataSource>)collectionView:(JSQMessagesCollectionView *)collectionView avatarImageDataForItemAtIndexPath:(NSIndexPath *)indexPath
{
    JSQMessage *message = [self.messages objectAtIndex:indexPath.item];
    if ([message.senderId isEqualToString:self.senderId]) {
        return self.outgoingAvatar;
    }
    return self.incomingAvatar;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return self.messages.count;
}

@end
