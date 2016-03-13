#import "ChatViewController.h"

#import "mruby.h"
#import "mruby/class.h"
#import "mruby/compile.h"
#import "mruby/irep.h"
#import "mruby/string.h"
#import "mruby/error.h"

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

- (id) initWithScriptName:(NSString*)scriptPath
{
    self = [super init];
    mScriptPath = scriptPath;
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Init ChatViewController
    self.senderId = @"you";
    self.senderDisplayName = @"You";

    JSQMessagesBubbleImageFactory *bubbleFactory = [JSQMessagesBubbleImageFactory new];
    self.incomingBubble = [bubbleFactory  incomingMessagesBubbleImageWithColor:[UIColor jsq_messageBubbleLightGrayColor]];
    self.outgoingBubble = [bubbleFactory  outgoingMessagesBubbleImageWithColor:[UIColor jsq_messageBubbleGreenColor]];

    self.incomingAvatar = [JSQMessagesAvatarImageFactory avatarImageWithImage:[UIImage imageNamed:@"chat_ruby.png"] diameter:64];
    self.outgoingAvatar = [JSQMessagesAvatarImageFactory avatarImageWithImage:[UIImage imageNamed:@"chat_you.png"] diameter:64];

    // Hide AccessoryButton
    self.inputToolbar.contentView.leftBarButtonItem = nil;

    self.messages = [NSMutableArray array];

    // Init mruby
    [self initScript];
}

- (void)initScript
{
    mMrb = mrb_open();

    // TODO: bind
    // Bind
    // pictruby::BindImage::SetScriptController((__bridge void*)self);
    // pictruby::BindImage::Bind(mMrb);
    // pictruby::BindPopup::Bind(mMrb);

    // Load builtin library
    // mrb_load_irep(mMrb, BuiltIn);
    {
        NSString* path = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"builtin.rb"];
        char* scriptPath = (char *)[path UTF8String];
        FILE *fd = fopen(scriptPath, "r");
        mrb_load_file(mMrb, fd);
        fclose(fd);
    }

    // Load user script
    int arena = mrb_gc_arena_save(mMrb);
    {
        char* scriptPath = (char *)[mScriptPath UTF8String];
        FILE *fd = fopen(scriptPath, "r");

        mrbc_context *cxt = mrbc_context_new(mMrb);

        const char* fileName = [[[[NSString alloc] initWithUTF8String:scriptPath] lastPathComponent] UTF8String];
        mrbc_filename(mMrb, cxt, fileName);

        mrb_load_file_cxt(mMrb, fd, cxt);

        mrbc_context_free(mMrb, cxt);

        fclose(fd);
    }
    mrb_gc_arena_restore(mMrb, arena);
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
    mrb_value rinput = mrb_str_new_cstr(mMrb, [input UTF8String]);
    mrb_value ret = mrb_funcall(mMrb, mrb_obj_value(mMrb->kernel_module), "chat", 1, rinput);
    
    if (!mrb_obj_is_instance_of(mMrb, ret, mrb_class_get(mMrb, "String"))) {
        ret = mrb_funcall(mMrb, ret, "inspect", 0);
    }

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
