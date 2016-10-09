//
//  SFFansModel.h
//  StarFactory
//
//  Created by Phil Xhc on 4/7/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFFansModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *fansId;
@property (nonatomic, copy) NSNumber *identity;
@property (nonatomic, copy) NSNumber *myFocus;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, copy) NSString *photoUrl;

@end

@interface SFFansModelResult : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *totalCount;
@property (nonatomic, assign) NSInteger pageCount;
@property (nonatomic, copy) NSArray *list;

@end

@interface SFFansModelResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger retcode;
@property (nonatomic, copy) NSString *retmsg;
@property (nonatomic, copy) SFFansModelResult *result;

@end
