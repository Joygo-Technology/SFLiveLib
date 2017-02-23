//
//  SUBandMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/30.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, SUBanType)
{
    SUBanTypeMute = 1405,
    SUBanTypeKick = 20,
    SUBanTypeShutLive = 30,
    SUBanTypeBlock = 40,
};

@interface SUBandMessage : NSObject

@property (nonatomic, assign) SUBanType banType;
@property (nonatomic, strong) NSNumber *roomId;
@property (nonatomic, assign) NSInteger mt;
@property (nonatomic, strong) NSString *msg;

@end
