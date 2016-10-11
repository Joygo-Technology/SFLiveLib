//
//  SFLiveQuery.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/8.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFAnchorModel.h"
#import "SFCategoryItem.h"
#import "SFForecastModel.h"
#import "SFGiftModel.h"
#import "SFBaseResponse.h"
#import "SFPlayBackModel.h"
#import "SFBaseResponse.h"
#import "SFLiveViewerModel.h"
#import "SFMicStatusModel.h"
#import "SFPrepareLiveModel.h"
#import "SFUserInfoModel.h"
#import "SFManagerModel.h"
#import "SFFavCountResponse.h"

#define UploadProtocol                  @"rtmp"

@interface SFLiveQuery : NSObject

/**
 *  获取主播列表接口
 *
 *  @param uId        用户ID 用于关注列表
 *  @param type       列表类型. 最新 推荐 关注
 *  @param page       分页
 *  @param pageSize   分页大小
 *
 */
+ (NSURLSessionDataTask *)getAnchorListWithUId:(NSNumber *)uId
                                           cId:(NSString *)cId
                                          type:(CategoryType)type
                                          page:(NSInteger)page
                                      pageSize:(NSInteger)pageSize
                                    completion:(void(^)(SFAnchorListResponse *response))completion;

/**
 *  获取主播回放混合列表
 *
 *  @param uId        用户ID 用于关注列表
 *  @param type       列表类型. 最新 推荐 关注
 *  @param page       分页
 *  @param pageSize   分页大小
 *
 */
+ (NSURLSessionDataTask *)getShowListWithUId:(NSNumber *)uId
                                         cId:(NSString *)cId
                                        type:(CategoryType)type
                                        page:(NSInteger)page
                                    pageSize:(NSInteger)pageSize
                                  completion:(void(^)(SFAnchorListResponse *response))completion;

/**
 *  获取回放视频列表接口
 *
 *  @param uId        用户ID
 *  @param page       分页
 *  @param pageSize   分页大小
 *
 */
+ (NSURLSessionDataTask *)getPlayBackListWithUId:(NSNumber *)uId
                                            page:(NSInteger)page
                                        pageSize:(NSInteger)pageSize
                                      completion:(void(^)(SFPlayBackListResponse *response))completion;

/**
 *  获取推荐回放视频列表接口
 *
 *  @param page       分页
 *  @param pageSize   分页大小
 *
 */
+ (NSURLSessionDataTask *)getRecommandPlayBackListWithPage:(NSInteger)page
                                                  pageSize:(NSInteger)pageSize
                                                completion:(void(^)(SFPlayBackListResponse *response))completion;

/**
 *  获取主播详情
 *
 *  @param aId        主播ID
 *
 */
+ (NSURLSessionDataTask *)getAnchorInfoWithAId:(NSString *)aId
                                    completion:(void(^)(SFAnchorInfoResponse *response))completion;

/**
 *  获取主播热度排行
 */
+ (NSURLSessionDataTask *)getAnchorRank:(void(^)(SFAnchorListResponse *response))completion;

/**
 *  @brief  获取主播的主播热度排名
 */
+ (NSURLSessionDataTask *)getAnchorRankWithAnchorId:(NSNumber *)aId completion:(void(^)(SFAnchorListResponse *response))completion;

/**
 *  获取直播热度排行
 */
+ (NSURLSessionDataTask *)getLiveRank:(void(^)(SFAnchorListResponse *response))completion;

/**
 *  @brief  获取主播的直播热度排名
 */
+ (NSURLSessionDataTask *)getLiveRankWithAnchorId:(NSNumber *)aId page:(NSInteger )page pageSize:(NSInteger )pageSize completion:(void(^)(SFAnchorListResponse *response))completion;

/**
 *  获取直播预告列表
 *
 *  @param aId        主播id 可以为空
 *  @param page       分页
 *  @param pageSize   分页大小
 *
 */
+ (NSURLSessionDataTask *)getForcasetListWithAId:(NSNumber *)aId
                                            page:(NSInteger)page
                                        pageSize:(NSInteger)pageSize
                                      completion:(void(^)(SFForecastListResponse *response))completion;

/**
 *  搜索主播接口
 *
 *  @param key        搜索关键字
 *  @param page       分页
 *  @param pageSize   分页大小
 *
 */
+ (NSURLSessionDataTask *)searchGetAnchorListWithKey:(NSString *)key
                                                page:(NSInteger)page
                                            pageSize:(NSInteger)pageSize
                                          completion:(void(^)(SFAnchorListResponse *response))completion;
/**
 *  获取礼物列表
 *
 */
+ (NSURLSessionDataTask *)getGiftList:(void(^)(SFGiftListResponse *response))completion;

/**
 *  赠送礼物接口
 *
 *  @param gId        礼物ID
 *  @param uId        赠送人ID
 *  @param aId        被赠送人ID
 *  @param count      礼物的数量
 *
 */
+ (NSURLSessionDataTask *)sendGift:(NSInteger) gId from:(NSNumber *)uId to:(NSNumber *)aId count:(NSString *)count completion:(void(^)(SFBaseResponse *response))completion;

/**
 *  修改主播信息
 *
 *  @param aId          主播id 必填
 *  @param title        直播房间名 必填
 *  @param acId         艺人资本id
 *  @param thumbnail    封面缩略图
 *  @param location     地理位置
 */
+ (NSURLSessionDataTask *)postModifyAnchorInfo:(NSNumber *)aId
                                     thumbnail:(NSString *)thumbnail
                                         title:(NSString *)title
                                      location:(NSString *)location
                                          acId:(NSNumber *)acId
                                    completion:(void(^)(SFBaseResponse *response))completion;

/**
 *  获取主播人气榜排行
 */
//+ (NSURLSessionDataTask *)getAnchorPopularityListRank:(void(^)(SFAnchorListResponse *response))completion;

/**
 *  @brief                      获取主播人气榜排行
 */

+ (NSURLSessionDataTask *)getAnchorPopularityListRankWithAnchorId:(NSNumber *)anchorId page:(NSInteger )page pageSize:(NSInteger )pageSize completion:(void(^)(SFAnchorListResponse *response))completion;

/**
 *  @brief                      是否需要录制转为录播
 */
+ (NSURLSessionDataTask *)addAnchorLiveRecord:(NSNumber *)aId completion:(void(^)(SFBaseResponse *response))completion;

/**
 *  视频播放次数
 *
 *  @param aId                  主播id
 *  @param utc                  视频的开始时间
 *  @param completion           播放次数
 */
+ (NSURLSessionDataTask *)postAnchorRecordPlayNumber:(NSNumber *)aId utc:(NSNumber *)utc completion:(void(^)(SFBaseResponse *response))completion;

/**
 *  点赞录制
 *
 *  @param aId                  主播id
 *  @param utc                  视频的开始时间
 *  @param praiseCount          数量
 *  @param completion           点赞数量
 *
 */
+ (NSURLSessionDataTask *)postAnchorRecordGoodStarNumber:(NSNumber *)aId utc:(NSNumber *)utc praiseCount:(NSInteger)praiseCount completion:(void(^)(SFFavCountResponse *response))completion;

/**
 *  通用广播消息
 *
 *  @param senderId             发消息者的ID
 *  @param roomId               主播ID
 *  @param msgcontent           消息内容
 *  @param completion           结果
 *
 */
+ (NSURLSessionDataTask *)postCommonBroadcastMsg:(NSNumber *)senderId roomId:(NSNumber *)roomId msgContent:(NSDictionary *)msgContent completion:(void(^)(SFBaseResponse *response))completion;


/**
 *
 *  @brief  获取直播间所有用户
 *
 *  @param anchorId             主播Id
 */
+ (NSURLSessionDataTask *)getViewerList:(NSNumber *)anchorId pageIndex:(NSInteger)pageIndex pageSize:(NSInteger)pageSize completion:(void(^)(SFLiveViewerListResponse *))completion;


/**
 *  @brief  获取麦序列表接口
 
 *  @param anchorId             主播Id
 */

+ (NSURLSessionDataTask *)getMicQueueList:(NSNumber *)anchorId completion:(void(^)(SFMicQueueResponse *))completion;


/**
 *
 *  @brief  抢麦接口
 *
 *  @param anchorId             主播Id
 *  @param userId               抢麦人的Id
 */

+ (NSURLSessionDataTask *)postGrasbMic:(NSNumber *)anchorId userId:(NSNumber *)userId completion:(void(^)(SFBaseResponse *))completion;


/**
 *
 *  @brief  下麦
 *
 *  @param anchorId             主播ID
 *  @param userId               下麦者ID
 */
+ (NSURLSessionDataTask *)postEndMic:(NSNumber *)anchorId userId:(NSNumber *)userId completion:(void(^)(SFBaseResponse *))completion;


/**
 *
 *  @brief  取消连麦
 *
 *  @param invitorId            邀请者ID
 *  @param beinvitorId          受邀请者ID
 */
+ (NSURLSessionDataTask *)postCancelLinkMic:(NSNumber *)invitorId beinvitorId:(NSNumber *)beinvitorId completion:(void(^)(SFMicStatusResponse *))completion;


/**
 *
 *  @brief  同意连麦
 *
 *  @param invitorId            邀请者ID
 *  @param beinvitorId          受邀请者ID
 */
+ (NSURLSessionDataTask *)postAgreenLinkMic:(NSNumber *)invitorId beinvitorId:(NSNumber *)beinvitorId completion:(void(^)(SFMicStatusResponse *))completion;

/**
 *
 *  @brief  拒绝连麦
 *
 *  @param invitorId            邀请者ID
 *  @param beinvitorId          受邀请者ID
 */
+ (NSURLSessionDataTask *)postDisagreenLinkMic:(NSNumber *)invitorId beinvitorId:(NSNumber *)beinvitorId completion:(void(^)(SFMicStatusResponse *))completion;


/**
 *
 *  @brief  准备发起直播
 *
 *  @param anchorId             主播ID
 *  @return protocol            直播上传协议
 */

+ (NSURLSessionDataTask *)postPrepareLaunchLive:(NSNumber *)anchorId protocol:(NSString *)protocol completion:(void(^)(SFPrepareLiveResponse *))completion;


/**
 *
 *  @brief  重新获取直播推流url
 *
 *  @param anchorId             主播ID
 *  @return protocol            直播上传协议
 */
+ (NSURLSessionDataTask *)getPushUrl:(NSNumber *)anchorId protocol:(NSString *)protocol completion:(void(^)(SFPrepareLiveResponse *))completion;

/**
 *
 *  @brief  开始直播
 *
 *  @param anchorId             主播ID
 *  @param screenStatus         0->横屏 1->竖屏
 *  @param talkStatus           0->允许聊天 1->禁言聊天
 *  @param protocol             直播上传协议
 */
+ (NSURLSessionDataTask *)postStartLive:(NSNumber *)anchorId screenStatus:(NSInteger)screenStatus talkStatus:(NSInteger)talkStatus protocol:(NSString *)protocol completion:(void(^)(SFPrepareLiveResponse *))completion;

/**
 *
 *  @brief  结束直播
 *
 *  @param anchorId             主播ID
 */
+ (NSURLSessionDataTask *)postEndLive:(NSNumber *)anchorId completion:(void(^)(SFBaseResponse *))completion;

/**
 *  @brief  开启抢麦
 
 *  @param  anchorId            主播ID
 */
+ (NSURLSessionDataTask *)postOpenGrasbMic:(NSNumber *)anchorId completion:(void(^)(SFBaseResponse *))completion;

/**
 *  @brief  结束抢麦
 
 *  @param  anchorId            主播ID
 */
+ (NSURLSessionDataTask *)postStopGrasbMic:(NSNumber *)anchorId completion:(void(^)(SFBaseResponse *))completion;

/**
 *  @brief  清空麦序上所有的观众
 
 *  @param  anchorId            主播ID
 */
+ (NSURLSessionDataTask *)postCleanMicUsers:(NSNumber *)anchorId completion:(void(^)(SFBaseResponse *))completion;


/**
 *
 *  @brief  邀请连麦
 *
 *  @param type                 类型  0->语音连麦  1->视频连麦
 *  @param invitor              邀请者ID
 *  @return beinvitor           被邀请者ID
 */
+ (NSURLSessionDataTask *)postInviteLinkMic:(NSNumber *)type invitorId:(NSNumber *)invitorId beinvitorId:(NSNumber *)beinvitorId completion:(void(^)(SFMicStatusResponse *))completion;

/**
 *  @brief  模糊搜索用户
 
 *  @param  key                 关键字
 */
+ (NSURLSessionDataTask *)getSearchUserByKey:(NSString *)key completion:(void(^)(SFUserInfoListResponse *))completion;


/**
 *
 *  @brief  切换聊天状态

 *  @param anchorId             主播ID
 *  @param talkStatus           0->允许聊天 1->禁言聊天
 */
+ (NSURLSessionDataTask *)postSwitchTalkStatus:(NSNumber *)anchorId talkStatus:(NSInteger)talkStatus completion:(void(^)(SFBaseResponse *))completion;

+ (NSURLSessionDataTask *)postShareAnchor:(NSNumber *)anchorId isLive:(BOOL)live completion:(void(^)(SFBaseResponse *))completion;

/**
 *  获取我的场控列表
 *
 *  @param anchorId   主播ID
 *  @param page       分页
 *  @param pageSize   分页大小
 *  @param completion 完成回调
 *
 *  @return 返回task对象
 */
+ (NSURLSessionDataTask *)getMyManagerList:(NSString *)anchorId completion:(void(^)(SFMyManagerListResponse *))completion;

/**
 *  设置场控
 *
 *  @param anchorId   主播Id
 *  @param adminId    场控Id
 *  @param completion 完成回调
 *
 *  @return 返回task对象
 */
+ (NSURLSessionDataTask *)postSetManager:(NSString *)anchorId adminId:(NSString *)adminId completion:(void(^)(SFManagerListResponse *))completion;

/**
 *  取消场控
 *
 *  @param anchorId   主播Id
 *  @param adminId    场控Id
 *  @param completion 完成回调
 *
 *  @return 返回task对象
 */
+ (NSURLSessionDataTask *)postCancelManager:(NSString *)anchorId adminId:(NSString *)adminId completion:(void(^)(SFManagerListResponse *))completion;

/**
 *  搜索相关用户，设置场控
 *
 *  @param key        搜索关键字
 *  @param anchorId   主播ID
 *  @param page       分页
 *  @param pageSize   分页大小
 *  @param completion 完成回调
 *
 *  @return 返回task对象
 */
+ (NSURLSessionDataTask *)getSearchManagerListKey:(NSString *)key anchorId:(NSString *)anchorId page:(NSInteger)page pageSize:(NSInteger)pageSize completion:(void(^)(SFManagerListResponse *))completion;

@end
