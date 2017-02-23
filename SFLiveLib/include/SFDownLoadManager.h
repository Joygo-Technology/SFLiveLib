//
//  SFDownLoadManager.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/7.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUKaraokeModel.h"
#import "SUKaraokeResModel.h"
#import "KalaOkManager.h"

@interface SFDownLoadManager : NSObject

+ (instancetype)defaultSFDownLoadManager;

//下载文件
- (void)downloadWithModel:(SUKaraokeResModel *)downloadModel musicModel:(SUKaraokeModel *)musicModel progress:(void (^)(float progressPlan))progress complete:(void (^)(SUKaraokeModel *model,NSError *error))complete;
//暂停下载
//- (void)stopDownload:(NSNumber *)s_id;

//重新恢复下载
//- (void)resumeDownloa:(NSString *)key;

//停止所有的下载
- (void)stopAllDownloadTask;

//删除所有的下载临时文件
//- (void)deleteAllDownloadTmpFile;

//取消所有的下载请求
- (void)cancelAllDownloadTask;

@end
