//
//  SFSimpleResponse.h
//  StarFactory
//
//  Created by Lee, Bo on 15/12/14.
//  Copyright © 2015年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFSimpleResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;

@end
