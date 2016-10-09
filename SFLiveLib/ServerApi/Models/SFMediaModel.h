//
//  SFMediaModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/19.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFMediaModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger price;//电影价格
@property (nonatomic, assign) NSInteger playCount; //播放次数
@property (nonatomic, assign) NSInteger playDuration; //影片时长
@property (nonatomic, assign) NSInteger mvideoId;//微电影id
//@property (nonatomic, assign) NSInteger userId;//用户id
@property (nonatomic, strong) NSString *title;//微电影名称
@property (nonatomic, strong) NSString *category;//微电影分类
@property (nonatomic, strong) NSString *desc;//简介
@property (nonatomic, strong) NSString *actor;//主演
@property (nonatomic, strong) NSString *director;//导演
@property (nonatomic, strong) NSString *screenwriter;//编剧
@property (nonatomic, strong) NSString *image;//缩略图
//@property (nonatomic, retain) UIImage *imgThumb;
@property (nonatomic, strong) NSString *poster;//海报图
@property (nonatomic, strong) NSString *url;//播放url
@property (nonatomic, assign) NSTimeInterval utc;//上传时间，utc时间，单位ms

@end

@interface SFMediaListModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger total;
@property (nonatomic, copy) NSArray *list;

@end

@interface SFMediaListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFMediaListModel *result;

@end

@interface SFMediaInfoResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFMediaModel *result;

@end
