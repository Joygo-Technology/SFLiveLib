//
//  SFBillModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/5.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFBillModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *amount;//消费/充值 金额
@property (nonatomic, copy) NSDate *createdTime;//发生时间
@property (nonatomic, copy) NSString *operation;//干了啥
@end

@interface SFBillListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;

@end
