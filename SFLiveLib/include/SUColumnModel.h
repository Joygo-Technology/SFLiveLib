//
//  SUColumnModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2017/2/23.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import "SUResponse.h"

typedef NS_ENUM(NSInteger, ColumnType) {
    ColumnType_Hot = 1,
    ColumnType_Focus = 2,
};

@interface SUColumnModel : NSObject

@property (nonatomic, assign) ColumnType aid;// -1热门 -2 关注 热门 对应 现在hot 关注 对应 foucs

@property (nonatomic, copy) NSString *aname;

@property (nonatomic, assign) NSInteger isads;

@end

@interface SUColumnListResponse : SUResponse

@property (nonatomic, strong) NSArray *items;

@end
