//
//  SULinkMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/12.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SULinkMessage : NSObject

@property (nonatomic, strong) NSNumber *roomId;
@property (nonatomic, strong) NSNumber *userId;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *msg;

@end
