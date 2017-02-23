//
//  SUSClient.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/1.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

#define SUSSharedClient [SUSClient sharedClient]

typedef void(^SUSCallback)(id responseObject, NSError * error);

@interface SUSClient : NSObject

//@property (nonatomic, assign, readonly) BOOL isUserLogined;

+ (SUSClient *)sharedClient;

- (NSNumber *)GET:(NSString *)URLString parameters:(NSDictionary *)parameters modelClass:(Class)modelClass completion:(SUSCallback)completion;

- (NSNumber *)POST:(NSString *)URLString parameters:(NSDictionary *)parameters modelClass:(Class)modelClass completion:(SUSCallback)completion;

- (void)cancelRequestWithId:(NSNumber *)requestId;

@end
