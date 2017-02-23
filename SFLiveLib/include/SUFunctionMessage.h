//
//  SUFunctionMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/29.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

//类型 =1连麦 =2聊天 =3弹幕 =4送礼 =5 点赞
typedef NS_ENUM(NSUInteger, SURoomFunction)
{
    SURoomFunctionLink = 1,
    SURoomFunctionChat = 2,
    SURoomFunctionBullet = 3,
    SURoomFunctionGift = 4,
    SURoomFunctionFav = 5,
};

@interface SUFunctionMessage : NSObject

@property (nonatomic, strong) NSNumber *roomId;
@property (nonatomic, assign) SURoomFunction function;
@property (nonatomic, assign) BOOL enable;

@end
