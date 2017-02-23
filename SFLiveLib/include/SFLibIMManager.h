//
//  SFLibIMManager.h
//  StarFactory
//
//  Created by Lee, Bo on 16/6/1.
//  Copyright © 2016年 Joygo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SFLibMessageItem.h"
#import "SFLibContactItem.h"
@class SUPrivateMessage;
@class SURecieptMessage;

extern NSString* const MessageCountChangeNotification;

@protocol SFLibIMManagerStrangerDelegate <NSObject>

- (void)strangerConversationsUpdated;

@end

@protocol SFLibIMManagerContactDelegate <NSObject>

- (void)conversationListUpdated;

@end

@protocol SFLibIMManagerConversationDelegate <NSObject>

@optional

- (BOOL)onReceiveMessage:(SFLibMessageItem *)message;

@end

#define SFIMManager [SFLibIMManager manager]

@interface SFLibIMManager : NSObject

@property (nonatomic, weak) id<SFLibIMManagerConversationDelegate> imDelegate;
@property (nonatomic, weak) id<SFLibIMManagerContactDelegate> delegate;
@property (nonatomic, weak) id<SFLibIMManagerStrangerDelegate> sDelegate;

+ (SFLibIMManager *)manager;

- (void)dataBaseInit;

- (NSInteger)getUnReadMsgCount:(NSNumber *)userId;

- (NSArray *)getMyContactList:(NSNumber *)userId;

- (NSArray *)getMyStrangersList:(NSNumber *)userId;

- (void)removeContact:(NSNumber *)contactId myId:(NSNumber *)userId;

- (NSArray *)getHistoryMessageWithMyId:(NSNumber *)myId contactId:(NSNumber *)contactId earlierThan:(NSTimeInterval)time;

- (void)markMessageReadWithMyId:(NSNumber *)myId contactId:(NSNumber *)contactId;

- (void)updateRelationShip:(SURelationShip)relationShip withMyId:(NSNumber *)myId contactId:(NSNumber *)contactId;

- (BOOL)clearDatabase;

- (void)loginUserChanged;

- (NSInteger)sendMessage:(NSString *)message contact:(SFLibContactItem *)contact;

- (void)onReciveMessageReciept:(SURecieptMessage *)reciept;

- (void)onRecivePrivateMessage:(SUPrivateMessage *)message;

@end
