//
//  SFCapitalModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/3/30.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

typedef NS_ENUM(NSUInteger, CapitalStatus){
    CS_PreHeating = 0,
    CS_During = 1,
    CS_Finished = 2,
    CS_Success = 3,
    CS_Failed = 4,
};

typedef NS_ENUM(NSUInteger, PreCapitalStatus){
    PreCapitalStatus_PreHeating = 0,
    PreCapitalStatus_During     = 1,
    PreCapitalStatus_Finish_User_Hold = 2,
    PreCapitalStatus_Finish_User_Not_Hold = 3,
};

@interface SFCapitalModel : MTLModel<MTLJSONSerializing>

//0=预热中，1=进行中 2=结束 3=成功 4=失败
@property (nonatomic, assign) CapitalStatus status;
@property (nonatomic, copy) NSNumber *cId;//注资编号
@property (nonatomic, copy) NSString *aId;//艺人id
@property (nonatomic, copy) NSString *title;//资本名称
@property (nonatomic, copy) NSString *desc;//资本描述
@property (nonatomic, copy) NSString *thumbURL;//缩略图
//@property (nonatomic, retain) UIImage *imgThumb;
@property (nonatomic, copy) NSNumber *onSellAmount;//发行数量
@property (nonatomic, copy) NSNumber *soldAmount;//已售份数
@property (nonatomic, copy) NSString *unitPrice;//单价
@property (nonatomic, copy) NSNumber *attendLimit;//已支持人数
@property (nonatomic, copy) NSNumber *supportCount;//支持人数
@property (nonatomic, copy) NSDate *beginTime;//开始时间
@property (nonatomic, copy) NSDate *endTime;//结束时间
@property (nonatomic,assign) BOOL hasVideo;//是否有视频 0=无 1=有
@property (nonatomic,assign) BOOL attended;//是否有关注过0=无 1=有
@property (nonatomic, copy) NSNumber *attencount;//关注数
@property (nonatomic, copy) NSString *progress;//完成率
@property (nonatomic, copy) NSString *detailURL;//详情页地址
@property (nonatomic, copy) NSString *myRate;//占股比例
@property (nonatomic, copy) NSString *profitPeriod;//收益周期
@property (nonatomic, copy) NSNumber *buyTotalCount;//买入总数量
@property (nonatomic, copy) NSString *totalCost;//买入本金
@property (nonatomic, copy) NSNumber *myAmount;//我持有的份数
@property (nonatomic, strong) NSArray *options;
@property (nonatomic, assign) PreCapitalStatus preStatus; //预告时注资的状态
@property (nonatomic, copy) NSString *myRatePersonCenter; //个人中心我的注资的 占股比例
@property (nonatomic, assign) BOOL selected;


@end

@interface SFCapitalData : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *totalNum;
@property (nonatomic, copy) NSString *totalMoney;

@end

@interface SFCapitalListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;
@property (nonatomic, copy) SFCapitalData *data;

@end

@interface SFCapitalDetailResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFCapitalModel *capital;

@end
