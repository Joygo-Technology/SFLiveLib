//
//  SFTicketQuery.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/11.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFTicketModel.h"
#import "SFTickShareModel.h"
#import "SFTicketPakModel.h"
#import "SFSimpleResponse.h"
#import "SFCountResponse.h"

@interface SFTicketQuery : NSObject

/**
 *  @brief  获取用户影票
 */
+ (NSURLSessionDataTask *)getUserTicketWithUId:(NSNumber *)uId
                                        status:(NSNumber *)status
                                          page:(NSInteger)page
                                      pageSize:(NSInteger)pageSize
                                    completion:(void(^)(SFTicketListResponse *response))completion;

+ (NSURLSessionDataTask *)shareTicketWithUId:(NSNumber *)uId
                                       count:(NSNumber *)count
                                    nickName:(NSString *)nickName
                                  completion:(void(^)(SFTickShareResponse *response))completion;

//////////////////////////

+ (NSURLSessionDataTask *)getTicketsWithAId:(NSInteger)aId
                                 completion:(void(^)(SFTicketsInfoResponse *response))completion;

+ (NSURLSessionDataTask *)buyTicketsWithUId:(NSNumber *)uId
                                       nick:(NSString *)nick
                                        aid:(NSNumber *)aId
                                    liveKey:(NSNumber *)liveKey
                                     amount:(NSString *)amount
                                 completion:(void(^)(SFSimpleResponse *response))completion;

+ (NSURLSessionDataTask *)watchMovieWithMId:(NSNumber *)mId
                                      MName:(NSString *)mName
                                        UId:(NSNumber *)uId
                                 completion:(void(^)(SFSimpleResponse *response))completion;

+ (NSURLSessionDataTask *)getTicketCountWithAId:(NSNumber *)aId
                                        liveKey:(NSNumber *)liveKey
                                     completion:(void(^)(SFCountResponse *response))completion;

+ (NSURLSessionDataTask *)getCoinTotalWithAId:(NSNumber *)aId
                                        liveKey:(NSNumber *)liveKey
                                     completion:(void(^)(SFCountResponse *response))completion;


+ (NSURLSessionDataTask *)cancelShareTicketWithUId:(NSNumber *)uId
                                         shareCode:(NSString *)shareCode
                                        completion:(void(^)(SFSimpleResponse *response))completion;

@end
