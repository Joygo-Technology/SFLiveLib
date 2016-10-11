//
//  SFLibAnchorRoomModel.h
//  PXNET
//
//  Created by Sunniwell on 3/16/16.
//  Copyright © 2016 zhushengxiong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFLibAnchorRoomModel : NSObject

@property (nonatomic,assign) NSInteger micStatus;// 麦序状态 0-为闭麦，1-开麦，闭麦为停止抢麦
@property (nonatomic,assign) NSInteger micShutupStatus;//麦序发言状态 0-禁止麦序上观众发言，1-允许麦序上观众发言
@property (nonatomic,assign) NSTimeInterval userShutupUtc;//禁言utc : ms
@property (nonatomic,assign) long userShutupDuration;//禁言时长 : s
@property (nonatomic,assign) NSInteger userShutupStatus;
@property (nonatomic,assign) NSInteger onlineCnt;
@property (nonatomic,assign) NSInteger fansCnt;
@property (nonatomic,assign) NSInteger status;
@property (nonatomic,assign) NSInteger myFocus;

-(instancetype)initWithJSONDict:(NSDictionary *)JSONDict;

@end

@interface SFLibAnchorRoomResponse : NSObject

@property (nonatomic, assign) NSInteger retcode;
@property (nonatomic, copy) NSString *retmsg;
@property (nonatomic, copy) SFLibAnchorRoomModel *roomModel;

-(instancetype)initWithJSONDict:(NSDictionary *)JSONDict;

@end
