//
//  SFInComeModel.h
//  StarFactory
//
//  Created by Phil Xhc on 4/29/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFInComeModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *totalValue;

@end


@interface SFInComeResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger retcode;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) SFInComeModel *result;

@end
