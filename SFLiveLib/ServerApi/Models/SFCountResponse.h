//
//  SFCountResponse.h
//  StarFactory
//
//  Created by Lee, Bo on 16/5/24.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFCountResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSNumber *count;

@end
