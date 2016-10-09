//
//  SFAnchorModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/7.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

typedef NS_ENUM(NSUInteger, AnchorStatus)
{
    ASNormal = 0,
    ASOnLive = 1,
    ASRePlay = 2,
};

typedef NS_ENUM(NSUInteger, RelationType){
    RelationType_UnDefined = 0,
    RelationType_Stranger = 1,
    RelationType_Fans = 2,
    RelationType_Focus = 3,
    RelationType_Friend = 4,
};


@interface SFAnchorModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *aId;
@property (nonatomic, copy) NSString *anchorImg;
@property (nonatomic, assign) NSInteger acId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *sign;
@property (nonatomic, copy) NSString *roomTitle;
@property (nonatomic, copy) NSString *poster;
@property (nonatomic, copy) NSString *roomThumb;
@property (nonatomic, assign) BOOL imgCached;
//@property (nonatomic, retain) UIImage *imgThumb;
@property (nonatomic, assign) NSInteger fansCount;
@property (nonatomic, assign) NSInteger onlineCount;
@property (nonatomic, assign) AnchorStatus status;
@property (nonatomic, strong) NSString *liveAddr;
@property (nonatomic, assign) BOOL isPortrait;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) NSInteger watchCount;
@property (nonatomic, assign) NSInteger playCount;
@property (nonatomic, assign) NSInteger favCount;
@property (nonatomic, copy) NSNumber *liveKey;
@property (nonatomic, assign) BOOL isFocus;
@property (nonatomic, assign) NSInteger currentFavCount;
@property (nonatomic, assign) RelationType relationType;

@end


@interface SFAnchorListModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger total;
@property (nonatomic, copy) NSArray *list;
@property (nonatomic, assign) NSInteger rank;

@end

@interface SFAnchorListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFAnchorListModel *result;

@end

@interface AnchorInfoResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFAnchorModel *result;

@end

