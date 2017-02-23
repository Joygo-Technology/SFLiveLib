//
//  SUForecastModel.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/16.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUResponse.h"

@interface SUForecastModel : NSObject

@property (nonatomic, copy) NSString *image;//封面照
@property (nonatomic, copy) NSString *title;//预告标题
@property (nonatomic, copy) NSString *address;
@property (nonatomic, strong) NSNumber *up_id; //主播ID
@property (nonatomic, copy) NSString *nickname;//昵称
@property (nonatomic, copy) NSString *photo;//头像
@property (nonatomic, copy)   NSString *time;
@property (nonatomic, assign) BOOL isFocus;

@end

@interface SUForecastListModel : NSObject

@property (nonatomic, assign) NSInteger pagecount;
@property (nonatomic, assign) NSInteger totalcount;
@property (nonatomic, strong) NSArray *list;

@end

@interface SUForecastListResponse : SUResponse

@property (nonatomic, strong) SUForecastListModel *result;

@end
