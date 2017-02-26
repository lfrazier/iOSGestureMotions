//
//  DTWAlgorithm.h
//  GMGestureMotions
//
//  Created by Lauren Frazier on 1/25/13.
//  Copyright (c) 2013 Lauren Frazier. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GMGesture.h"

@interface DTWAlgorithm : NSObject

+ (float)calcDistanceBetweenGesture:(GMGesture *)a andGesture:(GMGesture *)b;

@end