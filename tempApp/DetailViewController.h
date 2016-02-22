//
//  DetailViewController.h
//  tempApp
//
//  Created by Parth Vasudev on 2/22/16.
//  Copyright (c) 2016 Parth Vasudev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

