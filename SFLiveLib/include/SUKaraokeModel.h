//
//  SUKaraokeModel.h
//  SFLiveLib
//
//  Created by Sunniwell on 11/4/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import "SUResponse.h"

typedef NS_ENUM(NSInteger,DownLoadStaus)
{
    Download_NO = 0,
    Download_Ing = 1,
    Download_Finish = 2
    
};

@interface SUKaraokeModel : NSObject

@property (nonatomic, strong) NSNumber *s_id;//歌曲编号，不重复
@property (nonatomic, copy) NSString *s_name;//歌名
@property (nonatomic, copy) NSString *s_singer;//歌手名
@property (nonatomic, strong) NSNumber *s_duration;//时长，精确到秒
@property (nonatomic, strong) NSNumber *s_size;//歌曲大小

@property (nonatomic, assign) DownLoadStaus status;//下载状态

@property (nonatomic, copy) NSString *musicPath; //歌曲缓存地址
@property (nonatomic, copy) NSString *lrcPath; //歌词缓存地址

@end


@interface SUKaraokeListModel : NSObject

@property (nonatomic, strong) NSArray *list;

@end

@interface SUKaraokeListResponse : SUResponse

@property (nonatomic, strong) SUKaraokeListModel *result;

@end

