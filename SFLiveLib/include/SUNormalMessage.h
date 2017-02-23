//
//  SUPublicMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/29.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

typedef NS_ENUM(NSUInteger, SUMessageType)
{
    SUMessageTypePublicChat = 0,
    SUMessageTypeSystem = 1,
    SUMessageTypeNotify = 2,
    SUMessageTypeWelcome = 3,
    SUMessageTypeFareware = 4,//不需要显示
    SUMessageTypeBand = 5,
    SUMessageTypeFocus = 6,
    SUMessageTypeShare = 7,
};

@interface SUNormalMessage : NSObject

@property (nonatomic, assign) SUMessageType type;
@property (nonatomic, strong) NSNumber *up_id;
@property (nonatomic, strong) NSString *headimg;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *msg;

@end
