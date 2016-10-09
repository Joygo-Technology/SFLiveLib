//
//  SFBaseResponse.h
//  StarFactory
//
//  Created by Lee, Bo on 16/4/5.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFBaseResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;

@end
