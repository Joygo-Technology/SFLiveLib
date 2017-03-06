//
//  SURelationResponse.h
//  SFLiveLib
//
//  Created by 李博 on 2017/1/22.
//  Copyright © 2017年 Joygo. All rights reserved.
//

#import "SUResponse.h"

@interface SURelationResponse : SUResponse

@property (nonatomic, assign) SURelationShip relation;
@property (nonatomic, assign) SUBlackRelation black;

@end
