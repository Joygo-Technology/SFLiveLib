//
//  SUSClient+KaraokeQuery.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/13.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUSClient.h"
#import "SUResponse.h"
#import "SUKaraokeModel.h"
#import "SUKaraokeResModel.h"

@interface SUSClient (KaraokeQuery)

/**
 *  搜索歌曲
 *
 *  @param keyword    搜索关键字
 *  @param page       分页
 *  @param pageSize   分页大小
 *  @param completion 完成回调
 *
 *  @return 任务ID
 */
- (NSNumber *)getKaraokeListWithKeyword:(NSString *)keyword page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUKaraokeListResponse *response, NSError *error))completion;

/**
 *  获取歌曲推荐列表
 *
 *  @param page       分页
 *  @param pageSize   分页大小
 *  @param completion 完成回调
 *
 *  @return 任务ID
 */
- (NSNumber *)getMusicRecommendListPage:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUKaraokeListResponse *response, NSError *error))completion;

/**
 获取歌曲和歌词下载地址
 
 @param musicId 歌曲id
 @param completion 完成回调
 @return 任务ID
 */
- (NSNumber *)getKaraokeResourceWithId:(NSNumber *)musicId completion:(void(^)(SUKaraokeResResponse *response, NSError *error))completion;


/**
 伴奏播放统计接口
 
 @param uId 用户ID
 @param sId 伴奏ID
 @return 任务ID
 */
- (NSNumber *)sendPlayReportWithUId:(NSNumber *)uId sId:(NSNumber *)sId completion:(void(^)(SUResponse *response, NSError *error))completion;

@end
