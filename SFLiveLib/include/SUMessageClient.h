//
//  SUMessageClient.h
//  SFLiveLib
//
//  Created by 李博 on 2016/12/28.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SUNormalMessage.h"
#import "SUFavMessage.h"
#import "SURoleMessage.h"
#import "SUFunctionMessage.h"
#import "SULiveInfoMessage.h"
#import "SUBandMessage.h"
#import "SUGiftMessage.h"
#import "SURedEnvMessage.h"
#import "SURedGrabResult.h"
#import "SURedNotifyMessage.h"
#import "SUSendRedResult.h"
#import "SUAudienceModel.h"
#import "SULinkMessage.h"
#import "SULinkInfoModel.h"
#import "SULinkRequestModel.h"
#import "SUUserProfileModel.h"
#import "SFLibContactItem.h"

#define SUSMsgClient [SUMessageClient sharedClient]

@protocol SUMessageClientAuthDelegate <NSObject>

@optional
- (void)needEvaluateScript:(NSString *)script;

- (void)userAuthenticationExpired;

- (void)userBeenBandWithType:(SUBanType)type minutes:(NSInteger)minutes roomId:(NSNumber *)roomId;

- (void)didReciveGlobalLinkMsg:(SULinkMessage *)message;

- (void)messagePostFailed;

@end

@protocol SUMessageClientDelegate <NSObject>

@required
//收到需要上屏的各种公共消息
- (void)onReciveRoomPublicMsg:(SUNormalMessage *)message;

@optional
//弹幕消息
- (void)onReciveBulletScreenMsg:(SUNormalMessage *)message;

//礼物消息
- (void)onReciveGiftMsg:(SUGiftMessage *)message;

//广播抢到的红包消息
- (void)onReciveRedNotifyMsg:(SURedNotifyMessage *)message;

//红包消息，来抢红包啦
- (void)onReciveRedEnvMsg:(SURedEnvMessage *)message;

//抢红包结果
- (void)onReciveGrabResult:(SURedGrabResult *)result;

//发红包的结果
- (void)onReciveSendRedResut:(SUSendRedResult *)result;

//点赞消息
- (void)onReciveFavMessage:(SUFavMessage *)message;

//场控身份变更消息
- (void)onReciveIdentityMessage:(SURoleMessage *)message;

//直播间各种功能开/关
- (void)onReciveFunctionEnableMessage:(SUFunctionMessage *)message;

//直播结束了，观众显示结束页
- (void)onReciveLiveEndMessage:(SULiveInfoMessage *)message;

//各种禁言，踢出，禁播消息
- (void)onReciveBandMessage:(SUBandMessage *)message;

//主播收入数变更u
- (void)onAnchorCoinUpdate:(NSNumber *)count;

//收到余额不足的消息
- (void)onReciveNotEnoughMoney;

//收到在线人员列表修改
- (void)onReciveAudienceListUpdate:(SUAudienceListModel *)audienceList;

//收到连麦的邀请
- (void)onReciveLinkInviteMessage:(SULinkMessage *)message;

//收到连麦结束的消息，关闭连麦小窗口
- (void)onReciveLinkFinishMessage:(SULinkInfoModel *)message;

//连麦被拒绝，收到一万点伤害
- (void)onLinkInviteResponse:(SULinkInfoModel *)message accept:(BOOL)accept;

//有新的连麦建立了
- (void)onReciveLinkInfoMessage:(SULinkInfoModel *)message;

//麦序列表有变更
- (void)onLinkRequestListChange:(SURequestListMessage *)message;

//进直播间的时候有正在连麦的观众
- (void)onNeedLoadLinkList:(SULinkListMessage *)message;

@end

@interface SUMessageClient : NSObject

@property (nonatomic, weak) id<SUMessageClientDelegate> delegate;
@property (nonatomic, weak) id<SUMessageClientAuthDelegate> authDelegate;

+ (instancetype)sharedClient;

/**
 通知服务器用户信息更改
 */
- (BOOL)notifyUserProfileChanged;

/**
 加入聊天室

 @param roomId 聊天室ID
 @param identity 当前用户身份
 */
- (void)joinChatRoomWithId:(NSNumber *)roomId identity:(SUIdentity)identity;

/**
 退出聊天室
 */
- (BOOL)leaveChatRoom;

/**
 通知直播结束了
 */
- (BOOL)notifyLiveFinished;

/**
 主播要离开了，应用进入后台
 */
- (BOOL)appWillEnterBackgroud;

/**
 应用回到前台，主播回来了
 */
- (BOOL)appWillEnterForegroud;

/**
 发送公聊消息

 @param message 消息内容
 */
- (BOOL)sendRoomPulbicMessage:(NSString *)message;

/**
 发送私聊消息
 
 @param msg 消息内容
 @param contact 发送对象信息
 @return 是否成功
 */
- (BOOL)sendPrivateMsg:(NSString *)msg contact:(SFLibContactItem *)contact;

/**
 发送弹幕消息

 @param message 消息内容
 */
- (BOOL)sendBulletScreenMsg:(NSString *)message;

/**
 用户点赞
 */
- (BOOL)sendFavMessage;

/**
 设置直播间观众场控权限

 @param uId 对象ID
 @param enable 设置/取消
 */
- (BOOL)resetManagerRoleWithUId:(NSNumber *)uId enable:(BOOL)enable;

/**
 设置直播间各项功能的开启禁用

 @param function =1连麦 =2聊天 =3弹幕 =4送礼 =5 点赞
 @param enable 开启/关闭
 */
- (BOOL)resetRoomFunction:(SURoomFunction)function enable:(BOOL)enable;

/**
 送礼物

 @param gId 礼物ID
 @param count 数量
 */
- (BOOL)sendGiftWithGId:(NSString *)gId count:(NSInteger)count;

/**
 发红包接口

 @param type 红包类型 1 拼手气，2 给主播
 @param title 红包标题
 @param num 红包份数
 @param val 红包总额
 */
- (BOOL)sendRedEnvelopeWithType:(NSInteger)type title:(NSString *)title num:(NSInteger)num val:(NSInteger)val;

/**
 抢红包接口
 
 @param rId 红包ID
 */
- (BOOL)grabRedEnvelopeWithId:(NSNumber *)rId;

/**
 邀请连麦
 
 @param uId 用户ID
 */
- (BOOL)linkInviteWithUserId:(NSNumber *)uId;

/**
 拒绝连麦
 
 @param anchorId 主播Id
 */
- (BOOL)dealLinkInveiteWithAnchorId:(NSNumber *)anchorId roomId:(NSNumber *)roomId accpet:(BOOL)accpet;

/**
 申请连麦
 
 @param uId 用户id
 */
- (BOOL)requestLinkWithUId:(NSNumber *)uId;

/**
 取消连麦申请
 
 @param uId 用户ID
 @return 调用是否成功
 */
- (BOOL)cancelLinkrequestWithUId:(NSNumber *)uId;

/**
 清空直播间麦序
 */
- (BOOL)clearLiveLinkRequest;

/**
 主播接受连麦
 
 @param uId 用户id
 */
- (BOOL)accpectLinkWithUId:(NSNumber *)uId;

/**
 建立连麦失败

 @param result 成功、失败
 */
- (BOOL)postLinkSetupFailed;

/**
 建立连麦成功

 @param lId 连麦的直播ID
 @param url 连麦播放地址
 */
- (BOOL)postLinkSuccessWithLiveId:(NSNumber *)lId url:(NSString *)url;

/**
 结束，下麦
 
 @param uId 连麦人ID
 */
- (BOOL)endLinkWithUserId:(NSNumber *)uId;

/**
 关注、取关接口

 @param uId 对象Id
 @param focus 关注/取关
 */
- (BOOL)changeFocusWithUserId:(NSNumber *)uId focus:(BOOL)focus;

/**
 对用户的禁言，踢出，封号等管理操作

 @param type 禁止类型
 @param userId 用户ID
 @param nick 用户昵称
 */
- (BOOL)banUserWithType:(SUBanType)type userId:(NSNumber *)userId nick:(NSString *)nick;

@end
