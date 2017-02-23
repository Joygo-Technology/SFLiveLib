//
//  SUGiftModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/13.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUResponse.h"

typedef NS_ENUM(NSUInteger, SUAnimationType)
{
    SUAnimationTypePop = 0,
    SUAnimationTypeFloat = 1,
};

@interface SUGiftModel : NSObject

@property (nonatomic, strong) NSString *g_code;
@property (nonatomic, strong) NSString *g_name;
@property (nonatomic, strong) NSString *g_icon;
@property (nonatomic, assign) NSInteger g_value;
@property (nonatomic, strong) NSString *g_res;
@property (nonatomic, assign) NSInteger g_limit;
@property (nonatomic, assign) NSInteger g_speed;
@property (nonatomic, assign) NSTimeInterval g_stoptime;
@property (nonatomic, assign) SUAnimationType g_animatetype;

@end

@interface SUGiftListResponse : SUResponse

@property (nonatomic, strong) NSArray *list;

@end
