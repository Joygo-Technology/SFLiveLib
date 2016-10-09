//
//  SFCategoryItem.h
//  SWMOP
//
//  Created by Lee, Bo on 11/4/14.
//  Copyright (c) 2014 Sunniwell. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFAdModel.h"

typedef NS_ENUM(NSUInteger,CategoryType){
    CTLiveLatest = 100,
    CTLiveRecommand = 200,
    CTLiveFocus = 300,
    CTVideoLatest = 400,
    CTVideoRecommand = 500,
};


@interface SFCategoryItem : NSObject

//category
@property (nonatomic, assign) CategoryType type;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, assign) BCSADPosition position;

+ (SFCategoryItem *)itemWithType:(CategoryType)type title:(NSString *)title adPosition:(BCSADPosition )position;

@end
