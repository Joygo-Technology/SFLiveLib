//
//  SFInviteCodeModel.h
//  StarFactory
//
//  Created by Phil Xhc on 6/17/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFInviteCodeModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *userId;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *signature;
@property (nonatomic, copy) NSString *photoUrl;
@property (nonatomic, copy) NSNumber *register_utc;

@end

@interface SFInviteCodeList : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger totalCount;
@property (nonatomic, assign) NSInteger pageCount;
@property (nonatomic, copy) NSArray *list;

@end

@interface SFInviteCodeResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) SFInviteCodeList *result;

@end
