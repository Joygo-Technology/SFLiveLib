//
//  Product.h
//  StarFactory
//
//  Created by Lee, Bo on 16/1/11.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

@interface SFProductModel : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSString *pId;
@property (nonatomic, copy) NSString *coin;
@property (nonatomic, copy) NSString *giving;
@property (nonatomic, copy) NSString *value;

@end

@interface SFProductResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *list;

@end
