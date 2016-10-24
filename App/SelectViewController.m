#import "SelectViewController.h"

#import "EditViewController.h"
#import "FCFileManager.h"
#import "MrubyViewController.h"

@implementation SelectViewController {
    NSMutableArray* _dataSource;
    NSString* _fileDirectory;
    NSString* _title;
    BOOL _editable;
    BOOL _isNewDirecotry;
}

- (id)init {
    self = [super init];
    return self;
}

- (id)initWithFileDirectory:(NSString*)directory title:(NSString*)title edit:(BOOL)editable {
    self = [super init];
    _fileDirectory = directory;
    _title = title;
    _editable = editable;
    self.tableView.allowsMultipleSelectionDuringEditing = YES;
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];

    // Title
    self.navigationItem.title = _title;

    // BarButton
    if (_editable) {
        // Add Button
        UIBarButtonItem* addButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemAdd
                                                                                   target:self
                                                                                   action:@selector(tapAddButton)];

        // Direcotry button
        UIBarButtonItem* direcotryButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemOrganize
                                                                                            target:self
                                                                                            action:@selector(tapDirecotryButton)];

        // Edit button
        UIBarButtonItem* editButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemEdit
                                                                                            target:self
                                                                                            action:@selector(tapEditButton)];

        self.navigationItem.rightBarButtonItems = [NSArray arrayWithObjects:addButton, direcotryButton, editButton, nil];
        
    } else {
        self.navigationItem.rightBarButtonItem = NULL;
        self.navigationItem.leftBarButtonItem = NULL;
    }

    // TableView
    _dataSource = [self updateDataSourceFromFiles];
    [self.tableView reloadData];
}

- (void)tapAddButton {
    [self.tableView setEditing:NO animated:NO];
    
    _isNewDirecotry = NO;

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

- (void)tapDirecotryButton {
    [self.tableView setEditing:NO animated:NO];

    _isNewDirecotry = YES;

    UIAlertView* alert = [[UIAlertView alloc] init];
    alert.title = @"New Directory";
    //alert.message = @"Enter file name.";
    alert.delegate = self;
    [alert addButtonWithTitle:@"Cancel"];
    [alert addButtonWithTitle:@"OK"];
    [alert setAlertViewStyle:UIAlertViewStylePlainTextInput];
    alert.cancelButtonIndex = 0;
    [alert show];
}

- (void)tapEditButton {
    if (self.navigationController.toolbarHidden) {
        self.navigationController.toolbarHidden = NO;

        UIBarButtonItem* deleteButton = [[UIBarButtonItem alloc] initWithTitle:@"Delete"
                                                                         style:UIBarButtonItemStyleBordered
                                                                        target:self
                                                                        action:@selector(tapDeleteButton)];
        UIBarButtonItem* moveButton = [[UIBarButtonItem alloc] initWithTitle:@"Move"
                                                                         style:UIBarButtonItemStyleBordered
                                                                        target:self
                                                                        action:@selector(tapMoveButton)];
        UIBarButtonItem* renameButton = [[UIBarButtonItem alloc] initWithTitle:@"Rename"
                                                                         style:UIBarButtonItemStyleBordered
                                                                        target:self
                                                                        action:@selector(tapRenameButton)];
        self.toolbarItems = @[deleteButton, moveButton, renameButton];

        [self.tableView setEditing:YES animated:YES];

    } else {
        self.navigationController.toolbarHidden = YES;
        [self.tableView setEditing:NO animated:YES];
    }
}

- (void)tapDeleteButton {
    // TODO: Confirm using alert
    NSArray *sortedIndexPaths = [[[[self.tableView indexPathsForSelectedRows]
                                    sortedArrayUsingSelector:@selector(compare:)]
                                     reverseObjectEnumerator] allObjects];

    for (NSIndexPath *indexPath in sortedIndexPaths) {
        NSString* tableCellName = [_dataSource objectAtIndex:indexPath.row];
        NSString* path = [_fileDirectory stringByAppendingPathComponent:tableCellName];

        // Delete file
        [FCFileManager removeItemAtPath:path];

        // Data Source
        [_dataSource removeObjectAtIndex:indexPath.row];

        // Table Row
        [self.tableView deleteRowsAtIndexPaths:[NSArray arrayWithObject:indexPath]
                              withRowAnimation:UITableViewRowAnimationFade];
    }

    [self tapEditButton];
}

- (NSString*)normalizeScriptName:(NSString*)name {
    // Remove a extension and Add the ".rb" extension.
    return [[name stringByDeletingPathExtension] stringByAppendingPathExtension:@"rb"];
}

- (void)runWithScriptName:(NSString*)name {
    [self.navigationController popToRootViewControllerAnimated:NO];
    
    // File exist?
    NSString* path = [_fileDirectory stringByAppendingPathComponent:name];

    if (![FCFileManager existsItemAtPath:path]) {
        // Retry adding ".rb" extention
        path = [_fileDirectory stringByAppendingPathComponent:[name stringByAppendingPathExtension:@"rb"]];
        
        if (![FCFileManager existsItemAtPath:path]) {
            return;
        }
    }

    // {
    //     EditViewController* viewController = [[EditViewController alloc] initWithFileName:path edit:_editable];
    //     viewController.hidesBottomBarWhenPushed = YES;
    //     [self.navigationController pushViewController:viewController animated:YES];
    // }

    {
        UIViewController* viewController = [[MrubyViewController alloc] initWithScriptPath:path];
        viewController.hidesBottomBarWhenPushed = YES;
        [self.navigationController pushViewController:viewController animated:YES];
    }
}

- (void)alertView:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (_isNewDirecotry) {
        [self newDirectory:alertView clickedButtonAtIndex:buttonIndex];
    } else {
        [self newFile:alertView clickedButtonAtIndex:buttonIndex];
    }
}

- (void)newFile:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (buttonIndex != alertView.cancelButtonIndex) {
        NSString* text = [[alertView textFieldAtIndex:0] text];

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
        NSString* path = [_fileDirectory stringByAppendingPathComponent:text];

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
                            withContent:@"puts \"Hello, RubyPico!\"\n"
                                         "puts \"http://rubypico.ongaeshi.me\"\n"
                                         "puts Image.load(\"chat_ruby.png\")\n"
            ];

        // Update data source
        _dataSource = [self updateDataSourceFromFiles];

        // Insert table view
        NSUInteger newIndex[] = {0, 0}; // section, row
        NSIndexPath* newPath = [[NSIndexPath alloc] initWithIndexes:newIndex length:2];
        [self.tableView insertRowsAtIndexPaths:[NSArray arrayWithObject:newPath]
                              withRowAnimation:UITableViewRowAnimationTop];

        // Reload all
        // [self.tableView reloadData];
    }
}

- (void)newDirectory:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (buttonIndex != alertView.cancelButtonIndex) {
        NSString* text = [[alertView textFieldAtIndex:0] text];

        // Create path
        NSString* path = [_fileDirectory stringByAppendingPathComponent:text];

        // Alert if path already exists
        if ([FCFileManager existsItemAtPath:path]) {
            UIAlertView* alert = [[UIAlertView alloc] init];
            alert.title = @"Already exists";
            [alert addButtonWithTitle:@"OK"];
            [alert show];
            return;
        }

        // Create a new directory
        [FCFileManager createDirectoriesForPath:path];

        // Update data source
        _dataSource = [self updateDataSourceFromFiles];

        // Insert table view
        NSUInteger newIndex[] = {0, 0}; // section, row
        NSIndexPath* newPath = [[NSIndexPath alloc] initWithIndexes:newIndex length:2];
        [self.tableView insertRowsAtIndexPaths:[NSArray arrayWithObject:newPath]
                              withRowAnimation:UITableViewRowAnimationTop];

        // Reload all
        // [self.tableView reloadData];
    }
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [_dataSource count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSString *cellIdentifier = @"Cell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier];

    if (!cell) {
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellIdentifier];
    }

    cell.textLabel.text = [_dataSource objectAtIndex:indexPath.row];

    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    if (self.tableView.editing) {
        return;
    }

    NSString* tableCellName = [_dataSource objectAtIndex:indexPath.row];
    NSString* path = [_fileDirectory stringByAppendingPathComponent:tableCellName];
    UIViewController* viewController;

    if ([FCFileManager isDirectoryItemAtPath: path]) {
        viewController = [[SelectViewController alloc] initWithFileDirectory:path title:tableCellName edit:true];
    } else {
        viewController = [[EditViewController alloc] initWithFileName:path edit:_editable];
        viewController.hidesBottomBarWhenPushed = YES;
    }

    [self.navigationController pushViewController:viewController animated:YES];
}

- (void)tableView:(UITableView*)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath {
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // File
        NSString* tableCellName = [_dataSource objectAtIndex:indexPath.row];
        NSString* path = [_fileDirectory stringByAppendingPathComponent:tableCellName];
        [FCFileManager removeItemAtPath:path];

        // Data Source
        [_dataSource removeObjectAtIndex:indexPath.row];

        // Table Row
        [tableView deleteRowsAtIndexPaths:[NSArray arrayWithObject:indexPath]
                         withRowAnimation:UITableViewRowAnimationFade];

    }
}

- (NSMutableArray *) updateDataSourceFromFiles {
    NSError *error = nil;

    // Collect files
    NSArray* files = [FCFileManager listItemsInDirectoryAtPath:_fileDirectory deep:NO];

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
                                else if(comp == NSOrderedAscending) {
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
