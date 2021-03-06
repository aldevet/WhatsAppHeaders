//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSNumber, NSSet, NSString, WAChatProperties, WAGroupInfo, WAMessage;

@interface WAChatSession : NSManagedObject
{
    CDUnknownBlockType _mutingCompletionHandler;
    _Bool _eligibleForDeletionIfEmpty;
    _Bool _hasMessages;
    _Bool _active;
    _Bool _supressCreationOfNextGroupPictureChangeEvent;
}

+ (void)requestAndMergeAllListsFromServerWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)insertListIfNeeded:(id)arg1 inContext:(id)arg2;
+ (unsigned long long)maximumListNameLength;
+ (void)promptUserForToUnmuteFromView:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)promptUserForMuteEndDateFromView:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)anyChatSessionWithOrphanedMessagesInContext:(id)arg1;
+ (id)allDeletedChatSessionIDsInContext:(id)arg1 objectIDsOnly:(_Bool)arg2;
+ (short)sessionTypeFromJID:(id)arg1;
+ (void)resetGroupCreatorOrOwnerKnownCache;
+ (id)groupCreatorOrOwnerKnownCache;
@property(nonatomic) _Bool supressCreationOfNextGroupPictureChangeEvent; // @synthesize supressCreationOfNextGroupPictureChangeEvent=_supressCreationOfNextGroupPictureChangeEvent;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool hasMessages; // @synthesize hasMessages=_hasMessages;
@property(nonatomic) _Bool eligibleForDeletionIfEmpty; // @synthesize eligibleForDeletionIfEmpty=_eligibleForDeletionIfEmpty;
- (void).cxx_destruct;
- (void)showEmptyChatHistoryAlertView;
- (void)generateNewWebModifyTag;
- (id)webModifyTag;
- (id)firstNamesOfActiveGroupMembers;
- (id)groupMemberWithJID:(id)arg1;
- (id)sortedGroupMembersIncludingNonActive:(_Bool)arg1;
- (id)activeGroupMembers;
- (unsigned long long)numberOfActiveGroupMembers;
@property(readonly, nonatomic, getter=isBroadcastListJIDValid) _Bool broadcastListJIDValid;
@property(readonly, nonatomic, getter=isBroadcastList) _Bool broadcastList;
- (void)updateMuteEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isMuted;
- (id)mailComposeViewControllerForChatHistoryWithMedia:(_Bool)arg1;
- (void)promptUserToAttachMediaToChatHistoryFromView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSession;
- (id)sessionWithAllMessagesDeleted;
- (void)scheduleDeleteProfilePictures;
- (void)bulkDeleteNotSharedMedia;
- (_Bool)chatFolderMayIncludeSharedMedia;
@property(retain, nonatomic) NSString *contactJID; // @dynamic contactJID;
@property(readonly, nonatomic, getter=isGroupChat) _Bool groupChat;
- (void)prepareGroupInfo;
- (_Bool)currentUserCanEditGroup;
- (_Bool)currentUserIsAdmin;
- (_Bool)isReadonlyGroup;
- (_Bool)isChatReadable;
- (_Bool)isGroupCreatorOrOwnerKnown;
@property(readonly, copy, nonatomic) NSString *nameForWebClient;
@property(readonly, nonatomic, getter=isIndividualChat) _Bool individualChat;
@property(readonly, nonatomic, getter=isContactBlocked) _Bool contactBlocked;
- (void)updateSortIndexOfMessage:(id)arg1;
- (id)clearConversationConfirmationText;
- (id)deleteConfirmationText;
- (unsigned long long)countOfPendingMessages;
- (_Bool)containsDownloadedMedia;
- (_Bool)containsMessages;
- (_Bool)containsUserMessages;

// Remaining properties
@property(retain, nonatomic) NSNumber *archived; // @dynamic archived;
@property(retain, nonatomic) NSNumber *contactABID; // @dynamic contactABID;
@property(retain, nonatomic) NSString *eTag; // @dynamic eTag;
@property(retain, nonatomic) NSNumber *flags; // @dynamic flags;
@property(retain, nonatomic) WAGroupInfo *groupInfo; // @dynamic groupInfo;
@property(retain, nonatomic) NSSet *groupMembers; // @dynamic groupMembers;
@property(retain, nonatomic) NSNumber *hidden; // @dynamic hidden;
@property(retain, nonatomic) WAMessage *lastMessage; // @dynamic lastMessage;
@property(retain, nonatomic) NSDate *lastMessageDate; // @dynamic lastMessageDate;
@property(retain, nonatomic) NSString *lastMessageText; // @dynamic lastMessageText;
@property(retain, nonatomic) NSDate *locationSharingEndDate; // @dynamic locationSharingEndDate;
@property(retain, nonatomic) NSNumber *messageCounter; // @dynamic messageCounter;
@property(retain, nonatomic) NSSet *messages; // @dynamic messages;
@property(retain, nonatomic) NSString *partnerName; // @dynamic partnerName;
@property(retain, nonatomic) WAChatProperties *properties; // @dynamic properties;
@property(retain, nonatomic) NSNumber *removed; // @dynamic removed;
@property(retain, nonatomic) NSString *savedInput; // @dynamic savedInput;
@property(retain, nonatomic) NSNumber *sessionType; // @dynamic sessionType;
@property(retain, nonatomic) NSNumber *unreadCount; // @dynamic unreadCount;

@end

