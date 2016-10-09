//
//  SFCommonQuery.h
//  StarFactory
//
//  Created by Lee, Bo on 16/1/28.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SFCategoryItem.h"
#import "SFConfigModel.h"
#import "SFRankModel.h"
#import "SFSimpleResponse.h"
#import "SFSheildResponse.h"
#import "SFOrderModel.h"
#import "SFPlayBackModel.h"

@interface SFCommonQuery : NSObject

+ (NSURLSessionDataTask *)getInitConfig:(void(^)(SFConfigResponse *response))completion;

+ (NSURLSessionDataTask *)getSheildValueWithProject:(NSString *)project ver:(NSString *)ver completion:(void(^)(SFSheildResponse *response))completion;

+ (NSURLSessionDataTask *)getHomeVodArray:(void(^)(PlayBackListResponse *response))completion;

+ (NSURLSessionDataTask *)getTopRankList:(void(^)(SFRankListResponse *response))completion;

+ (NSURLSessionDataTask *)getContributionRankList:(void(^)(SFUserRankListResponse *response))completion;

+ (NSURLSessionDataTask *)postFeebackWithUId:(NSNumber *)uId message:(NSString *)message completion:(void (^)(SFSimpleResponse *response))completion;

/**
 *  修改主播信息
 *
 *  @param uId          用户id 必填
 *  @param nickName     昵称必填
 */
+ (NSURLSessionDataTask *)postLiveNotification:(NSNumber *)uId
                                      nickName:(NSString *)nickName
                                    completion:(void(^)(SFSimpleResponse *response))completion;


+ (NSURLSessionDataTask *)vertifyTransactionByServer:(NSString *)message orderId:(NSString *)orderId completion:(void (^)(SFSimpleResponse *response))completion;

+ (NSURLSessionDataTask *)getUserContributionRank:(NSNumber *)uId completion:(void (^)(SFUserRankListResponse *response))completion;

+ (NSURLSessionDataTask *)getUserCoinContributionRank:(NSInteger )pageSize completion:(void (^)(SFUserRankListResponse *response))completion;

+ (NSURLSessionDataTask *)createStarOriderWithPrice:(NSNumber *)price currency:(NSString *)currency paymentType:(NSInteger)pType completion:(void(^)(SFOrderResponse *response))completion;

//+ (NSURLSessionDataTask *)getAnchorCoinContributionRank:(NSInteger )pageSize uId:(NSNumber *)uId completion:(void (^)(SFUserRankListResponse *response))completion;

@end
