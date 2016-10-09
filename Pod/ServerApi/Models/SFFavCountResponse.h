//
//  SFFavCountResponse.h
//  StarFactory
//
//  Created by Admin on 16/6/23.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFFavCountResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, assign) NSInteger count;

@end
