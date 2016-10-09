//
//  SFLibVideoMessage.h
//  StarFactory
//
//  Created by Lee, Bo on 15/12/13.
//  Copyright © 2015年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@class SFLibVideoMessage;

typedef NS_ENUM(NSUInteger, MessageType)
{
    MessageType_Welcome = 10,
    MessageType_Exit = 11,
    MessageType_Focus = 16,
    MessageType_PrivateChat = 13,
    MessageType_Gift = 17,
    MessageType_Chat = 200,
    MessageType_Notice = 214,
    MessageType_System = 215,
};

typedef NS_ENUM(NSUInteger, PublicChatType)
{
    Type_Default = 0,
    Type_System = 9,
};

@interface SFLibVideoMessage : NSObject

@property (nonatomic, assign) MessageType type;
@property (nonatomic, strong) NSString *nick;
@property (nonatomic, strong) NSString *referNick;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, assign) NSInteger userId;
@property (nonatomic, assign) CGFloat msgHeigh;
//礼物
@property (nonatomic,assign) NSInteger giftCnt;//礼物数量
@property (nonatomic,strong) NSString *giftName;//礼物名称
@property (nonatomic,strong) NSString *giftImage;//礼物图片地址
@property (nonatomic,strong) NSString *giftPrefix; //购买了/赠送了

+ (SFLibVideoMessage *)messageWithType:(MessageType)type nick:(NSString *)nick content:(NSString *)content;

@end
