//
//  SUManagerModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/12.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"
#import "SUSearchUserModel.h"

@interface SUManagerModel : NSObject

@property (nonatomic, strong) NSNumber *up_id; //用户ID
@property (nonatomic, copy) NSString *nickname;//昵称
@property (nonatomic, copy) NSString *photo;//头像
@property (nonatomic, copy) NSString *sign;//个性签名
@property (nonatomic, assign) BOOL isControl;//是否是场控

+ (instancetype)transformManagerModel:(SUSearchUserModel *)model;

@end

@interface SUManagerListModel : NSObject

@property (nonatomic, assign) NSInteger pagecount;
@property (nonatomic, assign) NSInteger totalcount;
@property (nonatomic, strong) NSArray *list;

@end

@interface SUManagerListResponse : SUResponse

@property (nonatomic, strong) SUManagerListModel *result;


@end
