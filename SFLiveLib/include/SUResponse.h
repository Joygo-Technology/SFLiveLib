//
//  SUResponse.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/2.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

typedef NS_ENUM(NSInteger, ReturnCode) {
    /**
     * 返回成功
     */
    CODE_OK = 200,
    
    CODE_NOTFOUND = 404,
    /**
     * AppID 或 appsercert错误
     */
    CODE_APPID = -1,
    /**
     * 用户的Token 错误
     */
    CODE_TOKEN = -2,
    /**
     * 用户不存在
     */
    USER_NOEXIST = -3,
    /**
     * 注册渠道错误
     */
    USER_REGISTER_NOCHANNEL = -4,
    /**
     * 验证码错误
     */
    USER_CHECKCODE_ERROR = -5,
    /**
     * 密码不能为空
     */
    USER_PASSWORD_ISEMPTY = -6,
    /**
     * 旧密码错
     */
    USER_PASSWORD_ERROR = -7,
    /**
     * 键名（字段无效）
     */
    USER_MODIFY_NONEKEY = -10,
    /**
     * 值无效或非法
     */
    USER_MODIFY_VALUEEMPTY = -11,
    /**
     * 申请失败
     */
    USER_APPLE_FAILE = -18,
    /**
     * 关注的人不存在
     */
    USER_FOCUS_NOUSER = -19,
    /**
     * 表示手机号已经注册，别再注册了
     */
    SMS_EXISTS_PHONE = -20,
    /**
     * 表示手机号还没注册，别找回密码了
     */
    SMS_NOEXISTS_PHONE = -21,
    /**
     * 短信发送失败
     */
    SMS_SEND_FAILE = -25,
    /**
     * 其他错误
     */
    OTHER = -100,
};

@interface SUResponse : NSObject

@property (nonatomic, assign) ReturnCode retcode;
@property (nonatomic, strong) NSString *retmsg;

@end
