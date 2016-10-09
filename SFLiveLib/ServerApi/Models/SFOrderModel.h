//
//  Order.h
//  AlixPayDemo
//
//  Created by 方彬 on 11/2/13.
//
//
#import <Mantle/Mantle.h>
#import <Foundation/Foundation.h>

extern NSString* const rsaPrivateKey;
extern NSString* const seller;

@interface SFWXOrderModel : MTLModel<MTLJSONSerializing>

//微信
@property (nonatomic, copy) NSString *noncestr;
@property (nonatomic, copy) NSString *package;
@property (nonatomic, assign) UInt32 timestamp;
@property (nonatomic, copy) NSString *partnerid;
@property (nonatomic, copy) NSString *prepayid;
@property (nonatomic, copy) NSString *sign;

@end

@interface SFOrderModel : MTLModel<MTLJSONSerializing>

//WeiXin
@property (nonatomic, copy) SFWXOrderModel *weixin;

//Alipay
//签约合作者身份ID
//@property(nonatomic, copy) NSString * partner;
//签约卖家支付宝账号
//@property(nonatomic, copy) NSString * seller;
@property(nonatomic, copy) NSString * tradeNO;
@property(nonatomic, copy) NSString * productName;
@property(nonatomic, copy) NSString * productDescription;
@property(nonatomic, copy) NSString * amount;
//服务器异步通知URL
//@property(nonatomic, copy) NSString * notifyURL;
//服务接口名称,固定值
//@property(nonatomic, copy) NSString * service;
//支付类型,固定值
//@property(nonatomic, copy) NSString * paymentType;
//参数编码,固定值
//@property(nonatomic, copy) NSString * inputCharset;
//设置未付款时间的有效值
//默认值为30m(分钟)
//取值范围 1m~15d, m-分钟, h-小时, d-天, 1c-当天(无论交易何时开始,当日0点关闭)
//参数不支持小数点, 如1.5h 应写成90m
//@property(nonatomic, copy) NSString * itBPay;
//@property(nonatomic, copy) NSString * showUrl;

//@property(nonatomic, copy) NSString * rsaDate;//可选
//@property(nonatomic, copy) NSString * appID;//可选
//
//@property(nonatomic, readonly) NSMutableDictionary * extraParams;//可选

@end

@interface SFOrderResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFOrderModel *order;

@end
