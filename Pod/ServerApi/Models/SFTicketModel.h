//
//  SFTicketModel.h
//  Master
//
//  Created by Phil Xhc on 4/5/16.
//  Copyright © 2016 Xhc. All rights reserved.
//

#import <Mantle/Mantle.h>

typedef NS_ENUM(NSInteger,TicketStatus){
    TicketStatus_NotUse     = 0,
    TicketStatus_Used       = 1,
    TicketStatus_Shared     = 2,
    TicketStatus_Expired    = -1,
};

@interface SFTicketModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSString *number;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *expires;
@property (nonatomic, copy) NSString *ticketId;
@property (nonatomic, copy) NSNumber *useDate;
@property (nonatomic, copy) NSString *useTarget;

@end

@interface SFTicketListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;
@property (nonatomic, copy) NSNumber *totalCount;


@end

