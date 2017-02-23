//
//  SUBalanceResponse.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2017/1/14.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import "SUResponse.h"

typedef NS_ENUM(NSInteger,BalanceType){
    BalanceType_ZuanShi = 1,
    BalanceType_LiZhi = 2,
    BalanceType_RMB = 3,
};

@interface SUBalanceResponse : SUResponse

@property (nonatomic, strong) NSNumber *result;

@end
