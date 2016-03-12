#import "ChatViewController.h"

@interface ChatViewController ()

@property (strong, nonatomic) NSMutableArray *messages;
@property (strong, nonatomic) JSQMessagesBubbleImage *incomingBubble;
@property (strong, nonatomic) JSQMessagesBubbleImage *outgoingBubble;
@property (strong, nonatomic) JSQMessagesAvatarImage *incomingAvatar;
@property (strong, nonatomic) JSQMessagesAvatarImage *outgoingAvatar;

@end

@implementation ChatViewController

- (void)viewDidLoad
{
    [super viewDidLoad];

    self.senderId = @"you";
    self.senderDisplayName = @"You";

    JSQMessagesBubbleImageFactory *bubbleFactory = [JSQMessagesBubbleImageFactory new];
    self.incomingBubble = [bubbleFactory  incomingMessagesBubbleImageWithColor:[UIColor jsq_messageBubbleLightGrayColor]];
    self.outgoingBubble = [bubbleFactory  outgoingMessagesBubbleImageWithColor:[UIColor jsq_messageBubbleGreenColor]];

    // self.incomingAvatar = [JSQMessagesAvatarImageFactory avatarImageWithImage:[UIImage imageNamed:@"User2"] diameter:64];
    // self.outgoingAvatar = [JSQMessagesAvatarImageFactory avatarImageWithImage:[UIImage imageNamed:@"User1"] diameter:64];

    self.messages = [NSMutableArray array];
}

- (void)didPressSendButton:(UIButton *)button
           withMessageText:(NSString *)text
                  senderId:(NSString *)senderId
         senderDisplayName:(NSString *)senderDisplayName
                      date:(NSDate *)date
{
    [JSQSystemSoundPlayer jsq_playMessageSentSound];

    JSQMessage *message = [JSQMessage messageWithSenderId:senderId
                                              displayName:senderDisplayName
                                                     text:text];
    [self.messages addObject:message];

    [self finishSendingMessageAnimated:YES];

    // Receive message automatically
    [self receiveAutoMessage];
}

- (void)receiveAutoMessage
{
    [NSTimer scheduledTimerWithTimeInterval:1
                                     target:self
                                   selector:@selector(didFinishMessageTimer:)
                                   userInfo:nil
                                    repeats:NO];
}

- (void)didFinishMessageTimer:(NSTimer*)timer
{
    [JSQSystemSoundPlayer jsq_playMessageSentSound];

    JSQMessage *message = [JSQMessage messageWithSenderId:@"ruby"
                                              displayName:@"Ruby"
                                                     text:@"こんにちは"];
    [self.messages addObject:message];

    [self finishReceivingMessageAnimated:YES];
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
