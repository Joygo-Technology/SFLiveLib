//
//  SUVideoModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/12.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"
#import "SURoomBriefModel.h"

typedef NS_ENUM(NSInteger,LiveType)
{
    LiveType_PlayBack = 0,//停止了
    LiveType_Live = 1,//直播中
    LiveType_Normal = 2,//创建直播
};

@interface SUVideoModel : NSObject

@property (nonatomic, strong) NSNumber *liveid;//视频Id
@property (nonatomic, copy) NSString *image;//封面照
@property (nonatomic, copy) NSString *title;//直播标题
@property (nonatomic, copy) NSString *url;//播放地址
@property (nonatomic, strong) NSNumber *ptime;//视频时长
@property (nonatomic, assign) NSInteger assist;//点赞人数
@property (nonatomic, assign) NSInteger watch;//观看人数
@property (nonatomic, assign) LiveType status;//视频状态
@property (nonatomic, assign) BOOL screen;//视频方向
@property (nonatomic, assign) NSInteger online;//在线数
@property (nonatomic, copy) NSString *address;
@property (nonatomic, strong) NSNumber *u_id;
@property (nonatomic, strong) NSNumber *up_id; //主播ID
@property (nonatomic, copy) NSString *nickname;//昵称
@property (nonatomic, copy) NSString *photo;//头像
@property (nonatomic, strong) NSNumber *catid;
@property (nonatomic, copy) NSString *catname;

@property (nonatomic, copy)   NSString *transfromTime; //转换后的时间(扩展属性)

@end

@interface SUVideoListModel : NSObject

@property (nonatomic, assign) NSInteger pagecount;
@property (nonatomic, assign) NSInteger totalcount;
@property (nonatomic, strong) NSArray *list;

@end

@interface SUVideoListResponse : SUResponse

@property (nonatomic, strong) SUVideoListModel *result;

@end

@interface SUVideoInfoResponse : SUResponse

@property (nonatomic, strong) SUVideoModel *result;

@end
