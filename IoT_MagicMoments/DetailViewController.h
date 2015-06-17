//
//  DetailViewController.h
//  Iot_MagicMoments
//
//  Created by Kim Adams on 6/17/15.
//  Copyright (c) 2015 Lopez Negrete Communications. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

