//
//  SFTickShareModel.h
//  StarFactory
//
//  Created by Phil Xhc on 4/6/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFTickShareModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *shareUrl;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *imgUrl;
@property (nonatomic, copy) NSString *shareCode;


@end

@interface SFTickShareResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFTickShareModel *item;

@end
