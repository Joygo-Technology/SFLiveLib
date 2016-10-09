//
//  SFMicStatusResponse.h
//  StarFactory
//
//  Created by Phil Xhc on 7/6/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@interface SFMicStatusModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger status;
@property (nonatomic, assign) NSInteger timestamp;

@end

@interface SFMicStatusResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFMicStatusModel *result;

@end
