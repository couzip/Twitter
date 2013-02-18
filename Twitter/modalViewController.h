//
//  modalViewController.h
//  Twitter
//
//  Created by couzip dev on 2013/02/17.
//  Copyright (c) 2013年 couzip dev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>
@protocol modalViewDelegate
- (void) selectAccount:(NSInteger)index;
@end
@interface modalViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>{
    id delegate;
    UITableView *tableView_;
    NSArray *_accounts;
}
@property (nonatomic, strong) id delegate;
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@end
