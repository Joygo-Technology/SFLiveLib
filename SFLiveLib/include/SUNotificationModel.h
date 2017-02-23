//
//  SUNotificationModel.h
//  SFLiveLib
//
//  Created by kirk on 17/1/11.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import "SUResponse.h"

typedef NS_ENUM(NSUInteger, NotificationType)
{
    NTLive = 1,
    NTCapital = 2,
    NTFilm = 3,
    NTText = 4,
};

@interface SUNotificationModel : NSObject

@property (nonatomic, strong) NSNumber *nId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *image;
@property (nonatomic, assign) NotificationType type;
@property (nonatomic, strong) NSString *value;
@property (nonatomic, assign) BOOL isOpen;
@property (nonatomic, strong) NSDate *time;

@end

@interface SUNotificationListResponse : SUResponse

@property (nonatomic, strong) NSArray *list;

@end
