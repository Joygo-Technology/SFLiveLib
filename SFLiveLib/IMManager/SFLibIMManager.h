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

@protocol SFLibIMManagerUnreadCountDelegate <NSObject>

- (void)unreadMessageCountChanged;

@end

@protocol SFLibIMManagerStrangerDelegate <NSObject>

- (void)strangerConversationsUpdated;

@end

@protocol SFLibIMManagerContactDelegate <NSObject>

- (void)conversationListUpdated;

@end

@protocol SFLibIMManagerConversationDelegate <NSObject>

@optional

- (NSNumber *)contactIdforNow;

- (void)onReceiveMessage:(SFLibMessageItem *)message;

@end

@interface SFLibIMManager : NSObject

@property (nonatomic, weak) id<SFLibIMManagerConversationDelegate> imDelegate;
@property (nonatomic, weak) id<SFLibIMManagerContactDelegate> delegate;
@property (nonatomic, weak) id<SFLibIMManagerStrangerDelegate> sDelegate;
@property (nonatomic, weak) id<SFLibIMManagerUnreadCountDelegate> cDelegate;

+ (SFLibIMManager *)manager;

- (void)dataBaseInit;

- (void)onRecieveIMMessage:(NSDictionary *)message read:(BOOL)read;

- (NSInteger)getUnReadMsgCount;

- (NSArray *)getAllConversationList;

- (NSArray *)getConversationListOfFriends:(BOOL)friends;

- (void)removeContact:(NSNumber *)contactId;

- (NSArray *)getHistoryMessageFor:(NSNumber *)targetId before:(NSTimeInterval)time;

- (void)markMessageReadFor:(NSNumber *)targetId;

- (void)updateRelationShip:(SFLibRelationShip)relationShip withTarget:(NSNumber *)targetId;

//- (void)sendPrivateMessage:(NSString *)message uId:(NSNumber *)uId receiverId:(NSNumber *)receiverId nick:(NSString *)nick photo:(NSString *)photo relation:(RelationShip)relation;

- (BOOL)clearDatabase;

- (void)loginUserChanged;

@end
