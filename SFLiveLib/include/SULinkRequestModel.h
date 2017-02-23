//
//  SULinkRequestModel.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/14.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SULinkRequestModel : NSObject

@property (nonatomic, strong) NSNumber *userId;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *headimg;
@property (nonatomic, assign) NSInteger status;

@end


@interface SURequestListMessage : NSObject

@property (nonatomic, assign) NSInteger n;
@property (nonatomic, strong) NSArray *list;

@end
