//
//  SFLibContactItem.h
//  StarFactory
//
//  Created by Lee, Bo on 16/6/2.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SFLibRelationShip)
{
    SFLibRS_UnKnow = -1,
    SFLibRS_Stranger = 0,//没关系
    SFLibRS_Fans = 1,//关注我的
    SFLibRS_Focus = 2,//我关注的
    SFLibRS_Friend = 3,//互相关注
};

@interface SFLibContactItem : NSObject

@property (nonatomic, strong) NSNumber *cId;
@property (nonatomic, strong) NSString *latestMsg;
@property (nonatomic, assign) SFLibRelationShip relationship;
@property (nonatomic, strong) NSString *photo;
@property (nonatomic, strong) NSString *nickName;
@property (nonatomic, assign) NSInteger newMsgCount;
@property (nonatomic, assign) NSTimeInterval utc;

@end
