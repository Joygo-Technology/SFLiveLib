//
//  SURedEnvMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/10.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, SURedEnvType)
{
    SURedEnvTypeNormal = 1,
    SURedEnvTypeAnchor = 2,
};

@interface SURedEnvMessage : NSObject

@property (nonatomic, strong) NSNumber *userId;
@property (nonatomic, strong) NSString *headimg;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, assign) SURedEnvType type;
@property (nonatomic, strong) NSNumber *rpid;
@property (nonatomic, strong) NSString *title;

@end
