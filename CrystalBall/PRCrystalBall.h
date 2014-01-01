//
//  PRCrystalBall.h
//  CrystalBall
//
//  Created by Paige Ring on 12/28/2013.
//  Copyright (c) 2013 Paige Ring. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PRCrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString*)randomPrediction;

@end
