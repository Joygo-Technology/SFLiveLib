//
//  SFCapitalStatusModel.h
//  StarFactory
//
//  Created by Phil Xhc on 6/4/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFCapitalStatusModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger status;
@property (nonatomic, copy) NSString *message;

@end

@interface SFCapitalStatusResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, strong) SFCapitalStatusModel *data;
@property (nonatomic, copy) NSString *message;

@end
