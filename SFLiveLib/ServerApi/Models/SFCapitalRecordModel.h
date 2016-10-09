//
//  SFCapitalRecordModel.h
//  
//
//  Created by Phil Xhc on 4/7/16.
//
//

#import <Mantle/Mantle.h>

@interface SFCapitalRecordModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *capitalId;
@property (nonatomic, copy) NSNumber *buyCount;
@property (nonatomic, copy) NSString *money;
@property (nonatomic, copy) NSNumber *date;

@end

@interface SFCapitalRecordResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;

@end
