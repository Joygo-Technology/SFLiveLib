//
//  SURoleMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/29.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

//role =1主播 =2 场控  =3 监播  =4 用户 =5游客
typedef NS_ENUM(NSUInteger, SUIdentity)
{
    SURoleAnchor = 1,
    SURoleManager = 2, //场控
    SURoleAdmin = 3, //监播
    SURoleUser = 4,
    SURoleGuest = 5,
};

@interface SURoleMessage : NSObject

@property (nonatomic, strong) NSNumber *roomId;
@property (nonatomic, assign) SUIdentity role;
@property (nonatomic, assign) BOOL enable;
@property (nonatomic, strong) NSString *msg;

@end
