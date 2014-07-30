//
//  DetailViewController.h
//  ListRecords_Subbaiah
//
//  Created by subbu on 30/07/14.
//  Copyright (c) 2014 subbu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface DetailViewController : UIViewController<UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) NSDictionary *dictContactDetails;
@property (weak, nonatomic) IBOutlet UILabel *nameLbl;
@property (weak, nonatomic) IBOutlet UILabel *numberLbl;
@property (weak, nonatomic) IBOutlet UITableView *contactDetailsTbl;
@property (strong, nonatomic) id detailItem;

@end
