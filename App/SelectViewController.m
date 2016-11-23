#import "SelectViewController.h"

#import "EditViewController.h"
#import "FCFileManager.h"
#import "MrubyViewController.h"

enum AlertKind {
    NewFile,
    NewDirectory,
    Rename,
    Move,
};

enum ActionKind {
    Delete,
    Sort,
};

enum SortKind {
    SortByDate,
    SortByName,
};

@implementation SelectViewController {
    NSMutableArray* _dataSource;
    NSString* _fileDirectory;
    NSString* _title;
    BOOL _editable;
    BOOL _isDirectRun;
    NSString *_runDir;
    UIBarButtonItem* _editButton;
    enum AlertKind _alertKind;
    NSString* _renameSrc;
    enum ActionKind _actionKind;
    enum SortKind _sortKind;
}

- (id)init {
    self = [super init];
    return self;
}

- (id)initWithFileDirectory:(NSString*)directory title:(NSString*)title edit:(BOOL)editable {
    return [self initWithFileDirectory:directory
                                 title:title
                                  edit:editable
                             directRun:NO
                                runDir:nil];
}

- (id)initWithFileDirectory:(NSString*)directory title:(NSString*)title edit:(BOOL)editable directRun:(BOOL)isDirecRun runDir:(NSString*)runDir {
    self = [super init];
    _fileDirectory = directory;
    _title = title;
    _editable = editable;
    _isDirectRun = isDirecRun;
    _runDir = runDir;
    NSAssert(_runDir == nil || _isDirectRun, @"Support runDir with only isDirecRun");
    self.tableView.allowsMultipleSelectionDuringEditing = YES;
    _sortKind = SortByDate;
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
        _editButton = [[UIBarButtonItem alloc] initWithTitle:@"Edit"
                                                       style:UIBarButtonItemStylePlain
                                                      target:self
                                                      action:@selector(tapEditButton)];
        _editButton.possibleTitles = [NSSet setWithObjects:@"Edit", @"Done", nil];

        self.navigationItem.rightBarButtonItems = [NSArray arrayWithObjects:addButton, direcotryButton, _editButton, nil];
        
    } else {
        self.navigationItem.rightBarButtonItem = NULL;
        self.navigationItem.leftBarButtonItem = NULL;
    }

    // TableView
    _dataSource = [self updateDataSourceFromFiles];
    [self.tableView reloadData];
}

- (void)alert:(enum AlertKind)kind title:(NSString*)title textField:(NSString*)textField {
    _alertKind = kind;

    UIAlertView* alert = [[UIAlertView alloc] init];
    alert.title = title;
    //alert.message = @"Enter file name.";
    alert.delegate = self;
    [alert addButtonWithTitle:@"Cancel"];
    [alert addButtonWithTitle:@"OK"];
    [alert setAlertViewStyle:UIAlertViewStylePlainTextInput];
    alert.cancelButtonIndex = 0;

    if (textField) {
        UITextField *tf = [alert textFieldAtIndex:0];
        tf.text = textField;
    }

    [alert show];
}

- (void)tapAddButton {
    [self.tableView setEditing:NO animated:NO];
    [self alert:NewFile title:@"New File" textField:nil];
}

- (void)tapDirecotryButton {
    [self.tableView setEditing:NO animated:NO];
    [self alert:NewDirectory title:@"New Directory" textField:nil];
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
        UIBarButtonItem* sortButton = [[UIBarButtonItem alloc] initWithTitle:@"Sort"
                                                                         style:UIBarButtonItemStyleBordered
                                                                        target:self
                                                                        action:@selector(tapSortButton)];
        self.toolbarItems = @[deleteButton, moveButton, renameButton, sortButton];

        [self.tableView setEditing:YES animated:YES];

        _editButton.title = @"Done";
        _editButton.style = UIBarButtonItemStyleDone;
    } else {
        self.navigationController.toolbarHidden = YES;
        [self.tableView setEditing:NO animated:YES];
        _editButton.title = @"Edit";
        _editButton.style = UIBarButtonItemStylePlain;
    }
}

- (void)tapDeleteButton {
    NSArray *indexPaths = [self.tableView indexPathsForSelectedRows];
    if (indexPaths.count == 0) {
        return;
    }

    _actionKind = Delete;

    UIActionSheet *actionSheet = [[UIActionSheet alloc] init];
    actionSheet.delegate = self;
    // actionSheet.title = @"Are you sure?";
    [actionSheet addButtonWithTitle:@"Delete"];
    [actionSheet addButtonWithTitle:@"Cancel"];
    actionSheet.cancelButtonIndex = 1;
    actionSheet.destructiveButtonIndex = 0;
    [actionSheet showInView:self.view.window];
}

- (void)actionSheet:(UIActionSheet*)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    switch (_actionKind) {
        case Delete:
            [self deleteAction:actionSheet clickedButtonAtIndex:buttonIndex];
            break;
        case Sort:
            [self sortAction:actionSheet clickedButtonAtIndex:buttonIndex];
            break;
    }

}

- (void)sortAction:(UIActionSheet*)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    switch (buttonIndex) {
        case 0:
            _sortKind = SortByDate;
            _dataSource = [self updateDataSourceFromFiles];
            [self.tableView reloadData];
            break;
        case 1:
            _sortKind = SortByName;
            _dataSource = [self updateDataSourceFromFiles];
            [self.tableView reloadData];
            break;
    }

}

- (void)deleteAction:(UIActionSheet*)actionSheet clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (buttonIndex != 0) {
        return;
    }

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
}

- (void)tapRenameButton {
    NSArray *indexPaths = [self.tableView indexPathsForSelectedRows];
    
    if (indexPaths.count > 0) {
        NSIndexPath *indexPath = indexPaths[0];
        NSString* tableCellName = [_dataSource objectAtIndex:indexPath.row];

        _renameSrc = [_fileDirectory stringByAppendingPathComponent:tableCellName];

        [self alert:Rename title:@"Rename File" textField:tableCellName];
    }
}

- (void)tapSortButton {
    _actionKind = Sort;

    UIActionSheet *actionSheet = [[UIActionSheet alloc] init];
    actionSheet.delegate = self;
    actionSheet.title = @"Sort order?";
    [actionSheet addButtonWithTitle:@"Date"];
    [actionSheet addButtonWithTitle:@"Name"];
    [actionSheet addButtonWithTitle:@"Cancel"];
    actionSheet.cancelButtonIndex = 2;

    [actionSheet showInView:self.view.window];
}

- (void)tapMoveButton {
    NSArray *indexPaths = [self.tableView indexPathsForSelectedRows];

    if (indexPaths.count > 0) {
        [self alert:Move title:@"Move to: (e.g. lib, ../)" textField:nil];
    }
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
    switch (_alertKind) {
        case NewFile:
            [self newFile:alertView clickedButtonAtIndex:buttonIndex];
            break;
        case NewDirectory:
            [self newDirectory:alertView clickedButtonAtIndex:buttonIndex];
            break;
        case Rename:
            [self rename:alertView clickedButtonAtIndex:buttonIndex];
            break;
        case Move:
            [self move:alertView clickedButtonAtIndex:buttonIndex];
            break;
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

- (void)rename:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (buttonIndex != alertView.cancelButtonIndex) {
        NSString* text = [[alertView textFieldAtIndex:0] text];
        if ([text isEqualToString:@""]) {
            return;
        }

        // Create path
        NSString* dir = [_renameSrc stringByDeletingLastPathComponent];
        NSString* dstPath = [dir stringByAppendingPathComponent:text];

        // Rename
        BOOL ret = [FCFileManager moveItemAtPath:_renameSrc toPath:dstPath];

        // Alert if file already exists
        if (!ret) {
            UIAlertView* alert = [[UIAlertView alloc] init];
            alert.title = [NSString stringWithFormat:@"%@ already exists", text];
            [alert addButtonWithTitle:@"OK"];
            [alert show];
            return;
        }

        // Reload table
        _dataSource = [self updateDataSourceFromFiles];
        [self.tableView reloadData];
    }
}

- (void)move:(UIAlertView*)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
    if (buttonIndex != alertView.cancelButtonIndex) {
        NSString *text = [[alertView textFieldAtIndex:0] text];
        if ([text isEqualToString:@""]) {
            return;
        }
        NSString *dstDir = [_fileDirectory stringByAppendingPathComponent:text];

        // Exists directory?
        if (![FCFileManager existsItemAtPath: dstDir]) {
            UIAlertView* alert = [[UIAlertView alloc] init];
            alert.title = @"Directory not found";
            [alert addButtonWithTitle:@"OK"];
            [alert show];
            return;
        }

        NSArray *sortedIndexPaths = [[[[self.tableView indexPathsForSelectedRows]
                                          sortedArrayUsingSelector:@selector(compare:)]
                                         reverseObjectEnumerator] allObjects];

        // All files can be moved?
        for (NSIndexPath *indexPath in sortedIndexPaths) {
            NSString *tableCellName = [_dataSource objectAtIndex:indexPath.row];
            NSString *dstPath = [dstDir stringByAppendingPathComponent:tableCellName];
            
            if ([FCFileManager existsItemAtPath: dstPath]) {
                UIAlertView* alert = [[UIAlertView alloc] init];
                alert.title = [tableCellName stringByAppendingString:@" already exists"];
                [alert addButtonWithTitle:@"OK"];
                [alert show];
                return;
            }
        }

        // Move files
        for (NSIndexPath *indexPath in sortedIndexPaths) {
            NSString *tableCellName = [_dataSource objectAtIndex:indexPath.row];
            NSString *srcPath = [_fileDirectory stringByAppendingPathComponent:tableCellName];
            NSString *dstPath = [dstDir stringByAppendingPathComponent:tableCellName];

            // Move
            BOOL ret = [FCFileManager moveItemAtPath:srcPath toPath:dstPath];

            // Data Source
            [_dataSource removeObjectAtIndex:indexPath.row];

            // Table Row
            [self.tableView deleteRowsAtIndexPaths:[NSArray arrayWithObject:indexPath]
                                  withRowAnimation:UITableViewRowAnimationFade];
        }
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

    NSString* tableCellName = [_dataSource objectAtIndex:indexPath.row];
    cell.textLabel.text = tableCellName;

    NSString* path = [_fileDirectory stringByAppendingPathComponent:tableCellName];
    if ([FCFileManager isDirectoryItemAtPath: path]) {
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
        cell.imageView.image = [UIImage imageNamed:@"directory.png"];
        cell.imageView.highlightedImage = [UIImage imageNamed:@"directory.png"];
    } else {
        cell.accessoryType = UITableViewCellAccessoryNone;
        cell.imageView.image = [UIImage imageNamed:@"file.png"];
        cell.imageView.highlightedImage = [UIImage imageNamed:@"file.png"];
    }

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
        viewController = [[SelectViewController alloc] initWithFileDirectory:path
                                                                       title:tableCellName
                                                                        edit:YES];
    } else {
        if (_isDirectRun) {
            viewController = [[MrubyViewController alloc] initWithScriptPath:path
                                                                      runDir:_runDir];
        } else {
            viewController = [[EditViewController alloc] initWithFileName:path edit:_editable];
        }
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
                                // "ModDate" or "Name"
                                NSString *sortKey = (_sortKind == SortByDate) ? @"ModDate" : @"Name";

                                NSComparisonResult comp = [[path1 objectForKey:sortKey] compare:
                                                           [path2 objectForKey:sortKey]];

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
    NSMutableArray* array = [[NSMutableArray alloc] initWithObjects: nil];

    for (NSDictionary* dict in sortedFiles) {
        [array addObject:[[dict objectForKey:@"Path"] lastPathComponent]];
    }

    return array;
}

@end
