//
//  SFLibContactItem.h
//  StarFactory
//
//  Created by Lee, Bo on 16/6/2.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUUserProfileModel.h"

@interface SFLibContactItem : NSObject

@property (nonatomic, strong) NSNumber *cId;
@property (nonatomic, strong) NSString *latestMsg;
@property (nonatomic, assign) SURelationShip relationship;
@property (nonatomic, strong) NSString *photo;
@property (nonatomic, strong) NSString *nickName;
@property (nonatomic, assign) NSInteger newMsgCount;
@property (nonatomic, assign) NSTimeInterval utc;
@property (nonatomic, assign) SUBlackRelation relation;

+ (SFLibContactItem*)makeItemWith:(SUUserProfileModel*)userInfo;

@end

