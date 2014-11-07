//
//  SearchViewController.h
//  IOSSearchML
//
//  Created by Juan José Barrera on 11/7/14.
//  Copyright (c) 2014 ACME. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchViewController : UIViewController<NSURLConnectionDataDelegate,UITableViewDataSource,UITableViewDelegate>{
    NSArray *dataArray;
    NSMutableData *dataDetailItem;
}

@property (weak, nonatomic) IBOutlet UIButton *findItem;

- (IBAction)findItem:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *inputItem;


@property (strong, nonatomic) IBOutlet UITableView *itemsTable;

@end
