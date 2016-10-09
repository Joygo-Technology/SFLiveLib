//
//  SFAccountQuery.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/1.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFAccountModel.h"
#import "SFBillModel.h"
#import "SFProfitModel.h"
#import "SFProductModel.h"
#import "SFOrderModel.h"
#import "SFUserContributionModel.h"

@interface SFAccountQuery : NSObject

/**
 *  获取用户账户信息
 *
 *  @param uId        用户ID
 *  @param completion 返回BLOCK
 *
 */
+ (NSURLSessionDataTask *)getAccountInfoWithUId:(NSNumber *)uId
                                     completion:(void(^)(SFAccountResponse *response))completion;

/**
 *  获取账户明细
 *
 *  @param uId        用户ID
 *  @param completion 返回Block
 *
 */
+ (NSURLSessionDataTask *)getBillListWithUId:(NSNumber *)uId
                                        page:(NSInteger)page
                                    pageSize:(NSInteger)pageSize
                                  completion:(void(^)(SFBillListResponse *response))completion;

/**
 *  获取收益明细
 *
 *  @param uId        用户Uid
 *  @param page       页码
 *  @param pageSize   分页大小
 *  @param completion 数据返回block
 *
 */
+ (NSURLSessionDataTask *)getProfitListWithUId:(NSNumber *)uId
                                          page:(NSInteger)page
                                      pageSize:(NSInteger)pageSize
                                    completion:(void(^)(SFProfitListResponse *response))completion;

/**
 * type=xxx,<must><string>//产品类型 0=普通 1=苹果 2=PC 3=公众号 //充值渠道
 *  获取充值选项列表
 *
 */
+ (NSURLSessionDataTask *)getProductArrayWithType:(NSString*)type completion:(void(^)(SFProductResponse *response))completion;

/**
 *  充值订单生成接口
 *
 *  @param uId        用户ID
 *  @param pId        产品ID
 *  @param type       支付类型 10=支付宝 11=微信 12=苹果支付 13=支付宝即时到账（pc）15=贝壳支付
 *
 */
+ (NSURLSessionDataTask *)createOrderWithUId:(NSNumber*)uId
                                         pId:(NSString *)pId
                                    currency:(NSString *)currency
                                        type:(NSString *)type
                                  completion:(void(^)(SFOrderResponse *response))completion;

/**
 *  生成充值订单
 *
 *  @param uId        用户ID
 *  @param amount     充值金额
 *  @param pType      支付方式
 *
 */
+ (NSURLSessionDataTask *)createOrderWithUId:(NSNumber *)uId
                                      amount:(NSString *)amount
                                 paymentType:(NSInteger)pType
                                  completion:(void(^)(SFOrderResponse *response))completion;

//////////////////////////////////////////////




/**
 *  @author xhc
 *
 *  @brief  星币余额变动明细接口
 *
 *  @param uId        用户ID
 *  @param category        变动种类
 *  @param date        日期
 *  @param type    变动类型
 */
+ (NSURLSessionDataTask *)getCoinListWithUId:(NSNumber *)uId
                                        page:(NSInteger)page
                                    pageSize:(NSInteger)pageSize
                                  completion:(void(^)(SFBillListResponse *response))completion;

/**
 *  @brief  主播直播 用户星币贡献榜
 */

+ (NSURLSessionDataTask *)getAnchorLiveUserContruibution:(NSNumber *)anchorId
                                  completion:(void(^)(SFUserContributionResponse *response))completion;



@end
