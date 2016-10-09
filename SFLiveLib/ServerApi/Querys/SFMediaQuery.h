//
//  SFMediaQuery.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/19.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFMediaModel.h"

@interface SFMediaQuery : NSObject

/**
 *  获取私人影院列表
 *
 *  @param page       分页
 *  @param pageSize   分页大小
 *
 */
+ (NSURLSessionDataTask *)getMediaListWithPage:(NSInteger)page
                                        pageSize:(NSInteger)pageSize
                                      completion:(void(^)(SFMediaListResponse *response))completion;

/**
 *  获取影片详情
 *
 *  @param mId        影片ID
 
 */
+ (NSURLSessionDataTask *)getMediaDetailWithId:(NSInteger)mId
                                    completion:(void(^)(SFMediaInfoResponse *response))completion;


+ (NSURLSessionDataTask *)doStatisticMediaWithMVideoId:(NSInteger)mId
                                                userId:(NSNumber *)uId
                                            completion:(void(^)(BOOL result))completion;

@end
