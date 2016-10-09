//
//  SFGiftModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/28.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFGiftModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger gId;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *icon;
@property (nonatomic, assign) NSInteger value;
@property (nonatomic, assign) NSInteger limit;
@property (nonatomic, assign) NSInteger speed;
@property (nonatomic, strong) NSNumber  *utc;

//扩展 是否是影票
@property (nonatomic, assign) BOOL isTicket;
@end


@interface SFGiftListModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger total;
@property (nonatomic, copy) NSArray *list;

@end

@interface SFGiftListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFGiftListModel *result;

@end
