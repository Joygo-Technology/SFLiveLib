//
//  SUSClient+UserQuery.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/2.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUSClient.h"
#import "SUResponse.h"
#import "SUUserInfoModel.h"
#import "SUUserProfileModel.h"
#import "SUAnchorApplyModel.h"
#import "SUFansModel.h"
#import "SUAnchorApplyModel.h"
#import "SUInvitedUserModel.h"
#import "SURelationResponse.h"
#import "SUBlackListModel.h"

@interface SUSClient (UserQuery)

typedef NS_ENUM(NSUInteger, SUPINType)
{
    PIN_SIGNUP = 100,
    PIN_FORGETPSD = 200,
    PIN_BINDPHONE = 666,
    PIN_VERIFY = 300,
};

/**
 获取手机验证码

 @param type 验证码类型，注册/找回密码
 @param phoneNo 手机号
 @param completion 返回block
 @return 任务ID
 */
- (NSNumber *)getSMSCodeWithType:(SUPINType)type uId:(NSNumber *)uId PhoneNo:(NSString *)phoneNo completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 手机号注册

 @param phoneNo 手机号
 @param password 密码
 @param PIN 验证码
 @param nickname 昵称
 @param inviteCode 邀请码
 @param completion 返回block
 @return 任务ID
 */
- (NSNumber *)signUpWithPhoneNo:(NSString *)phoneNo password:(NSString *)password PIN:(NSString *)PIN nickname:(NSString *)nickname inviteCode:(NSString *)inviteCode completion:(void(^)(SUUserInfoResponse *response, NSError *error))completion;

/**
 重置手机用户密码

 @param phoneNo 手机号
 @param password 新密码
 @param PIN 验证码
 @param completion 返回
 @return 任务ID
 */
- (NSNumber *)resetPasswordWithPhoneNo:(NSString *)phoneNo password:(NSString *)password PIN:(NSString *)PIN completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 修改手机号用户密码

 @param uId 用户ID
 @param oldPassword 旧密码
 @param newPassword 新密码
 @param completion 回调block
 @return 任务ID
 */
- (NSNumber *)modifyPasswordWithUId:(NSNumber *)uId oldPassword:(NSString *)oldPassword newPassword:(NSString *)newPassword completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 手机号登陆

 @param phoneNo 手机号
 @param password 密码
 @return 任务ID
 */
- (NSNumber *)signInWithPhoneNo:(NSString *)phoneNo password:(NSString *)password completion:(void(^)(SUUserInfoResponse *response, NSError *error))completion;

typedef NS_ENUM(NSInteger, SUTHIRDPARITY)
{
    THIRDPARITY_QQ = 4,
    THIRDPARITY_WX = 5,
    THIRDPARITY_WB = 6,
};

/**
 第三方快捷登陆

 @param thirdParty QQ/WeiXin/Weibo
 @param openId openId
 @param nickname 昵称
 @param sex 性别 0 男， 1女，2未知
 @param photo 头像
 @return 任务ID
 */
- (NSNumber *)signInWithThirdParty:(SUTHIRDPARITY)thirdParty openId:(NSString *)openId nickname:(NSString *)nickname sex:(SUGender)sex photo:(NSString *)photo completion:(void(^)(SUUserInfoResponse *response, NSError *error))completion;

/**
 换绑前验证已绑定手机号

 @param uId 用户ID
 @param phoneNo 旧手机号
 @param PIN 验证码

 @return 任务ID
 */
- (NSNumber *)verifyBindedPhoneWithUID:(NSNumber *)uId phoneNo:(NSString *)phoneNo PIN:(NSString *)PIN completion:(void(^)(SUResponse *response, NSError *error))completion;
/**
 绑定手机号
 
 @param uId 用户ID
 @param phoneNo 手机号
 @param PIN 验证码
 
 @return 任务ID
 */
- (NSNumber *)bindedPhoneWithUID:(NSNumber *)uId phoneNo:(NSString *)phoneNo PIN:(NSString *)PIN completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 用户登出

 @param uId 用户ID
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)signOutWithUId:(NSNumber *)uId completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 获取其他用户简介

 @param uId 用户ID
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)getUserProfileWithUId:(NSNumber *)uId myId:(NSNumber *)myId completion:(void(^)(SUUserProfileResponse *response, NSError *error))completion;

/**
 获取我的个人账户详情

 @param uId 用户ID
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)getUserInfoWithUId:(NSNumber *)uId completion:(void(^)(SUUserInfoResponse *response, NSError *error))completion;

typedef NS_ENUM(NSInteger, SUInfoField)
{
    INFO_PHOTO = 10,
    INFO_NICK = 20,
    INFO_SIGN = 30,
    INFO_GENDER = 40,
    INFO_BIRTHDAY = 50,
    INFO_ADDR = 60,
    INFO_INTRODUCE = 70,

//    INFO_PHONE = 80,
};

/**
 修改个人资料

 @param uId 用户ID
 @param field 字段
 @param value 字段值
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)modifyUserInfoWithUId:(NSNumber *)uId field:(SUInfoField)field value:(id)value completion:(void(^)(SUUserInfoResponse *response, NSError *error))completion;

/**
 用户关注，取关

 @param uId 用户ID
 @param targetId 对象用户ID
 @param focus 是否关注
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)changeFocusWithMyId:(NSNumber *)uId targetId:(NSNumber *)targetId focus:(BOOL)focus completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 获取用户关注列表

 @param uId 用户ID
 @param page 分页
 @param pageSize 分页大小
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)getUserFocusListWithUId:(NSNumber *)uId myId:(NSNumber *)myId page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUFansListResponse *response, NSError *error))completion;

/**
 获取用户粉丝列表
 
 @param uId 用户ID
 @param page 分页
 @param pageSize 分页大小
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)getUserFansListWithUId:(NSNumber *)uId myId:(NSNumber *)myId page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUFansListResponse *response, NSError *error))completion;

/**
 获取用户粉丝列表
 
 @param uId 用户ID
 @param targetId 目标用户ID
 @return 任务ID
 */
- (NSNumber *)checkIfFocusUser:(NSNumber *)uId targetId:(NSNumber *)targetId completion:(void (^)(SURelationResponse *response, NSError *))completion;

/**
 提交主播申请表

 @param fields 主播申请表
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)postAnhorApplyForm:(NSDictionary *)fields completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 查询主播申请进度

 @param uId 用户ID
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)checkApplyStatusWithUId:(NSNumber *)uId completion:(void(^)(SUAnchorApplyResponse *response, NSError *error))completion;

/**
 获取邀请的用户列表

 @param uId 邀请人ID
 @param page 分页
 @param pageSize 分页大小
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)getMyInvitedUserListWithUId:(NSNumber *)uId page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUInvitedUserResponse *response, NSError *error))completion;

typedef NS_ENUM(NSInteger, ReportType){
    ReportType_Advertising          = 1, //广告
    ReportType_Prostitution         = 2, //涉黄
    prostitution_Reactionary        = 3, //反动.
};
/**
 举报用户
 
 @param uId 发起人
 @param targetId 目标id
 @param type 举报类型
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)reportUserWithUId:(NSNumber *)uId targetId:(NSNumber *)targetId reportType:(ReportType)type completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 黑名单列表
 
 @param uId 用户Id
 @param page 分页
 @param pageSize 分页大小
 @param completion 回调
 @return 任务ID
 */
- (NSNumber *)getBlackListWithUId:(NSNumber *)uId page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUBlackListResponse *response, NSError *error))completion;

/**
 拉入，移除黑名单
 
 @param uId 用户ID
 @param targetId 对象用户ID
 @param black 是否拉入黑名单 YES:拉入
 @param completion 回调Block
 @return 任务ID
 */
- (NSNumber *)changeBlackStatusWithUId:(NSNumber *)uId targetId:(NSNumber *)targetId black:(BOOL)black completion:(void(^)(SUResponse *response, NSError *error))completion;

@end
