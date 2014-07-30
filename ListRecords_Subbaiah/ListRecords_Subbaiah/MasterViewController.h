//
//  MasterViewController.h
//  ListRecords_Subbaiah
//
//  Created by subbu on 30/07/14.
//  Copyright (c) 2014 subbu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <ABPeoplePickerNavigationControllerDelegate, NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
