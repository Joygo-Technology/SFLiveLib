//
//  SUSClient+RankQuery.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/13.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUSClient.h"
#import "SURankModel.h"
#import "SUAllRankModel.h"

@interface SUSClient (RankQuery)

#pragma mark - 排行榜相关
/**
 直播间内贡献榜

 @param uId 当前用户Id
 @param liveId 直播间Id
 @param anchorId 主播Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getLiveIncomeRankWithUId:(NSNumber *)uId liveId:(NSNumber *)liveId anchorId:(NSNumber *)anchorId completion:(void(^)(SURankListResponse *response, NSError *error))completion;

/**
 总榜单

 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getAllRankList:(void(^)(SUAllRankListResponse *response, NSError *error))completion;

/**
 点赞榜
 
 @param uId 当前用户Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getAssistRankWithUId:(NSNumber *)uId completion:(void(^)(SURankListResponse *response, NSError *error))completion;

/**
 粉丝榜
 
 @param uId 当前用户Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getFansRankWithUId:(NSNumber *)uId completion:(void(^)(SURankListResponse *response, NSError *error))completion;

/**
 收礼榜
 
 @param uId 当前用户Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getReciveRankWithUId:(NSNumber *)uId completion:(void(^)(SURankListResponse *response, NSError *error))completion;

/**
 充值榜OR土豪榜
 
 @param uId 当前用户Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getRehargeRankWithUId:(NSNumber *)uId completion:(void(^)(SURankListResponse *response, NSError *error))completion;

/**
 用户贡献榜OR送礼榜 当前用户Id
 
 @param uId 主播Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getSendRankWithUId:(NSNumber *)uId completion:(void(^)(SURankListResponse *response, NSError *error))completion;


/**
 直播间贡献榜

 @param uId 当前用户Id
 @param liveId 主播Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getLiveRoomRankWithUId:(NSNumber *)uId anchorId:(NSNumber *)anchorId completion:(void(^)(SURankListResponse *response, NSError *error))completion;

@end
