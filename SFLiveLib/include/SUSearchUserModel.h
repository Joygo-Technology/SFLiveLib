//
//  SUSearchUserModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/28.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"

@interface SUSearchUserModel : NSObject

@property (nonatomic, strong) NSNumber *up_id;//用户ID
@property (nonatomic, copy) NSString *nickname;//昵称
@property (nonatomic, copy) NSString *photo;//主播头像
@property (nonatomic, assign) NSInteger focusnum;//关注数
@property (nonatomic, assign) NSInteger fansnum;//粉丝数
@property (nonatomic, assign) BOOL isfocus;//是否关注了 1=关注了
@property (nonatomic, assign) BOOL ismyck;//是否为我的场控 1=是
@property (nonatomic, assign) BOOL isanchor;//1=是 0=否
@property (nonatomic, copy) NSString *sign;//个性签名(暂缺)
@property (nonatomic, assign) NSInteger online;//在线状态(暂缺)

@end

@interface SUSearchUserListModel : NSObject

@property (nonatomic, assign) NSInteger total;
@property (nonatomic, strong) NSArray *list;


@end

@interface SUSearchUserListResponse : SUResponse

@property (nonatomic, strong) SUSearchUserListModel *result;

@end
