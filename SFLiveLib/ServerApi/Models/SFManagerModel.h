//
//  SFManagerListResponse.h
//  StarFactory
//
//  Created by 李晓宁 on 16/9/5.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>


@interface SFManagerModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy)   NSString *nickName;
@property (nonatomic, strong) NSNumber *adminId;
@property (nonatomic, copy)   NSString *photo;
@property (nonatomic, copy)   NSString *sign;
@property (nonatomic, strong) NSNumber *admin;
@property (nonatomic, strong) NSNumber *sex;

@end

@interface SFManagerListResult : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger totalCount;
@property (nonatomic, assign) NSInteger pageCount;
@property (nonatomic, copy)   NSArray   *list;

@end

@interface SFMyManagerListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy)   NSString *message;
@property (nonatomic, copy)   NSArray *result;

@end

@interface SFManagerListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy)   NSString *message;
@property (nonatomic, copy)   SFManagerListResult *result;

@end
