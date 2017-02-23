//
//  KalaOkManager.h
//  StarFactory
//
//  Created by 李晓宁 on 2016/12/2.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUKaraokeModel.h"
#import "SUKaraokeResModel.h"

#define FILENAME @"Music" //music的文件路径

@interface KalaOkManager : NSObject

+ (KalaOkManager *)sharedKalaOkManager;

//删除歌曲
- (BOOL)deleteSelectedMusic:(SUKaraokeModel *)model;

//插入数据
- (BOOL)insertMusic:(SUKaraokeModel *)model;

//获取所有歌曲列表
- (NSArray<SUKaraokeModel *> *)getAllMusic;

//传入Documents下的带/相对路径，返回绝对路径
+ (NSString *)getCorrectPathByRelativePath:(NSString *)relativePath;

@end
