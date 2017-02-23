//
//  SUAdModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/13.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUResponse.h"

typedef NS_ENUM(NSUInteger, SUAdType)
{
    SUAdTypeWeb = 0,
    SUAdTypeLive = 1,
};

typedef NS_ENUM(NSUInteger, SUAdPosition)
{
    SUAdLaunch          = 999,
    SUAdLiveNewest      = 1000,
    SUAdLiveRecommend   = 1100,
    SUAdLiveFocus       = 1200,
    SUAdLivePopular     = 1300,
    SUAdSquare          = 2000,
    SUAdRanking         = 3000,
    SUAdPlayback        = 4000,
    SUAdRecommandVideo  = 4100,
};


@interface SUAdModel : NSObject

@property (nonatomic, strong) NSNumber* ad_id;
@property (nonatomic, strong) NSString* ad_title;
@property (nonatomic, assign) SUAdType ref_at_type;
@property (nonatomic, strong) NSString* ad_image;
@property (nonatomic, strong) NSString* ad_mark;

@end

@interface SUAdListResponse : SUResponse

@property (nonatomic, strong) NSArray *items;

@end
