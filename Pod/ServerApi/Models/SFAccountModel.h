//
//  SFAccountModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/1.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ApplyAnchorStatus){
    ApplyAnchorStatus_Applying = 1,
    ApplyAnchorStatus_Checking = 2,
    ApplyAnchorStatus_Success  = 3,
    ApplyAnchorStatus_Fail     = 4,
};

@interface SFAccountModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *balance;//余额
@property (nonatomic, copy) NSString *profit;//收益
@property (nonatomic, copy) NSString *coin; //星币
@property (nonatomic, copy) NSString *giftIncome;//礼物收入
@property (nonatomic, assign) NSInteger ticketCount;//我的影票数
@property (nonatomic, assign) NSInteger vodCount;
@property (nonatomic, assign) NSInteger myCapitalCount;//我发布的注资(明星)
@property (nonatomic, assign) NSInteger holdCapitalCount;//我持有的注资
@property (nonatomic, copy) NSString *inviteCode;//邀请码
@property (nonatomic, assign) NSInteger inviteCount;//邀请次数
@property (nonatomic, assign) BOOL isShowInviteCode;//是否隐藏邀请码,0->隐藏,1->显示
@property (nonatomic, assign) NSInteger applyStatus;//申请主播的状态

@end


@interface SFAccountResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFAccountModel *account;

@end
