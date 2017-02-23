//
//  SUCoinExchangeModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/27.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"

@interface SUCoinExchangeModel : NSObject

@property (nonatomic, copy) NSString *eid;
@property (nonatomic, copy) NSString *coin;
@property (nonatomic, copy) NSString *gift;

@end

@interface SUExchangeListResponse : SUResponse

@property (nonatomic, strong) NSArray *list;

@end

