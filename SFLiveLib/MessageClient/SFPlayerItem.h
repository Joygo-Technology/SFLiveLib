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
@property(nonatomic,strong) NSString *nickname;//用户id
//@property(nonatomic,assign) BOOL isChange;
//@property(nonatomic,assign) NSInteger location;
@property(nonatomic,strong) NSString *url;
@property(nonatomic,strong) NSString *photo;
@property(nonatomic,assign) BOOL isAnchor;

- (id)initWithJSONDict:(NSDictionary *)JSONDict;


@end
