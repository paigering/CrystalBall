//
//  PRViewController.h
//  CrystalBall
//
//  Created by Paige Ring on 12/28/2013.
//  Copyright (c) 2013 Paige Ring. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PRCrystalBall;

@interface PRViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) PRCrystalBall *crystalBall;

-(void) makePrediction;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

@end
