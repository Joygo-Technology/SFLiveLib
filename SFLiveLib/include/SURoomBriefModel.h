//
//  SURoomBriefModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/14.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUResponse.h"

@interface SURoomBriefModel : NSObject

@property (nonatomic, strong) NSString *a_roomname;
@property (nonatomic, strong) NSString *a_image;
@property (nonatomic, assign) NSInteger a_assist_count;
@property (nonatomic, strong) NSNumber *a_live_id;//直播id
@property (nonatomic, assign) BOOL live_screen;//直播状态
@property (nonatomic, copy) NSString *live_url;//直播地址

@end

@interface SURoomBriefResponse : SUResponse

@property (nonatomic, strong) SURoomBriefModel *result;

@end
