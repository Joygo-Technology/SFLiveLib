//
//  SFSheildResponse.h
//  StarFactory
//
//  Created by Lee, Bo on 16/2/2.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFSheildResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, assign) BOOL sheild;

@end
