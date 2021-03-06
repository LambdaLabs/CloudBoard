//
//  RootViewController.h
//  cliplogr
//
//  Created by Matt on 6/28/11.
//  Copyright 2011 St. Timothy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MFMailComposeViewController.h>
#import <CoreData/CoreData.h>
#import <AudioToolbox/AudioServices.h>

@interface RootViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
    IBOutlet UIView *editPane;
    IBOutlet UIView *imageCell;
    IBOutlet UIView *imageTriangle;
    IBOutlet UITableView *myTableView;
    IBOutlet UIView *notePad;
    IBOutlet UITextView *notePadTextView;
    
    NSString *asyncUnixTime;
}

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

- (void)insertNewObject: (NSString *)contents ofType:(NSString *)type;
- (void)getClip;
- (void)insertNewObject: (NSString *)contents ofType:(NSString *)type withTime:(NSDate *)timestamp andSlug:(NSString *)slug;
- (BOOL)validateLoginSubmit;
- (void)loginSubmitButton;
- (IBAction)viewItemClick;
- (IBAction)shareItemClick;
- (IBAction)copyItemClick;
- (IBAction)deleteItemClick;
- (void)hideInitialMode;

@end
