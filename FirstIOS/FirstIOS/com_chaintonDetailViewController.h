//
//  com_chaintonDetailViewController.h
//  FirstIOS
//
//  Created by IOSDev on 4/8/13.
//  Copyright (c) 2013 IOSDev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface com_chaintonDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
