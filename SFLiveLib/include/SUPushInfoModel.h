//
//  SUPushInfoModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/12.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"

typedef NS_ENUM(NSUInteger, SUCDNType)
{
    SUCDNTypeWS = 1,
    SUCDNTypeLX = 2,
    SUCDNTypeALY = 3,
};
/*客户端需要根据上述信息拼接推流地址：
 rtmp://wsp.live.chuangxing.tv/joygo/1_10_17
 
 如果cdn_from=1 默认使用网宿ngb模式，其次是直接使用cdn_push_rtmp推流
 如果cdn_from=2 使用蓝汛模
 如果cdn_from=3 使用阿里云*/
@interface SUPushInfoModel : NSObject

@property (nonatomic, strong) NSNumber *live_id;//直播Id
@property (nonatomic, strong) NSNumber *u_id;//房间id
@property (nonatomic, assign) SUCDNType cdn_from;//CDN 1=网宿 2=蓝汛 3=阿里云
@property (nonatomic, strong) NSString *cdn_push_rtmp;//推流地址
@property (nonatomic, strong) NSString *cdn_pull_rtmp;//相应的播放地址
@property (nonatomic, strong) NSNumber *gift;

@end

@interface SULivePushResponse : SUResponse

@property (nonatomic, strong) SUPushInfoModel *result;

@end
