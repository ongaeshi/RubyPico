//
//  EditViewController.m
//  ofruby
//
//  Created by ongaeshi on 2014/08/09.
//
//

#import "EditViewController.h"

#import "FCFileManager.h"
#import "HelpViewController.h"
#import "MrubyViewController.h"
#import "RubyHighlightingTextStorage.h"
#import "ICTextView.h"

const int INDENT_WIDTH = 2;
const int PREV_LINE_MAX = 240;

@implementation EditViewController
{
    ICTextView* mTextView;
	RubyHighlightingTextStorage* mTextStorage;
}

- (id) initWithFileName:(NSString*)aFileName edit:(BOOL)aEditable;
{
    self = [super init];
    if (self) {
        mEditable = aEditable;
        mFileName = aFileName;
        mTouched = NO;
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Notification
    [self updateTextViewInsetsWithKeyboardNotification:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(updateTextViewInsetsWithKeyboardNotification:)
                                                 name:UIKeyboardWillChangeFrameNotification
                                               object:nil];

    // NavButton
    UIBarButtonItem* runButton = [[UIBarButtonItem alloc] initWithTitle:@"Run"
                                                                  style: UIBarButtonItemStyleBordered //DIFF UIBarButtonSystemItemDone
                                                                 target:self
                                                                 action:@selector(tapRunButton)];
    UIBarButtonItem* helpButton = [[UIBarButtonItem alloc] initWithTitle:@"[?]"
                                                                  style: UIBarButtonItemStyleBordered //DIFF UIBarButtonSystemItemDone
                                                                 target:self
                                                                 action:@selector(tapHelpButton)];

    // Need rename button?
    NSString* fileDir = [mFileName stringByDeletingLastPathComponent];
    if ([fileDir isEqualToString:[FCFileManager pathForDocumentsDirectory]]) {
        UIBarButtonItem* renameButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemCompose
                                                                                      target:self
                                                                                      action:@selector(tapRenameButton)];
        self.navigationItem.rightBarButtonItems = [NSArray arrayWithObjects:runButton, helpButton, renameButton, nil];
    } else {
        self.navigationItem.rightBarButtonItems = [NSArray arrayWithObjects:runButton, helpButton, nil];
    }

    if ([self isSyntaxHighlight]) {
        // TextStorage
        mTextStorage = [RubyHighlightingTextStorage new];
        [mTextStorage replaceCharactersInRange:NSMakeRange(0, 0) withString:[FCFileManager readFileAtPath:mFileName]];

        // LayoutManager
        NSLayoutManager *textLayout = [[NSLayoutManager alloc] init];
        [mTextStorage addLayoutManager:textLayout]; 

        // TextContainer
        NSTextContainer *textContainer = [[NSTextContainer alloc] initWithSize:self.view.bounds.size];
        [textLayout addTextContainer:textContainer];

        // TextView
        mTextView = [[ICTextView alloc] initWithFrame:CGRectZero textContainer:textContainer];
        mTextView.scrollPosition = ICTextViewScrollPositionMiddle;

    } else {
        // TextView
        mTextView = [[ICTextView alloc] initWithFrame:self.view.bounds];
        mTextView.text = [FCFileManager readFileAtPath:mFileName];
    }

    // TextView (Common)
    mTextView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    mTextView.editable = mEditable;
    //DIFF mTextView.textAlignment = UITextAlignmentLeft;
    mTextView.font = [UIFont fontWithName:@"Courier" size:12];
    //mTextView.backgroundColor = [UIColor whiteColor];
    mTextView.autocapitalizationType = UITextAutocapitalizationTypeNone;
    mTextView.delegate = self;

    [self.view addSubview:mTextView];

    // Tap title
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.backgroundColor = [UIColor clearColor];
    // button.titleLabel.font =[UIFont boldSystemFontOfSize:16.0];
    [button setTitle:[mFileName lastPathComponent] forState:UIControlStateNormal];
    [button setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    button.frame = CGRectMake(0.0, 0.0, 120.0, self.navigationController.navigationBar.frame.size.height);
    [button addTarget:self action:@selector(tapTitleButton) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.titleView = button;
}

- (void)viewDidLayoutSubviews
{
    mTextView.frame = self.view.bounds;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    [mTextView scrollRectToVisible:CGRectZero animated:YES consideringInsets:YES];

    NSNotificationCenter *notificationCenter = [NSNotificationCenter defaultCenter];
    [notificationCenter addObserver:self selector:@selector(applicationDidEnterBackground) name:@"applicationDidEnterBackground" object:nil];
}
 
- (void)viewDidDisappear:(BOOL)animated
{
    [super viewDidDisappear:animated];

    NSNotificationCenter *notificationCenter = [NSNotificationCenter defaultCenter];
    [notificationCenter removeObserver:self name:@"applicationDidEnterBackground" object:nil];
}

- (void)tapTitleButton 
{
    [mTextView resignFirstResponder];
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    // [mTextView becomeFirstResponder];
}

- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self name:UIKeyboardWillChangeFrameNotification object:nil];
}

- (void)tapRunButton
{
    // Save file (For iOS <= 6.1)
    [self saveFileIfTouched];

    UIViewController* viewController = [[MrubyViewController alloc] initWithScriptPath:mFileName];
    [self.navigationController pushViewController:viewController animated:YES];
}

- (void)tapHelpButton
{
    HelpViewController* viewController = [[HelpViewController alloc] init];
    [self.navigationController pushViewController:viewController animated:YES];
}

- (void)tapRenameButton
{
    UIAlertView* alert = [[UIAlertView alloc] init];
    alert.title = @"Rename File";
    //alert.message = @"Enter file name.";
    alert.delegate = self;
    [alert addButtonWithTitle:@"Cancel"];
    [alert addButtonWithTitle:@"OK"];
    [alert setAlertViewStyle:UIAlertViewStylePlainTextInput];
    alert.cancelButtonIndex = 0;
    [alert show];
}

- (void)alertView:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (buttonIndex != alertView.cancelButtonIndex) {
        NSString* text = [[alertView textFieldAtIndex:0] text];
        if ([text isEqualToString:@""]) {
            return;
        }

        // Remove a directory path and Add the ".rb" extension.
        text = [self normalizeScriptName:[text lastPathComponent]];

        //  File name is illegal
        if ([text isEqualToString:@".rb"]) {
            UIAlertView* alert = [[UIAlertView alloc] init];
            alert.title = @"Invalid file name";
            [alert addButtonWithTitle:@"OK"];
            [alert show];
            return;
        }

        // Create path
        NSString* dir = [mFileName stringByDeletingLastPathComponent];
        NSString* dstPath = [dir stringByAppendingPathComponent:text];

        // Rename
        BOOL ret = [FCFileManager moveItemAtPath:mFileName toPath:dstPath];

        // Alert if file already exists
        if (!ret) {
            UIAlertView* alert = [[UIAlertView alloc] init];
            alert.title = [NSString stringWithFormat:@"%@ already exists", text];
            [alert addButtonWithTitle:@"OK"];
            [alert show];
            return;
        }

        // Change title
        mFileName = dstPath;
        [(UIButton*)self.navigationItem.titleView setTitle:[mFileName lastPathComponent] forState:UIControlStateNormal];
    }
}

- (NSString*)normalizeScriptName:(NSString*)name
{
    // Remove a extension and Add the ".rb" extension.
    return [[name stringByDeletingPathExtension] stringByAppendingPathExtension:@"rb"];
}

- (void)textViewDidChange:(UITextView *)textView
{
    mTouched = YES;
}

- (void)textViewDidEndEditing:(UITextView *)textView
{
    [self saveFileIfTouched];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)saveFileIfTouched
{
    if (mTouched) {
        if ([self isSyntaxHighlight]) {
            [FCFileManager writeFileAtPath:mFileName content:mTextStorage.string];
        } else {
            [FCFileManager writeFileAtPath:mFileName content:mTextView.text];
        }
        mTouched = NO;
    }
}

- (void)applicationDidEnterBackground
{
    [self saveFileIfTouched];
}

-(BOOL)isSyntaxHighlight
{
    return NSFoundationVersionNumber > NSFoundationVersionNumber_iOS_6_1; // 7.0 and above
}

- (BOOL)textView:(UITextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)text 
{
    // Auto indent is supported by >=7.0
    if (![self isSyntaxHighlight]) {
        return YES;
    }

    if ([text isEqualToString:@"\n"]) {
        UITextPosition *start = [textView positionFromPosition:textView.beginningOfDocument offset:range.location];
        int indent = [self calcNextSpace:textView withPos:start];

        NSString* output = @"\n";
        for (int i = 0; i < indent; i++) {
            output = [output stringByAppendingString: @" "];
        }

        [self insertText:textView text:output range:range];

        return NO;
    } else if ([text isEqualToString:@"\t"]) {
        NSString* output = @"";
        for (int i = 0; i < INDENT_WIDTH; i++) {
            output = [output stringByAppendingString: @" "];
        }

        [self insertText:textView text:output range:range];

        return NO;
    }

    return YES;
}

- (int)calcNextSpace:(UITextView*)textView withPos:(UITextPosition*)pos
{
    NSString* prevLine = [self prevLine:textView withPos:pos];
    if (prevLine == NULL) {
        return 0;
    }

    NSRange range = [prevLine rangeOfString:@"^ *"
                                          options:NSRegularExpressionSearch];
    int begginigOfBlank = (range.location != NSNotFound) ? range.length : 0;

    // TODO
    // ".*(do|\|) *\|.+|$" --> +1
    // end, }              --> -1? (Need to match of prev block start)
    range = [prevLine rangeOfString:@"^ *(begin|case|class|def|ensure|module|if|else|elsif|for|module|rescue|unless|until|when|while)"
                            options:NSRegularExpressionSearch];

    if (range.location != NSNotFound) {
        return begginigOfBlank + INDENT_WIDTH;
    } else {
        return begginigOfBlank;
    }
}

- (NSString*)prevLine:(UITextView*)textView withPos:(UITextPosition*)pos
{
    UITextPosition* next = [textView positionFromPosition:pos offset:-PREV_LINE_MAX];
    UITextRange* textRange = [textView textRangeFromPosition:next toPosition:pos];
    NSString* str = [textView textInRange:textRange];
    // NSLog(@"str: '%@'", str);
    
    NSInteger location = [str length] > 0 ? [str length] - 1 : 0;
    NSRange prevRange = [str lineRangeForRange:NSMakeRange(location, 0)];
    if (prevRange.location == NSNotFound) {
        return NULL;
    }

    // NSLog(@"prevLine: '%@'", [str substringWithRange: prevRange]);
    return [str substringWithRange: prevRange];
}

- (void)insertText:(UITextView*)textView text:(NSString*)text range:(NSRange)range
{
    UITextPosition *start = [textView positionFromPosition:textView.beginningOfDocument offset:range.location];
    UITextPosition *end = [textView positionFromPosition:start offset:range.length];
    UITextRange *textRange = [textView textRangeFromPosition:start toPosition:end];

    [textView replaceRange:textRange withText:text];

    NSRange cursor = NSMakeRange(range.location + text.length, 0);
    textView.selectedRange = cursor;
}

- (void)updateTextViewInsetsWithKeyboardNotification:(NSNotification *)notification
{
    UIEdgeInsets newInsets = UIEdgeInsetsZero;
    newInsets.top += [[UIApplication sharedApplication] statusBarFrame].size.height;
    newInsets.top += self.navigationController.navigationBar.frame.size.height;
    // newInsets.top = self.searchBar.frame.size.height;

    if (notification)
    {
        CGRect keyboardFrame;

        [[notification.userInfo objectForKey:UIKeyboardFrameEndUserInfoKey] getValue:&keyboardFrame];
        keyboardFrame = [self.view convertRect:keyboardFrame fromView:nil];

        newInsets.bottom = self.view.frame.size.height - keyboardFrame.origin.y;
    }

    ICTextView *textView = mTextView;
    textView.contentInset = newInsets;
    textView.scrollIndicatorInsets = newInsets;
}

@end
