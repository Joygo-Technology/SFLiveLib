//
//  SUSClient+NotificationQuery.h
//  SFLiveLib
//
//  Created by kirk on 17/1/11.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import "SUSClient.h"
#import "SUNotificationCountResponse.h"
#import "SUNotificationModel.h"

@interface SUSClient (NotificationQuery)

/**
    获取通知数量
 @param uId 用户ID
 @return requestId
 */
- (NSNumber *)getNotifyCountWithUId:(NSNumber *)uId
                                     completion:(void(^)(SUNotificationCountResponse *response, NSError * error))completion;

/**
 获取消息列表
 @param uId 用户ID
 @return requestId
 */

- (NSNumber *)getMyNotifysWithUId:(NSNumber *)uId
                                         page:(NSInteger)page
                                     pageSize:(NSInteger)pageSize
                                   completion:(void(^)(SUNotificationListResponse *response, NSError * error))completion;

/**
 设置消息已读
 @param uId 用户ID
 @param mIds 消息ID string 数组  不传为设置全部
 @return requestId
 */

- (NSNumber *)setMessageOpenedWithUId:(NSNumber *)uId
                                              mId:(NSArray*)mIds
                                       completion:(void(^)(SUResponse *response, NSError * error))completion;

@end
