//
//  SFLiveLib.h
//  SFLiveLib
//
//  Created by 李博 on 2017/2/22.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUMessageClient.h"

@interface SFLiveLib : NSObject

+ (void)setAppId:(NSString *)appId appSecret:(NSString *)appSecret serverAddrs:(NSArray *)serverAddrs authDelegate:(id<SUMessageClientAuthDelegate>)delegate;


@end
