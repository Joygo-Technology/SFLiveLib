//
//  SFNotificationQuery.h
//  StarFactory
//
//  Created by Lee, Bo on 16/6/1.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFCountResponse.h"
#import "SFNotificationModel.h"
#import "SFSimpleResponse.h"

@interface SFNotificationQuery : NSObject


+ (NSURLSessionDataTask *)getNotifyCountWithUId:(NSNumber *)uId
                                     completion:(void(^)(SFCountResponse *response))completion;


+ (NSURLSessionDataTask *)getMyNotifysWithUId:(NSNumber *)uId
                                         page:(NSInteger)page
                                     pageSize:(NSInteger)pageSize
                                   completion:(void(^)(SFNotificationListResponse *response))completion;

+ (NSURLSessionDataTask *)setMessageOpenedWithUId:(NSNumber *)uId
                                              mId:(NSInteger)mId
                                       completion:(void(^)(SFSimpleResponse *response))completion;

@end
