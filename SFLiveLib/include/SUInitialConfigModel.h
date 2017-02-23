//
//  SUInitialConfigModel.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/19.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUResponse.h"

@interface SUInitialConfigModel : NSObject<NSCoding, NSCopying>

@property (nonatomic, copy) NSString *aboutUs;
@property (nonatomic, copy) NSString *sharetitle;
@property (nonatomic, copy) NSString *sharecontent;
@property (nonatomic, copy) NSString *shareimage;
@property (nonatomic, copy) NSString *shareurl;
@property (nonatomic, copy) NSString *tags;
@property (nonatomic, copy) NSString *agreement;
@property (nonatomic, copy) NSString *eula;
//@property (nonatomic, copy) NSString *ticketShareUrl;
//@property (nonatomic, copy) NSString *ticketShareImage;
@property (nonatomic, copy) NSString *faqs;
@property (nonatomic, copy) NSString *movieShare;
@property (nonatomic, copy) NSString *anchorShare;
@property (nonatomic, copy) NSString *liveShare;
@property (nonatomic, copy) NSString *maxGift;
@property (nonatomic, copy) NSString *speedGift;
//邀请码分享地址
@property (nonatomic, copy) NSString *codeShareUrl;
//回访分享的url
@property (nonatomic, copy) NSString *vodShareUrl;
//申请主播协议
@property (nonatomic, copy) NSString *applyAnchorAgreement;
@property (nonatomic, copy) NSString *rechargeNotice;

@property (nonatomic, copy) NSString *forceUpgradeVer;
@property (nonatomic, copy) NSString *upgradeNotice;
@property (nonatomic, strong) NSString *comboDelay;
@property (nonatomic, strong) NSString *comboSpeedMap;
@property (nonatomic, strong) NSString *isForceBanding;
@property (nonatomic, strong) NSString *enableKalaOK;

@end

@interface SUInitialConfigResponse : SUResponse

@property (nonatomic, strong) SUInitialConfigModel *result;

@end
