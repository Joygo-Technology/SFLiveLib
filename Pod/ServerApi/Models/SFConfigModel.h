//
//  SFConfigModel.h
//  StarFactory
//
//  Created by Lee, Bo on 15/12/8.
//  Copyright © 2015年 Joygo. All rights reserved.
//

#import <Mantle/Mantle.h>

#define DEFAULT_SECOND_SPEED 1000.0 //默认是毫秒
#define TICKET_SPEED 100 //影票毫秒数为0时，默认的毫秒数

@interface SFConfigModel : MTLModel<MTLJSONSerializing>

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
@property (nonatomic, copy) NSString *codeShareUrl; //邀请码分享地址
@property (nonatomic, copy) NSString *vodShareUrl;//回访分享的url
@property (nonatomic, copy) NSString *applyAnchorAgreement;                  //申请主播协议
@property (nonatomic, copy) NSString *rechargeNotice;

@property (nonatomic, copy) NSString *forceUpgradeVer;
@property (nonatomic, copy) NSString *upgradeNotice;

@end

@interface SFConfigResponse : MTLModel<MTLJSONSerializing>

@property (nonatomic, copy) NSNumber *code;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) SFConfigModel *config;

@end
