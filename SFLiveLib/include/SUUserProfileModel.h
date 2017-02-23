//
//  SUUserProfileModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/7.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUUserInfoModel.h"

typedef NS_ENUM(NSUInteger, SURelationShip)
{
    SURelationShipStranger = 0,//陌生人，
    SURelationShipFans = 1,//他关注了我
    SURelationShipFocus = 2,//我关注他
    SURelationShipFriend = 3,//互相关注了
};

@interface SUUserProfileModel : NSObject

@property (nonatomic, strong) NSNumber* up_id;
@property (nonatomic, strong) NSString* idno;//荔枝号
@property (nonatomic, strong) NSString* nickname;
@property (nonatomic, strong) NSString* photo;
@property (nonatomic, assign) BOOL up_isanchor;//是否是主播
@property (nonatomic, assign) SUGender sex;
@property (nonatomic, strong) NSString* birthday; //yyyy-MM-dd
@property (nonatomic, strong) NSString* addr;
@property (nonatomic, strong) NSString* sign;//个性签名
@property (nonatomic, strong) NSString* up_decription;//个人介绍
@property (nonatomic, strong) NSString* invite_code;//邀请码
@property (nonatomic, assign) SUUserType up_type;//用户类型
//@property (nonatomic, assign) BOOL up_status; //账户状态，YES 禁用
@property (nonatomic, assign) NSInteger bc_id;//座驾Id
@property (nonatomic, assign) NSInteger bl_id;//用户级别
@property (nonatomic, assign) NSInteger fans_count;//粉丝数
@property (nonatomic, assign) NSInteger focus_count;//关注数
@property (nonatomic, assign) NSInteger assists_count;//获赞数
@property (nonatomic, assign) BOOL myfocus;//是否关注了用户
@property (nonatomic, assign) SURelationShip *relation;
@property (nonatomic, assign) NSInteger videos;//视频数量

+ (instancetype)transformProfileModel:(id)model;

+ (instancetype)transformProfileModelWithUId:(NSNumber *)uid;

@end

@interface SUUserProfileResponse : SUResponse

@property (nonatomic, strong) SUUserProfileModel* result;

@end
