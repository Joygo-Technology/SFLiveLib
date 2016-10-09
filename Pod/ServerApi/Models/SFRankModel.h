//
//  RankModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/7.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>
#import "SFUserRankModel.h"
#import "SFAnchorModel.h"

typedef NS_ENUM(NSUInteger, RankType)
{
    RTContribution = 1,
    RTAnchorHot = 2,
    RTLiveHot = 3,
    RTAnchorPopularity = 4,
};

@interface SFRankModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) RankType type;
@property (nonatomic, copy) NSArray *userTop;
@property (nonatomic, copy) NSArray *anchorTop;
@property (nonatomic, copy) NSArray *liveTop;
@property (nonatomic, copy) NSArray *popularityTop;

@end

@interface SFRankListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;

@end
