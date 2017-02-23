//
//  SUGiftMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/10.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SUGiftMessage : NSObject

@property (nonatomic, strong) NSNumber *userId;
@property (nonatomic, strong) NSString *headimg;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *giftCode;
@property (nonatomic, assign) NSInteger count;

@end
