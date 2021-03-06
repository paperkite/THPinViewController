//
//  THPinNumButton.h
//  THPinViewController
//
//  Created by Thomas Heß on 14.4.14.
//  Copyright (c) 2014 Thomas Heß. All rights reserved.
//

@import UIKit;
#import "THPinViewControllerMacros.h"

@interface THPinNumButton : UIButton

@property (nonatomic, readonly, assign) NSUInteger number;
@property (nonatomic, readonly, copy) NSString *letters;

- (instancetype)init NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithNumber:(NSUInteger)number letters:(NSString *)letters;
- (instancetype)initWithText:(NSString *)text;
- (instancetype)initWithImage:(UIImage *)image;

+ (CGFloat)diameter;

@end
