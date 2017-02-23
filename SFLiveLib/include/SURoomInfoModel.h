//
//  SURoomInfoModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/12.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"
#import "SURoleMessage.h"

@interface SURoomInfoModel : NSObject

@property (nonatomic, strong) NSNumber *liveid;//直播间ID
@property (nonatomic, assign) BOOL isfocus;//是否关注
@property (nonatomic, assign) SUIdentity isadmin;//是否为场控 0=否 1=是
@property (nonatomic, strong) NSNumber *up_id;
@property (nonatomic, strong) NSNumber *u_id;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSString *photo;
@property (nonatomic, assign) BOOL screen;//横竖屏
@property (nonatomic, assign) NSInteger gift;//礼物数

@end

@interface SURoomInfoResponse : SUResponse

@property (nonatomic, strong) SURoomInfoModel *result;

@end
