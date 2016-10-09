//
//  SFAdModel.h
//  StarFactory
//
//  Created by Phil Xhc on 5/10/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

typedef NS_ENUM(NSInteger, BCSADPosition){
    BCSADPosition_LaunchAd          = 999,
    BCSADPosition_Live_Newest       = 1000,
    BCSADPosition_Live_Recommend    = 1100,
    BCSADPosition_Live_Focus        = 1200,
    BCSADPosition_Square            = 2000,
    BCSADPosition_Ranking           = 3000,
    BCSADPosition_Playback          = 4000,
    BCSADPosition_RecommandVideo    = 4100,
};

typedef NS_ENUM(NSInteger, BCSADType){
    BCSADType_Unknow = 0,
    BCSADType_Anchor = 1,
    BCSADType_Capital = 2,
    BCSADType_Website = 3,
    BCSADType_Film    = 4,
};


@interface SFAdModel :MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *aId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) BCSADType type;
@property (nonatomic, copy) NSString *imageFir;
@property (nonatomic, copy) NSString *imageSec;
@property (nonatomic, copy) NSString *remark;

@end

@interface SFAdSetResult : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) BCSADPosition adType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *items;

@end

@interface  SFAdSetResponse: MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFAdSetResult *result;

@end
