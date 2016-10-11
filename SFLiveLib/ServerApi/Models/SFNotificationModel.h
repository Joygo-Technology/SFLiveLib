//
//  SFNotificationModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/6/1.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, NotificationType)
{
    NTLive = 1,
    NTCapital = 2,
    NTFilm = 3,
    NTText = 4,
};



@interface SFNotificationModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger nId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *image;
@property (nonatomic, assign) NotificationType type;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, assign) BOOL isOpen;
@property (nonatomic, strong) NSDate *time;

@end

@interface SFNotificationListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;

@end
