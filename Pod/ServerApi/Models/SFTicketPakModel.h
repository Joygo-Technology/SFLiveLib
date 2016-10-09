//
//  SFTicketPakModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/11.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFTicketPakModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *rId;
@property (nonatomic, copy) NSString *amount;
@property (nonatomic, copy) NSString *price;

@end

@interface SFTicketInfo : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *unitPrice;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, assign) NSNumber *aId;
@property (nonatomic, assign) NSNumber *liveKey;

@end

@interface SFTicketsInfoResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;
@property (nonatomic, copy) SFTicketInfo *info;

@end
