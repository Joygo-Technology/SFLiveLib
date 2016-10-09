//
//  SFLibManager.h
//  StarFactory
//
//  Created by Sunniwell on 9/27/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFLibManager : NSObject

+ (void)initializeWithServerAddrs:(NSArray *)addrs;

+ (int)liveManagerDeinit;

@end
