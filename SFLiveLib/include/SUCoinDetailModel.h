//
//  SUCoinDetailModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/19.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"

@interface SUCoinDetailModel : NSObject

@property (nonatomic, copy) NSString *c_title; //标题
@property (nonatomic, assign) NSInteger c_amount; //数量
@property (nonatomic, copy) NSString *c_desc; //详细信息
@property (nonatomic, strong) NSNumber *c_createtime; //创建时间

@end

@interface SUCoinDetailListModel : NSObject

@property (nonatomic, assign) NSInteger pagecount;
@property (nonatomic, assign) NSInteger totalcount;
@property (nonatomic, strong) NSArray *list;

@end

@interface SUCoinDetailListResponse : SUResponse

@property (nonatomic, strong) SUCoinDetailListModel *result;


@end
