//
//  SUBlackListResponse.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2017/3/3.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import "SUResponse.h"

@interface SUBlackListModel : NSObject

@property (nonatomic, strong) NSNumber *up_id;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *headimg;
@property (nonatomic, copy) NSString *sign;
@property (nonatomic, strong) NSNumber *bb_time;

@end

@interface SUBlackListResponse : SUResponse

@property (nonatomic, strong) NSArray *list;
@property (nonatomic, assign) NSInteger pageCount;

@end
