//
//  SFProfitModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/6.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFProfitModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *title; //资本名称
@property (nonatomic, copy) NSString *amount;//分红金额
@property (nonatomic, copy) NSString *percent;//占总股比例
@property (nonatomic, copy) NSDate *releaseTime;//发放时间
@property (nonatomic, copy) NSNumber *holdCount;//持有份数

@end

@interface SFProfitListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;

@end
