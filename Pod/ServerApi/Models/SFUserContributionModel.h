//
//  SFUserContributionModel.h
//  StarFactory
//
//  Created by Phil Xhc on 6/7/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFUserContributionModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *uId;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, assign) NSInteger fansLevel;
@property (nonatomic, copy) NSString *levelName;
@property (nonatomic, copy) NSNumber *coin;


@end


@interface SFUserContributionResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger retCode;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *result;

@end
