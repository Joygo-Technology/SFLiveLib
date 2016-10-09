//
//  SFLiveViewerModel.h
//  StarFactory
//
//  Created by Phil Xhc on 7/5/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>

@interface SFLiveViewerModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *uId;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, copy) NSString *userImage;
@property (nonatomic, assign) NSInteger isAdmin;
@property (nonatomic, assign) NSInteger shutupUtc;
@property (nonatomic, copy) NSString *fansLevel;
@property (nonatomic, copy) NSString *fansLevelicon;
@property(nonatomic,copy) NSString *vipRes;//贵宾特效图
@property(nonatomic,copy) NSString *car;//座驾
@property(nonatomic,copy) NSString *carUrl;//座驾地址

//直播间消息所给的用户Id
@property (nonatomic,copy)NSNumber *userId;

@end

@interface SFLiveViewerListModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger totalCount;
@property (nonatomic, assign) NSInteger pageCount;
@property (nonatomic, copy) NSArray *list;

@end

@interface SFLiveViewerListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger retcode;
@property (nonatomic, copy) NSString *retmsg;
@property (nonatomic, copy) SFLiveViewerListModel *result;

@end

@interface SFMicQueueResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger retcode;
@property (nonatomic, copy) NSString *retmsg;
@property (nonatomic, copy) NSArray *result;

@end
