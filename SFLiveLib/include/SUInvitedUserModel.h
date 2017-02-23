//
//  SUInvitedUserModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/7.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUResponse.h"

@interface SUInvitedUserModel : NSObject

@property (nonatomic, strong) NSNumber *up_id;
@property (nonatomic, strong) NSString *nickname;
@property (nonatomic, strong) NSString *photo;
@property (nonatomic, assign) NSTimeInterval time;

@end

@interface SUInviteListModel : NSObject

@property (nonatomic, assign) NSInteger rowCount;
@property (nonatomic, assign) NSInteger pageCount;
@property (nonatomic, strong) NSArray *list;

@end

@interface SUInvitedUserResponse : SUResponse

@property (nonatomic, strong) SUInviteListModel *result;

@end
