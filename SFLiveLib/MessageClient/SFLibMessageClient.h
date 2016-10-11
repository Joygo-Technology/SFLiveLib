//
//  SFLibMessageClient.h
//  StarFactory
//
//  Created by Sunniwell on 5/3/16.
//  Copyright © 2016 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFLibChatItem.h"
#import "SFLibVideoMessage.h"
#import "SFUserInfoModel.h"
#import "SFLibAnchorRoomModel.h"
#import "SFBaseResponse.h"

typedef NS_ENUM(NSUInteger, MsgCode)
{
    MsgCodeWelcome  = 700, //房间有人加入
    MsgCodePublic   = 100, //公共聊天消息
    MsgCodePrivate  = 101, //私聊消息
    MsgCodeBullet   = 102, //弹幕消息
    MsgCodeTalk     = 103, //禁止还是允许聊天
    MsgCodeGift     = 200, //礼物消息
    MsgCodeFav      = 301, //点赞数更新
    MsgCodeFocus    = 305, //关注主播消息
    MsgCodeClean    = 307, //需要清除此人的消息
    MsgCodeMyManager= 308, //设置/取消场控
    MsgCodeCustomize    = 810, //自定义消息（资本，影票）
    MsgCodeLianMai  = 400, //全局连麦消息
    MsgCodeAcceptLianMai  = 401, //全局连麦消息
    MsgCodeDenyLianMai  = 402, //全局连麦消息
    MsgCodeLianMaiFail  = 403, //连麦失败
    MsgCodeLianMaiChange  = 404, //连麦人员变更
    MsgCodeShutDown = 405,
    MsgCodeEndLive  = 406, //直播结束
    MsgCodeMute     = 500, //禁言消息
    MsgCodeMicStatus  = 600, //是否允许抢麦
    MsgCodeMicSequence  = 601, //麦序变化
    MsgCodeMicChange  = 602, //开放/停止抢麦消息
    MsgCodeOffline  = 800, //被挤下线
    MsgCodeBlock    = 801, //封号
    MsgCodeKick     = 805, //踢出房间
};

typedef NS_ENUM(NSUInteger, CustomMsgType)
{
    CustomMsgTypeCapital    = 210,
    CustomMsgTypeTicket     = 220,
    CustomMsgTypeAnchorLost = 301,
    CustomMsgTypeAnchorBack = 302,
};

typedef void (^msgCompletion)(NSDictionary *receiveDict);

typedef enum {
    GeneralMsg_PAUSE= 301,
    GeneralMsg_RESUME,
} GeneralMsg;

typedef enum {
    READMSGTYPE_Header,
    READMSGTYPE_Body,
} READMSGTYPE;

@protocol SFLibMessageClientAuthDelegate <NSObject>

//操作消息
@required
- (void)serverDidBlockCurrentUser;
- (void)serverDidKickOffCurrentUser;
- (void)lianMaiInvited:(SFLibInviteLmItem *)lianMaiItem;
- (void)userBeenMuteInRoom:(NSNumber *)roomId forDuration:(NSTimeInterval)duration;
- (void)userBeenKickOutRoom:(NSNumber *)roomId forDuration:(NSTimeInterval)duration;

@end


@protocol SFLibMessageClientDelegate <NSObject>

@optional
/**收到服务器消息*/
- (void)OnRecieveServerMessage:(NSDictionary *)receiveDict;

- (void)onRoomChatForbidden:(BOOL)forbidden;

- (void)onNeedCleanUserMessage:(NSNumber *)userId;

- (void)needUpdateOnlineCount:(NSInteger)onlineCount;

- (void)needUpdateInComeCount;

- (void)onFavCountUpdate:(NSNumber *)favCount;

- (void)onReciveDamuMessage:(SFLibDamuItem *)message;

- (void)onReciveGiftMessages:(NSArray *)messages;

//收到连麦消息
- (void)OnReciveLianMaiMessage:(SFLibInviteLmItem *)inviteLmItem;

//接受连麦消息
- (void)OnAcceptLianMaiMessage:(SFLibInviteLmItem *)LmItem;

//拒绝连麦消息
- (void)OnDenyLianMaiMessage:(SFLibInviteLmItem *)LmItem;

//连麦失败消息
- (void)OnLianMaiFail:(SFLibInviteLmItem *)failInfo;

//直播结束
- (void)OnReceiveExit:(NSDictionary*)contentDict;

- (void)OnRevMicStopOrOpen:(NSInteger)micStatus;

- (void)OnMicSequenceChange:(NSArray *)contentArray;

- (void)OnLianMaiPersonChanged:(NSArray *)userArray;

- (void)onReciveEndLiveMessages:(NSInteger)watchCount;

- (void)onReciveSetOrCancelManagerMessages:(BOOL)setAdmin;

//公共区域消息
- (void)onRecivePublicMessage:(SFLibVideoMessage *)message;

- (void)onRecivePublicMessages:(NSArray *)messages;

- (void)onUserMuteForDuration:(NSTimeInterval)duration;

- (void)onUserbeenKickedOut;

@end

@interface SFLibMessageClient : NSObject

+ (SFLibMessageClient *)sharedClient;

@property (nonatomic, weak) id<SFLibMessageClientDelegate> delegate;
@property (nonatomic, weak) id<SFLibMessageClientAuthDelegate> authDelegate;

/**
 *  连接状态：1已连接，-1未连接，0连接中
 */
@property (nonatomic, assign) NSInteger connectStatus;
@property (nonatomic, assign) BOOL isLogin;
@property (nonatomic, assign) BOOL isLoginOut;

- (void)startMessageClient;
//- (void)initClientWithDomin:(NSString *)domin port:(int)port;
//登陆接口
- (void)loginWithType:(NSInteger)type uId:(NSString *)uId password:(NSString *)password sex:(NSString *)sex photo:(NSString *)photo nick:(NSString *)nick completion:(void (^)(SFUserInfoResponse *response))completion;
//登接口

- (void)loginOut:(msgCompletion )completion;

- (void)sendRoomChatMessage:(NSString *)message uId:(NSNumber *)uId roomId:(NSNumber *)roomId;

- (void)sendPrivateMessage:(NSString *)message uId:(NSNumber *)uId receiverId:(NSNumber *)receiverId;

- (void)sendDanmuMessage:(NSString *)message uId:(NSNumber *)uId roomId:(NSNumber *)roomId completion:(void(^)(SFBaseResponse *response))completion;

- (void)sendPraiseCount:(NSInteger)count uId:(NSNumber *)uId receiverId:(NSNumber *)receiverId;

//进入直播间
- (void)enterLiveRoom:(NSNumber *)roomId completion:(void(^)(SFLibAnchorRoomResponse *roomResponse))completion;

//退出直播间
- (void)exitLiveRoom:(NSNumber *)roomId;
@end
