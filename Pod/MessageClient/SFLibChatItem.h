//
//  RecieveItem.h
//  PXNET
//
//  Created by Sunniwell on 3/7/16.
//  Copyright © 2016 zhushengxiong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SFLibChatItem : NSObject

@property (nonatomic,assign) NSInteger userId;//用户id
@property (nonatomic,strong) NSString *nickname;//用户昵称
@property (nonatomic,strong) NSString *decodeContent;//聊天内容

- (id)initWithJSONDict:(NSDictionary *)JSONDict;

@end

@interface SFLibPrivateChatItem : NSObject

@property (nonatomic,assign) NSInteger userId;//用户id
@property (nonatomic,assign) NSInteger receiverId;//接受者id
@property (nonatomic,strong) NSString *nickname;//用户昵称
@property (nonatomic,strong) NSString *decodeContent;//聊天内容
@property (nonatomic,assign) long utc;//发送时间

- (id)initWithJSONDict:(NSDictionary *)JSONDict;

@end


@interface SFLibShowGiftItem : NSObject

@property (nonatomic,assign) NSInteger userId;//用户id
@property (nonatomic,strong) NSString *nickname;//用户昵称
@property (nonatomic,strong) NSString *Photo;//用户头像
@property (nonatomic,assign) NSInteger giftId;//礼物id
@property (nonatomic,assign) NSInteger giftCnt;//礼物数量
@property (nonatomic,strong) NSString *giftName;//礼物名称
@property (nonatomic,strong) NSString *giftImage;//礼物图片地址
@property (nonatomic,assign) int limit;//连送上线
@property (nonatomic,assign) int speed;//连送数跳动速度
@property (nonatomic,strong) UIColor *presentColor;//上屏特效颜色
@property (nonatomic,strong) NSString *presentPrefix; //购买了/赠送了
@property (nonatomic,strong) NSString *presentUnit;//张，个，份

- (id)initWithJSONDict:(NSDictionary *)JSONDict;

+ (instancetype)newItemWithGiftName:(NSString *)giftName count:(NSInteger )count giverName:(NSString *)nickName url:(NSString *)giftURL;

@end


@interface SFLibInviteLmItem : NSObject

@property (nonatomic,assign) NSInteger invitorId;//邀请者id
@property (nonatomic,strong) NSString *invitorNickname;//邀请者昵称
@property (nonatomic,assign) NSInteger beinvitorId;//被邀请者id
@property (nonatomic,strong) NSString *beinvitorNickname;//被邀请者昵称
@property (nonatomic,strong) NSString *type;//连麦类型  0-语音连麦，1-视频连麦
@property (nonatomic,strong) NSString *pushUrl;//连麦推流地址
@property (nonatomic,assign) long long timestamp;//时间戳

- (id)initWithJSONDict:(NSDictionary *)JSONDict;

@end


@interface SFLibLmStatusItem : NSObject

@property (nonatomic,assign) NSInteger status;//状态码  0-未连麦，1-邀请中，2-已连麦
@property (nonatomic,strong) NSString *cdsIp;//合成流上传的CDS IP
@property (nonatomic,assign) NSInteger cdsPort;//合成流上传的CDS端口


- (id)initWithJSONDict:(NSDictionary *)JSONDict;

@end

@interface SFLibDamuItem : NSObject

@property (nonatomic, assign) NSInteger userId;//用户id
@property (nonatomic, strong) NSString *nickname;//用户昵称
@property (nonatomic, strong) NSString *photo;//用户头像
@property (nonatomic, strong) NSString *content;
@property (nonatomic, assign) NSInteger fansLevel;
@property (nonatomic, strong) NSString *vipRes;

- (id)initWithJSONDict:(NSDictionary *)JSONDict;

@end
