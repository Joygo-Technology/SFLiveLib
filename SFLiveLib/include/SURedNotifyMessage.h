//
//  SURedNotifyMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/11.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SURedNotifyMessage : NSObject

@property (nonatomic, strong) NSNumber* rpid;
@property (nonatomic, strong) NSNumber* sid;
@property (nonatomic, strong) NSString* snn;
@property (nonatomic, strong) NSNumber* gid;
@property (nonatomic, strong) NSString* gnn;
@property (nonatomic, assign) NSInteger num;
@property (nonatomic, strong) NSString* unit;

@end
