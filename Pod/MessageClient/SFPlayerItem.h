//
//  SFPlayerItem.h
//  StarFactory
//
//  Created by Phil Xhc on 7/6/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SFPlayerItem : NSObject

@property(nonatomic,assign) NSInteger userId;//用户id
@property(nonatomic,strong) NSString *title;//用户id
@property(nonatomic,assign) BOOL isChange;
@property(nonatomic,assign) NSInteger location;
@property(nonatomic,strong) NSString *urlStr;
@property(nonatomic,assign) BOOL isAnchor;

- (id)initWithJSONDict:(NSDictionary *)JSONDict;


@end
