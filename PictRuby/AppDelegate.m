#import "AppDelegate.h"
#import "FileViewController.h"
#import "SampleViewController.h"

@implementation AppDelegate

@synthesize window;

- (void)applicationDidFinishLaunching:(UIApplication *)application
{
    NSLog(@"--- applicationDidFinishLaunching ---");
    
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen]bounds]];

    tabBarController = [[UITabBarController alloc] init];
    tabBarController.title = @" ";

    FileViewController* fileView = [[FileViewController alloc]init];
    UIViewController* view1 = fileView;
    UIImage* icon1 = [UIImage imageNamed:@"tabbar_files.png"];
    view1.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"File" image:icon1 tag:0];
    UINavigationController *tab1 = [[UINavigationController alloc] initWithRootViewController:view1];

    UIViewController* view2 = [[SampleViewController alloc]init];
    UIImage* icon2 = [UIImage imageNamed:@"tabbar_samples.png"];
    view2.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Sample" image:icon2 tag:0];
    UINavigationController *tab2 = [[UINavigationController alloc] initWithRootViewController:view2];

    NSArray* tabs = [NSArray arrayWithObjects:tab1, tab2, nil];
    [tabBarController setViewControllers:tabs animated:NO];

    [self.window addSubview:tabBarController.view];
    self.window.rootViewController = tabBarController;
    [self.window makeKeyAndVisible];

    [fileView directRun:@"array.rb"];
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    NSNotification* n = [NSNotification notificationWithName:@"applicationDidEnterBackground" object:self];
    [[NSNotificationCenter defaultCenter] postNotification:n];
}

- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    NSLog(@"- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation");
    NSLog(@"absoluteString : %@",[url absoluteString]);
    NSLog(@"absoluteURL : %@",[url absoluteURL]);
    NSLog(@"baseURL : %@",[url baseURL]);
    NSLog(@"path : %@",[url path]);
    NSLog(@"host : %@",[url host]);
    NSLog(@"scheme         : %@",[url scheme]);
    NSLog(@"query          : %@",[url query]);
    NSString *absoluteString = [url absoluteString];
    if ([absoluteString isEqualToString:@"testscheme://"]) {
        NSLog(@"Open URL Schemes !!");
    }
    return YES;
}

@end
