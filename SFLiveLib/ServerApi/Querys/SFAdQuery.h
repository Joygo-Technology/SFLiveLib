//
//  SFAdQuery.h
//  StarFactory
//
//  Created by Phil Xhc on 5/10/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFAdModel.h"

@interface SFAdQuery : NSObject

+ (NSURLSessionDataTask *)bcsGetAdvertismentWithLocaion:(BCSADPosition)adLocation
                                             completion:(void(^)(SFAdSetResponse *response))completion;

@end
