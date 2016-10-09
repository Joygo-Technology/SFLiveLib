//
//  SFLibGiftItem.h
//  StarFactory
//
//  Created by 李博 on 16/9/12.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SFLibGiftItem : NSObject

@property (nonatomic, strong) NSString *headURL;
@property (nonatomic, strong) NSString *icon;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, strong) NSString *count;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, assign) int speed;

+ (SFLibGiftItem *)newItemWithHead:(NSString *)head title:(NSString *)title content:(NSString *)content color:(UIColor *)color icon:(NSString *)icon count:(NSString *)count speed:(int)speed;

@end
