//
//  SFPrepareLiveModel.h
//  StarFactory
//
//  Created by Phil Xhc on 7/7/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@interface SFPrepareLiveModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *cdsId;
@property (nonatomic, copy) NSString *cdsIP;
@property (nonatomic, assign) NSInteger cdsPort;
@property (nonatomic, copy) NSString *pushUrl;
@property (nonatomic, assign) NSInteger timeStamp;

@end

@interface PrepareLiveResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFPrepareLiveModel *result;

@end
