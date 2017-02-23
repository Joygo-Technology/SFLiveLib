//
//  SUProductModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/13.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUResponse.h"

@interface SUProductModel : NSObject

@property (nonatomic, strong) NSString *g_id;
@property (nonatomic, strong) NSString *g_name;
@property (nonatomic, assign) NSInteger g_money;
@property (nonatomic, assign) NSString* g_coin;
@property (nonatomic, assign) NSInteger g_give_coin;
@property (nonatomic, assign) NSInteger g_attr;

@end

@interface SUProductListResponse : SUResponse

@property (nonatomic, strong) NSArray *list;

@end
