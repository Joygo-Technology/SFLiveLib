//
//  SFLiveManagerQuery.h
//  StarFactory
//
//  Created by Phil Xhc on 7/20/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFBaseResponse.h"
#import "SFPlayBackModel.h"
#import "SFBaseResponse.h"

typedef NS_ENUM(NSInteger, ReportType){
    ReportType_UNKnow           = 0, //未知
    ReportType_Prostitution     = 1, //涉黄
    prostitution_Violence       = 2, //暴力.
};


@interface SFLiveManagerQuery : NSObject

/**
 *
 *  @brief  搜索回放
 *
 *  @param keys        关键字
 *  @param pageIndex   页码 起始页为0 默认0
 *  @return pageSize   页码大小  默认30
 */
+ (NSURLSessionDataTask *)getSearchPlaybackWithKeys:(NSString *)keys
                                          pageIndex:(NSInteger)pageIndex
                                           pageSize:(NSInteger)pageSize
                                         completion:(void (^)(SFPlayBackListResponse  *response))completion;

/**
 *
 *  @brief  封号
 *
 *  @param adminId        监播Id
 *  @param userId        被封号Id
 */
+ (NSURLSessionDataTask *)postBanUserWithAdminId:(NSNumber *)adminId
                                          userId:(NSNumber *)uId
                                      completion:(void (^)(SFBaseResponse *response))completion;

/**
 *
 *  @brief  举报主播直播
 *
 *  @param userId        举报者用户Id
 *  @param anchorId        被举报的主播Id
 *  @param content          内容描述
 *  @param image                举报截图
 *  @param type
 */
+ (NSURLSessionDataTask *)postBanUserWithUserId:(NSNumber *)userId
                                     reporterId:(NSNumber *)reporterId
                                        content:(NSString *)content
                                       imageURL:(NSString *)imageURL
                                           type:(ReportType)type
                                     completion:(void (^)(SFBaseResponse *response))completion;

/**
 *
 *  @brief  结束直播
 *
 *  @param anchorId         主播ID
 *  @param adminId          监播者ID
 */
+ (NSURLSessionDataTask *)postEndLive:(NSNumber *)anchorId adminId:(NSNumber *)adminId completion:(void(^)(SFBaseResponse *response))completion;

/**
 *
 *  @brief  禁言
 *
 *  @param anchorId         主播Id
 *  @param userId           被禁言的用户Id
 *  @param banTime          禁言时间
 */
+ (NSURLSessionDataTask *)postBanUserWithAnchorId:(NSNumber *)anchorId
                                           userId:(NSNumber *)userId
                                             type:(float)banTime
                                       completion:(void (^)(SFBaseResponse *response))completion;

/**
 *
 *  @brief  踢出房间
 *
 *  @param anchorId         主播ID
 *  @param userId           用户ID
 */
+ (NSURLSessionDataTask *)postKickRoomWithAnchorId:(NSNumber *)anchorId
                                            userId:(NSNumber *)userId
                                        completion:(void (^)(SFBaseResponse *response))completion;

@end
