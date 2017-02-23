//
//  SUSClient+AccountQuery.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/8.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUSClient.h"
#import "SUCoinDetailModel.h"
#import "SUOrderResponse.h"
#import "SUBalanceResponse.h"
#import "SUCoinExchangeModel.h"
#import "SUBalanceResponse.h"

@interface SUSClient (AccountQuery)

/**
 钻石明细

 @param userId 用户Id
 @param page 页数
 @param pagesize 加载数量
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getCoinDetailWithUserId:(NSNumber *)userId page:(NSInteger)page pagesize:(NSInteger)pagesize completion:(void(^)(SUCoinDetailListResponse *response, NSError *error))completion;

/**
 荔枝明细
 
 @param userId 用户Id
 @param page 页数
 @param pagesize 加载数量
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getGiftDetailWithUserId:(NSNumber *)userId page:(NSInteger)page pagesize:(NSInteger)pagesize completion:(void(^)(SUCoinDetailListResponse *response, NSError *error))completion;


typedef NS_ENUM(NSUInteger, SURechargeType)
{//10=支付宝 11=微信 12=苹果
    SURechargeAliPay = 10,
    SURechargeWeXin = 11,
    SURechargeIAP = 12,
};

/**
 充值下单接口

 @param uId 用户ID
 @param pId 产品ID
 @param currency 货币种类
 @param type 充值渠道
 */
- (NSNumber *)createOrderWithUId:(NSNumber*)uId pId:(NSString *)pId currency:(NSString *)currency type:(SURechargeType)type completion:(void(^)(SUOrderResponse *response, NSError *error))completion;


/**
 验证支付接口

 @param receipt IAP收据
 @param orderNo 订单编号
 @return taskID
 */
- (NSNumber *)vertifyTransactionWithReceipt:(NSString *)receipt orderNo:(NSString *)orderNo completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 荔枝兑换钻石

 @param uId 用户Id
 @param eId 兑换Id
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)postExchangeCoinWithUId:(NSNumber*)uId eId:(NSString *)eId completion:(void(^)(SUResponse *response, NSError *error))completion;

/**
 荔枝兑换钻石选项
 */
- (NSNumber *)getExchangeCoinListCompletion:(void(^)(SUExchangeListResponse *response, NSError *error))completion;

/**
 账户余额

 @param uId 用户Id
 @param type 余额1=钻石 2=荔枝 3=人民币
 @param isTotal 累计余额 1=累计，0=当前余额 ,默认为当前余额
 @param completion 完成回调
 @return 任务Id
 */
- (NSNumber *)getAllTypeUserBalanceWithId:(NSNumber *)uId type:(BalanceType)type isTotal:(BOOL)isTotal completion:(void(^)(SUBalanceResponse *response, NSError *error))completion;

@end
