//
//  SUAccMusicDownloadModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/2.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"

@interface SUKaraokeResModel : NSObject

@property (nonatomic, copy) NSString *s_url;//歌曲下载地址
@property (nonatomic, copy) NSString *s_lrc;//歌词下载地址
@property (nonatomic, strong) NSNumber *s_size;//歌曲大小

@end

@interface SUKaraokeResResponse : SUResponse

@property (nonatomic, strong) SUKaraokeResModel *result;

@end

