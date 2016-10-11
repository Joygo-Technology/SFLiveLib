//
//  SFPlayBackModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/6/6.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFPlayBackModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *aId;
@property (nonatomic, copy) NSString *anchorImg;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *roomTitle;
@property (nonatomic, copy) NSString *poster;
@property (nonatomic, copy) NSString *roomThumb;
@property (nonatomic, copy) NSString *url;
//@property (nonatomic, assign) BOOL imgCached;
//@property (nonatomic, retain) UIImage *imgThumb;
@property (nonatomic, assign) NSInteger fansCount;
@property (nonatomic, assign) NSInteger onlineCount;
@property (nonatomic, assign) NSInteger watchCount;
@property (nonatomic, assign) NSInteger playCount;
@property (nonatomic, assign) NSInteger favCount;
@property (nonatomic, copy) NSNumber *liveKey;
@property (nonatomic, copy) NSString *liveAddr;
@property (nonatomic, assign) BOOL isPortrait;
@property (nonatomic,assign)      NSInteger shareCount;                  //分享次数
@property (nonatomic, copy)   NSString *time;                  //转换后的时间(扩展属性)

@end

@interface SFPlayBackListModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger total;
@property (nonatomic, copy) NSArray *list;

@end

@interface SFPlayBackListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFPlayBackListModel *result;

@end
