//
//  SULinkInfoModel.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/12.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SULinkInfoModel : NSObject

@property (nonatomic, strong) NSNumber *roomId;
@property (nonatomic, strong) NSNumber *userId;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *url;

@end

@interface SULinkListMessage : NSObject

@property (nonatomic, assign) NSInteger n;
@property (nonatomic, strong) NSArray *list;

@end
