//
//  SFAnchorApplyModel.h
//  StarFactory
//
//  Created by Phil Xhc on 5/30/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mantle/Mantle.h>
#import <UIKit/UIKit.h>

@interface SFAnchorApplyModel : MTLModel<MTLJSONSerializing>

/**
 *  @brief  Must
 */
@property (nonatomic, assign) NSInteger status;
@property (nonatomic, copy) NSNumber *uId;
@property (nonatomic, copy) NSString *nickName;
@property (nonatomic, assign) NSInteger height;
@property (nonatomic, copy) NSString *realName;
@property (nonatomic, assign) NSInteger gender;
@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *phone;
@property (nonatomic, assign) NSInteger type;
@property (nonatomic, copy) NSString *idCard;
@property (nonatomic, assign) NSInteger isAnchored;
@property (nonatomic, copy) NSString *photos;
@property (nonatomic, copy) NSString *proImgURL;
@property (nonatomic, copy) NSString *conImgURL;
@property (nonatomic, copy) NSString *proWithFaceImgURL;
@property (nonatomic, copy) NSString *workLoc;

@property (nonatomic, retain) UIImage *proImg;
@property (nonatomic, retain) UIImage *conImg;
@property (nonatomic, retain) UIImage *proWithFaceImg;
@property (nonatomic, retain) NSArray *photoImgs;

/**
 *  @brief  Optiol
 */
@property (nonatomic, copy) NSString *speciality;
@property (nonatomic, copy) NSString *teamName;
@property (nonatomic, copy) NSString *teamType;
@property (nonatomic, copy) NSString *teamPageURL;
@property (nonatomic, copy) NSString *homePageURL;
@property (nonatomic, copy) NSString *platformName;
@property (nonatomic, copy) NSString *works;
@property (nonatomic, copy) NSString *worksURL;

@property (nonatomic, copy) NSString *rejectReason;

@property (nonatomic, assign) BOOL isSelectLocation;

@property (nonatomic, assign) BOOL hasApplyed;

- (NSDictionary *)formFields;

@end

@interface SFApplyAnchorResponse :MTLModel<MTLJSONSerializing>

@property (nonatomic, assign) NSInteger retcode;
@property (nonatomic, strong) NSString *retmsg;
@property (nonatomic, strong) SFAnchorApplyModel *info;

@end
