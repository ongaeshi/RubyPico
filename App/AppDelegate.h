#import <UIKit/UIKit.h>
#import "FileViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UITabBarController* tabBarController;
    FileViewController* mFileViewController;
}

@property (strong, nonatomic) UIWindow *window;

@end
