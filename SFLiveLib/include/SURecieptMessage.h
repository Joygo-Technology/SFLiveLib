//
//  SURecieptMessage.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/23.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SURecieptMessage : NSObject

@property (nonatomic, assign) NSInteger mId;
@property (nonatomic, assign) NSInteger kind;
@property (nonatomic, assign) NSInteger isonline;
@property (nonatomic, strong) NSString* dm;
@property (nonatomic, assign) NSTimeInterval time;

@end
