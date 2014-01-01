//
//  PRCrystalBall.m
//  CrystalBall
//
//  Created by Paige Ring on 12/28/2013.
//  Copyright (c) 2013 Paige Ring. All rights reserved.
//

#import "PRCrystalBall.h"

@implementation PRCrystalBall


- (NSArray *) predictions {
    if (_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain", @"It is decidedly so", @"ALL signs say YES", @"The starts are not aligned", @"My reply is no", @"It is doubtful", @"Better not tell you now", @"Concentrate and ask again", @"Unable to answer now", nil];
    }
    return _predictions;
}

- (NSString*)randomPrediction{
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
    
}
@end
