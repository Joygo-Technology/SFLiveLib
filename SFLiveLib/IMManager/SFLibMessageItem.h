//
//  SFLibMessageItem.h
//  StarFactory
//
//  Created by Lee, Bo on 16/6/2.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFLibContactItem.h"

typedef NS_ENUM(NSUInteger, TimeMark)
{
    TMUnJustified = 0,
    TMShow = 1,
    TMHidden = 2,
};

@interface SFLibMessageItem : NSObject

@property (nonatomic, strong) NSString* sessionId;
@property (nonatomic, strong) NSNumber* userId;
@property (nonatomic, strong) NSNumber* receiverId;
@property (nonatomic, assign) NSTimeInterval time;
@property (nonatomic, strong) NSString* photo;
@property (nonatomic, strong) NSString* nick;
@property (nonatomic, strong) NSString* message;
@property (nonatomic, assign) SFLibRelationShip related;
@property (nonatomic, assign) TimeMark timeMark;
@property (nonatomic, assign) BOOL isMine;

- (id)initWithJSONDict:(NSDictionary *)JSONDict;

@end
