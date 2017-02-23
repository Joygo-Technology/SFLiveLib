//
//  SUAnchorApplyModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/11/3.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUUserInfoModel.h"

typedef NS_ENUM(NSInteger, SUAnchorType)
{
    TYPE_INDIVIDUAL = 0, //个人
    TYPE_TEAM = 1, //社团
};

@interface SUAnchorApplyModel : NSObject<NSCopying>

@property (nonatomic, strong) NSNumber* up_id;
@property (nonatomic, assign) SUApplyStatus status;
@property (nonatomic, strong) NSString* reason;//审核意见
@property (nonatomic, strong) NSString* nickname;
@property (nonatomic, strong) NSString* realname;
@property (nonatomic, assign) SUGender sex;
@property (nonatomic, assign) NSInteger height;//身高
@property (nonatomic, strong) NSString* addr;
@property (nonatomic, strong) NSString* phone;
@property (nonatomic, assign) SUAnchorType type;
@property (nonatomic, strong) NSString* speciality;//特长
@property (nonatomic, strong) NSString* corporationName;//团队名
@property (nonatomic, strong) NSString* corporationType; //团队类型
@property (nonatomic, strong) NSString* homepage;//个人，团队主页
@property (nonatomic, strong) NSString* idCard;//证件号码
@property (nonatomic, strong) NSString* idImage1;//证件正面照片
@property (nonatomic, strong) NSString* idImage2;//证件背面照片
@property (nonatomic, strong) NSString* idImage3;//手持证件照
@property (nonatomic, assign) NSInteger anchorBefore; //之前是否做过主播
@property (nonatomic, strong) NSString* platform;//之前做过主播的平台
@property (nonatomic, strong) NSString* production;//作品
@property (nonatomic, strong) NSString* productionLink;//作品链接
@property (nonatomic, strong) NSString* photos;//个人生活/艺术照
@property (nonatomic, strong) NSString* department;//工作地点

- (NSDictionary *)formFields;

@end

@interface SUAnchorApplyResponse : SUResponse

@property (nonatomic, strong) SUAnchorApplyModel* result;

@end
