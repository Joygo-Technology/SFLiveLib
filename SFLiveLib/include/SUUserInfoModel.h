//
//  SUUserInfoModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/2.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"

typedef NS_ENUM(NSInteger, SUGender)
{
    GENDER_MALE = 0,
    GENDER_FEMALE = 1,
    GENDER_UNKNOW = 2,
};

typedef NS_ENUM(NSInteger, SUUserType)
{
    USER_NORMAL = 1,
    USER_JOYGO  = 9,
};

typedef NS_ENUM(NSInteger, SUApplyStatus)
{
    STATUS_NONE = 0,//没申请
    STATUS_INREVIEW = 1,//审核中
    STATUS_SUCCED = 2,//通过
    STATUS_FAILED = 3,//被拒绝
};


@interface SUUserInfoModel : NSObject<NSCoding, NSCopying>

//登陆，注册时获取的基本信息
@property (nonatomic, strong) NSNumber* up_id;
@property (nonatomic, strong) NSString* idno;//荔枝号
@property (nonatomic, strong) NSString* nickname;
@property (nonatomic, strong) NSString* realname;//真实姓名
@property (nonatomic, strong) NSString* photo;
@property (nonatomic, strong) NSString* email;
@property (nonatomic, assign) BOOL up_isanchor;//是否是主播
@property (nonatomic, assign) BOOL is_admin;//是否是监播
@property (nonatomic, assign) NSInteger categorycode;//主播分类Id
@property (nonatomic, assign) SUApplyStatus apply_status;//主播申请状态

//详细信息
@property (nonatomic, assign) SUGender sex;
@property (nonatomic, strong) NSString* birthday; //yyyy-MM-dd
@property (nonatomic, strong) NSString* addr;
@property (nonatomic, strong) NSString* sign;//个性签名
@property (nonatomic, strong) NSString* up_decription;//个人介绍
@property (nonatomic, strong) NSString *phone; //手机号
@property (nonatomic, strong) NSString* invite_code;//邀请码
@property (nonatomic, assign) SUUserType up_type;//用户类型
//@property (nonatomic, assign) BOOL up_status; //账户状态，YES 禁用
@property (nonatomic, assign) NSInteger bl_id;//用户级别
@property (nonatomic, assign) NSInteger fans_count;//粉丝数
@property (nonatomic, assign) NSInteger focus_count;//关注数

//账户信息
//@property (nonatomic, strong) NSString* login; 登陆账户/openId
@property (nonatomic, strong) NSString* invite_count;//邀请注册成功人数
@property (nonatomic, strong) NSString* videos;//回放视频数量
@property (nonatomic, strong) NSString* balance;//用户虚拟货币余额
@property (nonatomic, strong) NSString* giftValue;//用户礼物收入

- (BOOL)isNickOrHeadChangedCompareTo:(SUUserInfoModel *)userinfo;

@end

@interface SUUserInfoResponse : SUResponse

@property (nonatomic, strong) SUUserInfoModel* result;

@end


