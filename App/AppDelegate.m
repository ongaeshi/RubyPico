#import "AppDelegate.h"
#import "FileViewController.h"
#import "SampleViewController.h"

@implementation AppDelegate {
    UITabBarController* _tabBarController;
    FileViewController* _fileViewController;
}

@synthesize window;

- (void)applicationDidFinishLaunching:(UIApplication *)application {
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen]bounds]];

    _tabBarController = [[UITabBarController alloc] init];
    _tabBarController.title = @" ";

    _fileViewController = [[FileViewController alloc] init];
    UIImage* icon1 = [UIImage imageNamed:@"tabbar_files.png"];
    _fileViewController.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"File" image:icon1 tag:0];
    UINavigationController *tab1 = [[UINavigationController alloc] initWithRootViewController:_fileViewController];

    UIViewController* view2 = [[SampleViewController alloc] init];
    UIImage* icon2 = [UIImage imageNamed:@"tabbar_samples.png"];
    view2.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Sample" image:icon2 tag:0];
    UINavigationController *tab2 = [[UINavigationController alloc] initWithRootViewController:view2];

    NSArray* tabs = [NSArray arrayWithObjects:tab1, tab2, nil];
    [_tabBarController setViewControllers:tabs animated:NO];

    [self.window addSubview:_tabBarController.view];
    self.window.rootViewController = _tabBarController;
    [self.window makeKeyAndVisible];
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    NSNotification* n = [NSNotification notificationWithName:@"applicationDidEnterBackground" object:self];
    [[NSNotificationCenter defaultCenter] postNotification:n];
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    [_fileViewController runWithScriptName:[[url host] stringByAppendingPathComponent:[url path]]];
    return YES;
}

@end
