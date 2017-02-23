//
//  SUPlaybackInfoModel.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/22.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import "SUResponse.h"

@interface SUPlaybackInfoModel : NSObject

@property (nonatomic, strong) NSNumber *live_id;
@property (nonatomic, assign) BOOL live_is_focus;
@property (nonatomic, strong) NSNumber *up_gift_count;
@property (nonatomic, assign) NSInteger live_watch_count;
@property (nonatomic, assign) NSInteger live_assist_count;

@end

@interface SUPlaybackInfoResponse : SUResponse

@property (nonatomic, strong) SUPlaybackInfoModel *result;

@end
