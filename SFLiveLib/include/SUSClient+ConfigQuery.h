//
//  SUSClient+ConfigQuery.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/13.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUSClient.h"
#import "SUGiftModel.h"
#import "SUAdModel.h"
#import "SUProductModel.h"
#import "SUInitialConfigModel.h"
#import "SUAppleAduitResponse.h"

@interface SUSClient (ConfigQuery)

/**
 获取礼物列表
 */
- (NSNumber *)getRoomGiftList:(void(^)(SUGiftListResponse *response, NSError *error))completion;

/**
 获取广告列表

 @param position 广告位
 */
- (NSNumber *)getAdListByPosition:(SUAdPosition)position completion:(void(^)(SUAdListResponse *response, NSError *error))completion;


/**
 获取当前充值产品列表
 */
- (NSNumber *)getAppleProductList:(void(^)(SUProductListResponse *response, NSError *error))completion;


/**
 获取初始化配置列表
 */
- (NSNumber *)getInitialConfigs:(void(^)(SUInitialConfigResponse *response, NSError *error))completion;


/**
 意见反馈

 @param uId 当前用户Id
 @param nickName 用户昵称
 @param content 举报内容
 @param from 举报的来源
 @param completion 完后回调
 @return 任务Id
 */
- (NSNumber *)postFeedSubmitWithId:(NSNumber *)uId nickName:(NSString *)nickName content:(NSString *)content form:(NSNumber *)from completion:(void(^)(SUResponse *response, NSError *error))completion;


/**
 苹果审核开关

 @param ver 版本号
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getAppleAuditSwitchVer:(NSString *)ver completion:(void(^)(SUAppleAduitResponse *response, NSError *error))completion;

@end
