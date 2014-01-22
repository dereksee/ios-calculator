//
//  Calculator.h
//  Calculator
//
//  Created by Sahat Yalkabov on 1/21/14.
//  Copyright (c) 2014 Sahat Yalkabov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fraction.h"

@interface Calculator : NSObject

@property (strong, nonatomic) Fraction *operand1;
@property (strong, nonatomic) Fraction *operand2;
@property (strong, nonatomic) Fraction *accumulator;

- (Fraction *)performOperation:(char)op;
- (void)clear;

@end
