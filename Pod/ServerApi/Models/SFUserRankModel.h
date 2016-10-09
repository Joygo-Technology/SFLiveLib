//
//  SFUserRankModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/7.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>
#import "SFAnchorModel.h"

@interface SFUserRankModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *money;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, assign) BOOL isFocus;
@property (nonatomic, assign) RelationType relationType;
@property (nonatomic, assign) NSInteger userRank;

@end

@interface SFUserRankListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;
@property (nonatomic, strong) SFUserRankModel *data;

@end
