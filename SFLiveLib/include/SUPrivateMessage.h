//
//  SUPrivateMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/23.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SUPrivateMessage : NSObject

@property (nonatomic, strong) NSNumber *up_id;
@property (nonatomic, strong) NSString *headimg;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *msg;
@property (nonatomic, assign) NSTimeInterval time;
@property (nonatomic, assign) NSInteger focusfans;

@end
