//
//  SFCapitalQuery.h
//  StarFactory
//
//  Created by Lee, Bo on 16/3/30.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFCapitalModel.h"
#import "SFCapitalRecordModel.h"
#import "SFSimpleResponse.h"
#import "SFCountResponse.h"
#import "SFCapitalStatusModel.h"

@interface SFCapitalQuery : NSObject

/**
 *  获取艺人资本列表接口
 *
 *  @param uId        当前登录用户ID
 *  @param key        搜索关键字(搜索界面用)
 *  @param page       页数
 *  @param pageSize   每页大小
 *  @param completion 返回block
 *
 *  @return
 */
+ (NSURLSessionDataTask *)getCapitalArrayWithUId:(NSNumber *)uId
                                             key:(NSString *)key
                                            page:(NSInteger)page
                                        pageSize:(NSInteger)pageSize
                                      completion:(void(^)(SFCapitalListResponse *response))completion;

/**
 *  获取推荐艺人资本列表接口
 *
 *  @param completion 返回block
 *
 *  @return
 */
+ (NSURLSessionDataTask *)getRecommendCapitalArray:(void(^)(SFCapitalListResponse *response))completion;

/**
 *  获取直播间艺人当前注资详情
 *
 *  @param uId        当前用户ID
 *  @param aId        艺人ID
 *
 */
+ (NSURLSessionDataTask *)getCapitalInfoWithUId:(NSNumber *)uId
                                            aId:(NSNumber *)aId
                                     completion:(void(^)(SFCapitalDetailResponse *response))completion;

/**
 *  获取我的艺人资本(明星)
 *
 *  @param uId        明星Id
 *  @param page       分页
 *  @param pageSize   分页大小
 *  @param completion 数据返回
 *
 *  @return
 */
+ (NSURLSessionDataTask *)getMyCapitalsWithUId:(NSNumber *)uId
                                          page:(NSInteger)page
                                      pageSize:(NSInteger)pageSize
                                    completion:(void(^)(SFCapitalListResponse *response))completion;

/**
 *  获取我持有的艺人资本
 *
 *  @param uId        用户ID
 *  @param page       分页
 *  @param pageSize   分页大小
 *  @param completion
 *
 *  @return 
 */
+ (NSURLSessionDataTask *)getHoldCapitalsWithUId:(NSNumber *)uId
                                            page:(NSInteger)page
                                        pageSize:(NSInteger)pageSize
                                      completion:(void(^)(SFCapitalListResponse *response))completion;


/**
 *  @author phil
 *
 *  @brief 用户资本交易记录接口
 *
 *  @param uId          用户ID
 *  @param capitalId    资本ID
 *  @param page         分页
 *  @param pageSize     分页大小
 *  @return
 */
+ (NSURLSessionDataTask *)getDealRecordWithUId:(NSNumber *)uId
                                     capitalId:(NSNumber *)capitalId
                                          page:(NSInteger )page
                                      pageSize:(NSInteger )pageSize
                                    completion:(void(^)(SFCapitalRecordResponse *response))completion;

/**
 *  买入注资
 *
 *  @param cId        注资ID
 *  @param uId        用户ID
 *  @param nick       用户昵称
 *  @param amount     买入数量
 *
 */
+ (NSURLSessionDataTask *)buyCapitalWithCId:(NSNumber *)cId
                                        uId:(NSNumber *)uId
                                       nick:(NSString *)nick
                                     amount:(NSString *)amount
                                 completion:(void(^)(SFSimpleResponse *response))completion;


/**
 *
 *  @brief  申请艺人资本
 *
 *  @param uId        申请人
 */
+ (NSURLSessionDataTask *)applyForCapitaoWithUId:(NSNumber *)uId status:(BOOL)status
                                      completion:(void(^)(SFCapitalStatusResponse *response))completion;


/**
 *  @brief  查询申请艺人资本接口
 */
+ (NSURLSessionDataTask *)fetchapplyForCapitaoStatusWithUId:(NSNumber *)uId completion:(void(^)(SFCapitalStatusResponse *response))completion;


@end
