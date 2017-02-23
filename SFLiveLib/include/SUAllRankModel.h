//
//  SUAllRankModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/19.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"
#import "SURankModel.h"

@interface SUAllRankModel : NSObject

@property (nonatomic, assign) RankType type;
@property (nonatomic, strong) NSArray *sub;

@end

@interface SUAllRankListResponse : SUResponse

@property (nonatomic, strong) NSArray *list;

@end
