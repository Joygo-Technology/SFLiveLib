//
//  SURankModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/8.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"

typedef NS_ENUM(NSUInteger,RankType)
{
    RankType_Assist = 1,//点赞数量榜
    RankType_Send = 2,//送礼榜
    RankType_Receive = 3,//收礼榜
    RankType_Fans = 4,//粉丝人数榜
};


@interface SURankModel : NSObject

@property (nonatomic, strong) NSNumber* up_id;
@property (nonatomic, copy) NSString* nickname;
@property (nonatomic, copy) NSString* val;
@property (nonatomic, copy) NSString* photo;
@property (nonatomic, assign) BOOL isfocus;

@end

@interface SURankListModel : NSObject

@property (nonatomic, assign) NSInteger my;
@property (nonatomic, copy) NSString *val;
@property (nonatomic, strong) NSArray *list;


@end

@interface SURankListResponse : SUResponse

@property (nonatomic, strong) SURankListModel *result;

@end
