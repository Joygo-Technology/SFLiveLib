//
//  SFUserQuery.h
//  StarFactory
//
//  Created by Lee, Bo on 16/3/28.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFUserInfoModel.h"
#import "SFBaseResponse.h"
#import "SFFansModel.h"
#import "SFAnchorApplyModel.h"
#import "SFInComeModel.h"
#import "SFGiftModel.h"
#import "SFBaseResponse.h"
#import "SFUserContributionModel.h"
#import "SFInviteCodeModel.h"


typedef NS_ENUM(NSInteger, UserType)
{
    Type_Unknown = 0,
    Type_SelfID = 1,//自定义id（字母/数字/下划线组合）
    Type_Phone = 2,//手机号注册
    Type_Email = 3,//邮箱注册
    Type_QQ = 4,//QQ绑定注册
    Type_Weixin = 5,//微信绑定注册
    Type_SinaWeibo = 6//新浪微博绑定注册
};

typedef NS_ENUM(NSInteger, SMSType)
{
    SMS_Register = 1, //注册验证码
    SMS_ForgetPassowrd = 2,//重设密码验证码
    SMS_BindPhone = 3,//绑定手机号
    SMS_UnBindPhone = 4,//解绑手机号
};

@interface SFUserQuery : NSObject

// 根据用户ID获得用户头像URL
+ (NSString *)getUserAvatorWithId:(id)uId;

/**
 *  获取手机验证码
 *
 *  @param type       验证码类型
 *  @param phoneNo    手机号
 *  @param completion 返回block
 *
 *  @return NSURLSessionDataTask
 */
+ (NSURLSessionDataTask *)getSMSCodeForType:(SMSType)type
                                    phoneNo:(NSString *)phoneNo
                                 completion:(void(^)(SFBaseResponse *response))completion;

/**
 *  注册用户
 *
 *  @param type       注册类型
 *  @param phoneNo    手机号/其他类型则是id
 *  @param password   密码
 *  @param nick       昵称
 *  @param code       验证码
 *  @param completion 返回block
 *
 */
+ (NSURLSessionDataTask *)registerWithType:(UserType)type
                                   phoneNo:(NSString *)phoneNo
                                  password:(NSString *)password
                                      nick:(NSString *)nick
                                      code:(NSString *)code
                                inviteCode:(NSString *)inviteCode
                                completion:(void(^)(SFUserInfoResponse *response))completion;

/**
 *@brief:用户登陆
 *
 *@param:
 *  type       用户类型
 *  selfid     用户名
 *  password   密码
 *  nickname   昵称
 *  photo      照片(optional)
 *
 *@return: completion
 */
+ (NSURLSessionDataTask *)loginWithType:(UserType)type
                                    uId:(NSString *)uId
                               password:(NSString *)password
                                    sex:(NSString *)sex
                                  photo:(NSString *)photo
                                   nick:(NSString *)nick
                             completion:(void(^)(SFUserInfoResponse *response))completion;

/**
 *@brief:获取用户信息
 *
 *@param:
 *  id    注册服务器返回的id
 *
 *@return: completion
 */
+ (NSURLSessionDataTask *)getUserInfo:(NSNumber *)uId
                           completion:(void (^)(SFUserInfoResponse *response))completion;

/**
 *@brief:获取用户关联信息
 *
 *@param:
 *  id           注册服务器返回的id
 *  requestid    请求人的id
 *
 *@return: completion
 */
+ (NSURLSessionDataTask *)getUserDetail:(NSNumber *)uId requestId:(NSNumber *)requestId completion:(void (^)(SFUserInfoResponse *))completion;

/**
 *  修改密码
 *
 *  @param uId         用户ID
 *  @param password    原密码
 *  @param newPassword 新密码
 *  @param completion  修改返回block
 *
 */
+ (NSURLSessionDataTask *)modifyPasswordWithUId:(NSNumber *)uId
                                       password:(NSString *)password
                                    newPassword:(NSString *)newPassword
                                     completion:(void (^)(SFBaseResponse *response))completion;


/**

 *
 *  @brief  找回密码
 *
 *  @param phone        手机号码
 *  @param passwdNew    新密码
 *  @param smsCode      验证码
 *  @return
 */
+ (NSURLSessionDataTask *)findPasswordWithPhone:(NSString *)phone
                                      passwdNew:(NSString *)passwdNew
                                        smsCode:(NSString *)smsCode
                                     completion:(void (^)(SFBaseResponse *response))completion;

/**

 *
 *  @brief  修改用户信息
 *
 *  @param uId        用户ID
 *  @param 字段名      parameter
 *  @param 字段值      info
 *  @return
 */
+ (NSURLSessionDataTask *)modifyUserInfo:(NSNumber *)uId
                               parameter:(NSString *)parameter
                                    info:(NSString *)info
                              completion:(void (^)(SFUserInfoResponse *response))completion;

/**

 *
 *  @brief  获取用户粉丝列表
 *
 *  @param userId           用户Id
 *  @param page         分页
 *  @param pageSize     分页大小
 *  @return
 */
+ (NSURLSessionDataTask *)getUserFansWithId:(NSNumber *)userId
                                       page:(NSInteger )page
                                   pageSize:(NSInteger )pageSize
                                 completion:(void (^)(SFFansModelResponse *response))completion;


/**

 *
 *  @brief  获取用户关注列表
 *
 *  @param userId           用户Id
 *  @param page         分页
 *  @param pageSize     分页大小
 *  @return
 */
+ (NSURLSessionDataTask *)getUserFocusWithId:(NSNumber *)userId
                                        page:(NSInteger )page
                                    pageSize:(NSInteger )pageSize
                                  completion:(void (^)(SFFansModelResponse *response))completion;

+ (NSURLSessionDataTask *)checkIfFocusUser:(NSNumber *)uId
                                      myId:(NSNumber *)myId
                                completion:(void (^)(SFBaseResponse *response))completion;

/**

 *
 *  @brief  关注用户
 *
 *  @param userId           关注者Id
 *  @param focusId      被关注者Id
 *  @return
 */
+ (NSURLSessionDataTask *)focusUserWithId:(NSNumber *)userId
                                  focusId:(NSNumber *)focusId
                               completion:(void (^)(SFBaseResponse *response))completion;

/**

 *
 *  @brief  关注用户
 *
 *  @param userId           关注者Id
 *  @param focusId      被关注者Id
 *  @return
 */
+ (NSURLSessionDataTask *)cancelFocusUserWithId:(NSNumber *)userId
                                        focusId:(NSNumber *)focusId
                                     completion:(void (^)(SFBaseResponse *response))completion;

+ (NSURLSessionDataTask *)reportAnchorWithId:(NSNumber *)anchorId
                                      userId:(NSNumber *)userId
                                      reason:(NSString *)reason
                                     completion:(void (^)(SFBaseResponse *response))completion;

/**
 *  @brief  获取主播收到总礼物的价值
 
 *  @param userId   主播Id
 */

+ (NSURLSessionDataTask *)getAnchorReceiveGift:(NSNumber *)anchorId
                                    completion:(void (^)(SFInComeResponse *response))completion;

/**

 *
 *  @brief  获取主播收到的礼物列表
 *
 *  @param anchorId            主播Id
 
 *  @return
 */

+ (NSURLSessionDataTask *)getAnchorReceiveGiftList:(NSNumber *)anchorId
                                         pageindex:(NSInteger )pageindex
                                          pagesize:(NSInteger )pagesize
                                        completion:(void (^)(SFGiftListResponse *response))completion;

+ (NSURLSessionDataTask *)postAnhorApplyForm:(NSDictionary *)fields completion:(void (^)(SFBaseResponse *response))completion;

+ (NSURLSessionDataTask *)fetchApplyForAnchor:(NSNumber *)uId
                                   completion:(void (^)(SFApplyAnchorResponse *response))completion;


+ (NSURLSessionDataTask *)deletePlaybackWith:(NSNumber *)uId utc:(NSString *)utc
                                 completion:(void (^)(SFBaseResponse *response))completion;



+ (NSURLSessionDataTask *)getRoomContributionList:(NSNumber *)anchorId
                                       completion:(void (^)(SFUserContributionResponse *response))completion;

/**
 *  @brief  获取主播邀请的注册用户列表
 */

+ (NSURLSessionDataTask *)getInviteUserList:(NSNumber *)uId page:(NSInteger )page pageSize:(NSInteger)pageSize completion:(void(^)(SFInviteCodeResponse *response))completion;



@end
