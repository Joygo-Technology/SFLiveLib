//
//  SUSClient+LiveQuery.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/8.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUSClient.h"
#import "SUResponse.h"
#import "SUFavResponse.h"
#import "SUPushInfoModel.h"
#import "SURoomInfoModel.h"
#import "SUAudienceModel.h"
#import "SUVideoModel.h"
#import "SUManagerModel.h"
#import "SURoomBriefModel.h"
#import "SUPushAuthResponse.h"
#import "SUSearchUserModel.h"
#import "SUForecastModel.h"
#import "SUPlaybackInfoModel.h"
#import "SUColumnModel.h"

@interface SUSClient (LiveQuery)


/**
 检查当前是否可以发起直播接口

 @param anchorId 主播ID
 */
- (NSNumber *)checkLiveAvaliable:(NSNumber *)anchorId completion:(void(^)(SUResponse *response, NSError *error))completion;

#pragma mark - 直播相关
/**
 回放明细
 
 @param liveId 视频Id
 @param uId 当前用户Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getPlayBackVideoDetailwithLiveId:(NSNumber *)liveId uId:(NSNumber *)uId completion:(void(^)(SUPlaybackInfoResponse *response, NSError *error))completion;

/**
 回放点赞
 
 @param liveId 视频Id
 @param uId 当前用户Id
 @param count 点赞数量
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postRecordFavCountwithLiveId:(NSNumber *)liveId uId:(NSNumber *)uId count:(NSInteger )count completion:(void(^)(SUFavResponse *response, NSError *error))completion;

/**
 直播点赞
 
 @param liveId 直播Id
 @param uId 当前用户Id
 @param count 点赞数量
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postLiveFavCountwithLiveId:(NSNumber *)liveId uId:(NSNumber *)uId count:(NSInteger )count completion:(void(^)(SUFavResponse *response, NSError *error))completion;

/**
 分享
 
 @param liveId 视频Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postShareLiveId:(NSNumber *)liveId completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 直播结束
 
 @param liveId 视频Id
 @param uId 当前用户Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postLiveExitwithLiveId:(NSNumber *)liveId uId:(NSNumber *)uId completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 获取连麦推流地址接口

 @param liveId 直播ID
 @param uId 连麦用户ID
 */
- (NSNumber *)getLinkPushInfoWithLiveId:(NSNumber *)liveId uId:(NSNumber *)uId completion:(void(^)(SULivePushResponse *response, NSError *error))completion;

/**
 网宿直播地址鉴权

 @param liveUrl 直播推流地址
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)authWithPushUrl:(NSString *)liveUrl completion:(void(^)(SUPushAuthResponse *response, NSError *error))completion;

/**
 直播间在线列表

 @param liveId 直播间Id
 @param page 当前页数
 @param pageSize 请求数量
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getAudienceListWithLiveId:(NSNumber *)liveId page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUAudienceListResponse *response, NSError *error))completion;

/**
 直播间详情
 
 @param anchorId 主播Id
 @param uId 当前用户Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getLiveDetailwithAnchorId:(NSNumber *)anchorId uId:(NSNumber *)uId completion:(void(^)(SURoomInfoResponse *response, NSError *error))completion;


/**
 直播开始通知

 @param liveId 直播间Id
 @param uId 当前用户Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postLiveStartNotifywithLiveId:(NSNumber *)liveId uId:(NSNumber *)uId completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 主播房间预设信息
 
 @param uId 主播Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getAnchorRoomBriefWithUId:(NSNumber *)uId completion:(void(^)(SURoomBriefResponse *response, NSError *error))completion;

/**
 创建直播间

 @param uId 当前用户Id
 @param liveTitle 直播间标题
 @param liveScreen 直播间屏幕方向 0=横屏 1=竖屏
 @param liveImage 直播间封面照
 @param liveAllowTalk 是否允许聊天 1=正常 0=不允许
 @param liveAllowLink 是否允许连麦 1=正常 0=不允许
 @param liveAddress 发直播地址
 @param liveLon 经度
 @param liveLat 维度
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postCreateLiveRoomwithUId:(NSNumber *)uId liveTitle:(NSString *)liveTitle liveScreen:(NSInteger)liveScreen liveImage:(NSString *)liveImage liveAllowTalk:(NSInteger)liveAllowTalk liveAllowLink:(NSInteger)liveAllowLink liveAddress:(NSString *)liveAddress liveLon:(NSString *)liveLon liveLat:(NSString *)liveLat completion:(void(^)(SULivePushResponse *response, NSError *error))completion;

#pragma mark - 主播相关

/**
 我的视频明细

 @param uId 当前用户Id
 @param page 页数
 @param pageSize 加载数据个数
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getMyAllVideoDetailWithUId:(NSNumber *)uId page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUVideoListResponse *response, NSError *error))completion;

/**
 我的场控列表

 @param uId 当前用户Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getMyControlListWithUId:(NSNumber *)uId completion:(void(^)(SUManagerListResponse *response, NSError *error))completion;

/**
 我的场控添加

 @param uId 场控Id
 @param anchorId 主播Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postAddMyControlWithUId:(NSNumber *)uId anchorId:(NSNumber *)anchorId completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 我的场控移除

 @param uId 场控Id
 @param anchorId 主播Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postRemoveMyControlWithUId:(NSNumber *)uId anchorId:(NSNumber *)anchorId completion:(void(^)(SUResponse *response, NSError *error))completion;



#pragma mark - 直播列表相关

/**
 热门列表

 @param page 页数
 @param pageSize 请求数量
 @param completion 完后回调
 @return 任务Id
 */
- (NSNumber *)getLiveHotListWithPage:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUVideoListResponse *response, NSError *error))completion;

/**
 获取预告列表

 @param page 页数
 @param pageSize 请求数量
 @param completion 完后回调
 @return 任务Id
 */
- (NSNumber *)getForecastListWithPage:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUForecastListResponse *response, NSError *error))completion;

/**
 最新列表
 
 @param page 页数
 @param pageSize 请求数量
 @param completion 完后回调
 @return 任务Id
 */
- (NSNumber *)getLiveRecentListWithPage:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUVideoListResponse *response, NSError *error))completion;


/**
 关注 列表
 
 @param uId 目标用户id
 @param page 页数
 @param pageSize 请求数量
 @param completion 完后回调
 @return 任务Id
 */

- (NSNumber *)getFocusListDataWithUId:(NSNumber *)uId page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void (^)(SUVideoListResponse *response, NSError *error))completion;
/**
 精彩推荐 列表
 
 @param uId 目标用户id
 @param page 页数
 @param pageSize 请求数量
 @param completion 完后回调
 @return 任务Id
 */

- (NSNumber *)getHotRecommendedListDataWithUId:(NSNumber *)uId page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void (^)(SUVideoListResponse *response, NSError *error))completion;

/**
 根据主播id获取其当前直播信息。

 @param aId 主播ID
 @param completion 完后回调
 @return 任务Id
 */

- (NSNumber *)getVideoInfoWithAnchorId:(NSNumber *)aId uId:(NSNumber *)uId completion:(void(^)(SUVideoInfoResponse *response, NSError *error))completion;

/**
 直播间禁聊开关
 
 @param liveId 直播间Id
 @param uId 当前用户Id
 @param status 聊天状态 0->允许聊天 1->禁言聊天
 @param completion 完后回调
 @return 任务Id
 */
- (NSNumber *)postLiveRoomStatusWithLiveId:(NSNumber *)liveId uId:(NSNumber *)uId status:(NSInteger)status completion:(void(^)(SUResponse *response, NSError *error))completion;


/**
 删除视频

 @param liveIdStr 视频id字符串（,拼接）
 @param uId 当前用户
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postDeleteVideoWithLiveIdStr:(NSString *)liveIdStr uId:(NSNumber *)uId completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 搜索视频

 @param uId 当前用户Id
 @param keyword 关键词
 @param status 状态 0=回看 1= 直播 默认是所有
 @param page 页数
 @param pageSize 请求数量
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getSearchLiveWithUId:(NSNumber *)uId keyword:(NSString *)keyword status:(NSInteger)status page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUVideoListResponse *response, NSError *error))completion;

/**
 搜索用户
 
 @param uId 当前用户Id
 @param keyword 关键词
 @param status 在线或不在线用户 0=不在线 1= 在线（暂时没用到）
 @param page 页数
 @param pageSize 请求数量
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getSearchUserWithUId:(NSNumber *)uId keyword:(NSString *)keyword status:(NSInteger)status page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUSearchUserListResponse *response, NSError *error))completion;

- (NSNumber *)getSearchUserWithKeyword:(NSString *)keyword completion:(void(^)(SUSearchUserListResponse *response, NSError *error))completion;

/**
 获取全部视频
 */
- (NSNumber *)getAllVideoWithPage:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SUVideoListResponse *response, NSError *error))completion;


/**
 栏目列表

 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getColumnListWithCompletion:(void(^)(SUColumnListResponse *response, NSError *error))completion;

/**
 列表
 
 @param uId 目标用户id
 @param categoryid 栏目id
 @param page 页数
 @param pageSize 请求数量
 @param completion 完后回调
 @return 任务Id
 */

- (NSNumber *)getColumnListDataWithUId:(NSNumber *)uId categoryid:(NSNumber *)categoryid page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void (^)(SUVideoListResponse *response, NSError *error))completion;

@end
