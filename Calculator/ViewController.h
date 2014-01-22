//
//  ViewController.h
//  iphone_1
//
//  Created by Sahat Yalkabov on 1/21/14.
//  Copyright (c) 2014 Sahat Yalkabov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *display;

- (void)processDigit:(int)digit;
- (void)processOp:(char)theOp;
- (void)storeFracPart;

- (IBAction)clickDigit:(UIButton *)sender;
- (IBAction)clickPlus;
- (IBAction)clickMinus;
- (IBAction)clickMultiply;
- (IBAction)clickDivide;

- (IBAction)clickOver;
- (IBAction)clickEquals;
- (IBAction)clickClear;

@end
