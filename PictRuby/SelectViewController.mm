#include "SelectViewController.h"

#include "EditViewController.h"
#include "FCFileManager.h"
#include "ScriptController.h"

@interface SelectViewController ()

@end

@implementation SelectViewController

- (id)init
{
    self = [super init];
    return self;
}

- (id)initWithFileDirectory:(NSString*)directory title:(NSString*)title edit:(BOOL)editable
{
    self = [super init];
    mFileDirectory = directory;
    mTitle = title;
    mEditable = editable;
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];

    // Title
    self.navigationItem.title = mTitle;

    // BarButton
    if (mEditable) {
        // Add Button
        UIBarButtonItem* addButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAdd
                                                                                   target:self
                                                                                   action:@selector(tapAddButton)];
        self.navigationItem.rightBarButtonItem = addButton;

        // Trash button
        UIBarButtonItem* trashButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemTrash
                                                                                     target:self
                                                                                     action:@selector(tapTrashButton)];
        self.navigationItem.leftBarButtonItem = trashButton;
        
    } else {
        self.navigationItem.rightBarButtonItem = NULL;
        self.navigationItem.leftBarButtonItem = NULL;
    }

    // TableView
    mDataSource = [self updateDataSourceFromFiles];
    [self.tableView reloadData];
}

- (void)tapAddButton
{
    [self.tableView setEditing:NO animated:NO];

    UIAlertView* alert = [[UIAlertView alloc] init];
    alert.title = @"New File";
    //alert.message = @"Enter file name.";
    alert.delegate = self;
    [alert addButtonWithTitle:@"Cancel"];
    [alert addButtonWithTitle:@"OK"];
    [alert setAlertViewStyle:UIAlertViewStylePlainTextInput];
    alert.cancelButtonIndex = 0;
    [alert show];
}

- (void)tapTrashButton
{
    if (!self.tableView.editing) {
        [self.tableView setEditing:YES animated:YES];
    } else {
        [self.tableView setEditing:NO animated:YES];
    }
}

- (void)runWithScriptName:(NSString*)name
{
    NSString* path = [mFileDirectory stringByAppendingPathComponent:name];

    // TODO: If file does not exist

    // {
    //     EditViewController* viewController = [[EditViewController alloc] initWithFileName:path edit:mEditable];
    //     viewController.hidesBottomBarWhenPushed = YES;
    //     [self.navigationController pushViewController:viewController animated:YES];
    // }

    {
        ScriptController* viewController = [[ScriptController alloc] initWithScriptName:path];
        [self.navigationController pushViewController:viewController animated:YES];
    }
}

- (void)alertView:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
    if (buttonIndex != alertView.cancelButtonIndex) {
        NSString* text = [[alertView textFieldAtIndex:0] text];

        // Remove a directory path and Add the ".rb" extension.
        text = [[[text lastPathComponent] stringByDeletingPathExtension] stringByAppendingString:@".rb"];

        //  File name is illegal
        if ([text isEqualToString:@".rb"]) {
            UIAlertView* alert = [[UIAlertView alloc] init];
            alert.title = @"Invalid file name";
            [alert addButtonWithTitle:@"OK"];
            [alert show];
            return;
        }

        // Create path
        NSString* path = [mFileDirectory stringByAppendingPathComponent:text];

        // Alert if file already exists
        if ([FCFileManager existsItemAtPath:path]) {
            UIAlertView* alert = [[UIAlertView alloc] init];
            alert.title = @"Already exists";
            [alert addButtonWithTitle:@"OK"];
            [alert show];
            return;
        }

        // Create a new file
        [FCFileManager createFileAtPath:path
                            withContent:@"# Return the text or image in the \"main\"\n"
                                         "\n"
                                         "def main\n"
                                         "  \"Hello, PictRuby\\nhttp://pictruby.ongaeshi.me\"\n"
                                         "  # name = Popup.input(\"name?\")\n"
                                         "  # img = Image.pick_from_library\n"
                                         "end\n"
            ];

        // Update data source
        mDataSource = [self updateDataSourceFromFiles];

        // Insert table view
        NSUInteger newIndex[] = {0, 0}; // section, row
        NSIndexPath* newPath = [[NSIndexPath alloc] initWithIndexes:newIndex length:2];
        [self.tableView insertRowsAtIndexPaths:[NSArray arrayWithObject:newPath]
                              withRowAnimation:UITableViewRowAnimationTop];

        // Reload all
        // [self.tableView reloadData];
    }
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [mDataSource count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSString *cellIdentifier = @"Cell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];

    if (!cell) {
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellIdentifier];
    }

    cell.textLabel.text = [mDataSource objectAtIndex:indexPath.row];

    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSString* tableCellName = [mDataSource objectAtIndex:indexPath.row];
    NSString* path = [mFileDirectory stringByAppendingPathComponent:tableCellName];
    EditViewController* viewController = [[EditViewController alloc] initWithFileName:path edit:mEditable];
    viewController.hidesBottomBarWhenPushed = YES;
    [self.navigationController pushViewController:viewController animated:YES];
}

- (void)tableView:(UITableView*)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // File
        NSString* tableCellName = [mDataSource objectAtIndex:indexPath.row];
        NSString* path = [mFileDirectory stringByAppendingPathComponent:tableCellName];
        [FCFileManager removeItemAtPath:path];

        // Data Source
        [mDataSource removeObjectAtIndex:indexPath.row];

        // Table Row
        [tableView deleteRowsAtIndexPaths:[NSArray arrayWithObject:indexPath]
                         withRowAnimation:UITableViewRowAnimationFade];

    }
}

- (NSMutableArray *) updateDataSourceFromFiles
{
    NSError *error = nil;

    // Collect files
    NSArray* files = [FCFileManager listFilesInDirectoryAtPath:mFileDirectory];

    // Create array adding ModDate
    NSMutableArray* filesAndModDates = [NSMutableArray arrayWithCapacity:[files count]];

    for (NSString* file in files) {
        NSDictionary* attributes = [[NSFileManager defaultManager] attributesOfItemAtPath:file error:&error];
        NSDate* modDate = [attributes objectForKey:NSFileModificationDate];

        if (error == nil) {
            [filesAndModDates addObject:[NSDictionary dictionaryWithObjectsAndKeys:
                                         file, @"Path",
                                         modDate, @"ModDate",
                                         nil]];
        }
    }

    // Sort by ModDate
    NSArray* sortedFiles = [filesAndModDates sortedArrayUsingComparator:
                            ^(id path1, id path2)
                            {
                                NSComparisonResult comp = [[path1 objectForKey:@"ModDate"] compare:
                                                           [path2 objectForKey:@"ModDate"]];

                                // Invert ordering
                                if (comp == NSOrderedDescending) {
                                    comp = NSOrderedAscending;
                                }
                                else if(comp == NSOrderedAscending){
                                    comp = NSOrderedDescending;
                                }

                                return comp;
                            }];

    // Map file
    NSMutableArray* array = [[NSMutableArray alloc]initWithObjects: nil];

    for (NSDictionary* dict in sortedFiles) {
        [array addObject:[[dict objectForKey:@"Path"] lastPathComponent]];
    }


    return array;
}

@end
