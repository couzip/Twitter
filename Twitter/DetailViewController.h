//
//  DetailViewController.h
//  Twitter
//
//  Created by couzip dev on 2013/02/16.
//  Copyright (c) 2013年 couzip dev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
