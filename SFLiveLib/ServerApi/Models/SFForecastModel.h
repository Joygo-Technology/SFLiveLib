//
//  SFForecastModel.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/14.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFForecastModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger anchorId;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) NSInteger acId;
@property (nonatomic, copy) NSString *image;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *anchorName;
@property (nonatomic, copy) NSString *thumbnail;
@property (nonatomic, copy) NSDate *beginTime;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) BOOL imgCached;
//@property (nonatomic, retain) UIImage *imgThumb;

@end

@interface SFForecastListModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) NSInteger total;
@property (nonatomic, copy) NSArray *list;

@end

@interface ForecastListResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) SFForecastListModel *result;

@end
