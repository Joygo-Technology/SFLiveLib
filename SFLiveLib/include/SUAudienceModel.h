//
//  SUAudienceModel.h
//  SFLiveLib
//
//  Created by 李晓宁 on 2016/12/12.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import "SUResponse.h"

@interface SUAudienceModel : NSObject

@property (nonatomic, strong) NSNumber *up_id;
@property (nonatomic, copy) NSString *photo;

@end

@interface SUAudienceListModel : NSObject

@property (nonatomic, assign) NSInteger vs;
@property (nonatomic, assign) NSInteger ga;
@property (nonatomic, assign) NSNumber *gs;
@property (nonatomic, strong) NSArray *list;

@end

@interface SUAudienceListResponse : SUResponse

@property (nonatomic, strong) SUAudienceListModel *result;

@end
