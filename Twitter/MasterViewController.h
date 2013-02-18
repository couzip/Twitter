//
//  MasterViewController.h
//  Twitter
//
//  Created by couzip dev on 2013/02/16.
//  Copyright (c) 2013年 couzip dev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>
//#import <Twitter/TWRequest.h>
#import <Social/Social.h>

@interface MasterViewController : UITableViewController{
    ACAccount *_account;
    NSMutableArray *_favs;
}
@property (nonatomic, retain) ACAccount *account;

- (void)openSelectAccount;
- (IBAction)selectAccountBtn:(id)sender;
- (void) tweetfetch:(NSInteger)index;
@end
