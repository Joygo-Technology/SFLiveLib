//
//  SFFansModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/3.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"

@interface SUFansModel : NSObject

@property (nonatomic, strong) NSNumber* up_id;
@property (nonatomic, strong) NSString* nickname;
@property (nonatomic, strong) NSString* photo;
@property (nonatomic, strong) NSString* sign;//个性签名
@property (nonatomic, strong) NSString* fans_time;//关系建立的时间
//@property (nonatomic, assign) BOOL focus;//被查询人是否关注此用户
@property (nonatomic, assign) BOOL myfocus;//查询人是否关注此用户
@property (nonatomic, assign) SURelationShip relationship;
@property (nonatomic, assign) SUBlackRelation relation;

@end

@interface SUFansListModel : NSObject

@property (nonatomic, assign) NSInteger pageCount;
@property (nonatomic, strong) NSArray* list;

@end

@interface SUFansListResponse : SUResponse

@property (nonatomic, strong) SUFansListModel *result;

@end
