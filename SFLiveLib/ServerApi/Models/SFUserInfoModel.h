//
//  SFUserInfoModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/3/28.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>
#import <Foundation/Foundation.h>

//用户身份 1-普通用户，2-群主，99-主播，100-明星
typedef NS_ENUM(NSUInteger, UIdentity)
{
    UI_Normal = 1,
    UI_GroupOwner = 2,
    UI_Anchor = 99,
    UI_Star = 100,
};

//用户级别 0-无，1-勋爵，2-男爵，3-子爵，4-伯爵，5-侯爵，6-公爵，7-国王
typedef NS_ENUM(NSUInteger, ULevel)
{
    UL_None = 0,
    UL_Lord = 1,
    UL_Baron = 2,
    UL_Viscount = 3,
    UL_Earl = 4,
    UL_Marquis = 5,
    UL_Duke = 6,
    UL_King = 7,
    UL_Admin = 9,
};

@interface SFUserInfoModel : MTLModel<MTLJSONSerializing>

@property (nonatomic,copy) NSNumber *uId;//用户id
@property (nonatomic,copy) NSString *passwd;//用户密码
@property (nonatomic,copy) NSString *selfid;//用户自定义id
@property (nonatomic,copy) NSString *phone;//手机号
@property (nonatomic,copy) NSString *email;//邮箱
@property (nonatomic,copy) NSString *nickname;//昵称
@property (nonatomic,copy) NSString *photo;//头像url
@property (nonatomic,copy) NSString *sign;//个性签名
@property (nonatomic,copy) NSString *introduce;//个人介绍
@property (nonatomic,assign) NSInteger sex;//性别 0-未知，1-男， 2-女
@property (nonatomic,copy) NSDate *birthday;
@property (nonatomic,copy) NSString *address;//地址 细化到市 比如"广东 深圳"
@property (nonatomic,assign) UIdentity identity;//用户身份
@property (nonatomic,assign) ULevel fansLevel;//用户级别
@property (nonatomic,assign) NSInteger focusCount;//关注数
@property (nonatomic,assign) NSInteger fansCount;//粉丝数
@property (nonatomic,assign) NSInteger isMyFocus;//是否关注
@property (nonatomic,assign) NSInteger playCount;//开播次数
@property (nonatomic,assign) NSInteger online;//是否在线
@property (nonatomic,assign) NSInteger goodCount;//是否在线

/**
 *  判断当前用户是否是主播
 *
 *  @return BOOL值
 */
- (BOOL)currentUserIsStar;

@end

@interface SFUserInfoResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFUserInfoModel *userInfo;

@end

@interface SFUserInfoListResult : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger totalCount;
@property (nonatomic, assign) NSInteger pageCount;
@property (nonatomic, copy) NSArray *list;

@end

@interface SFUserInfoListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFUserInfoListResult *result;

@end


