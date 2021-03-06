//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WAChatStorageDelegate.h"
#import "WAContactsStorageDelegate.h"
#import "WASyncManagerDelegate.h"
#import "WAWebClientDelegate.h"
#import "XMPPConnectionDelegate.h"

@class CLLocation, NSDate, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, WABlockBasedAlertView, WAChatDatabaseStatsManager, WASyncManager, WAWebClient;

@interface ChatManager : NSObject <WAWebClientDelegate, WAChatStorageDelegate, WAContactsStorageDelegate, WASyncManagerDelegate, XMPPConnectionDelegate>
{
    NSMutableDictionary *_lastNotificationTimeForChat;
    WABlockBasedAlertView *_networkUnavailableAlertView;
    NSMutableSet *_groupChatsToRefresh;
    NSMutableDictionary *_outgoingChatStates;
    NSObject<OS_dispatch_queue> *_addressBookQueue;
    _Bool _needsReloadAddressBook;
    _Bool _needsRefreshChats;
    _Bool _isContactsSyncScheduled;
    _Bool _changeNumberIQRequired;
    _Bool _changeNumberIQInProgress;
    _Bool _usingSilentPush;
    WAWebClient *_webClient;
    NSLock *_timelockParametesLock;
    NSMutableSet *_outgoingMessagesToMerge;
    _Bool _verificationInProgress;
    _Bool _popupMenuVisible;
    _Bool _timelocked;
    _Bool _addressBookReloadingInProgress;
    void *_sharedAddressBook;
    NSString *_registrationURL;
    NSString *_codeRequestURL;
    NSString *_sameDeviceCheckURL;
    NSString *_phoneNumber;
    NSString *_countryCode;
    NSString *_currentStatus;
    WAChatDatabaseStatsManager *_statsManager;
    WASyncManager *_syncManager;
    NSMutableArray *_statusList;
    NSMutableSet *_navigationBarHintHistory;
    NSMutableSet *_placeCache;
    NSDate *_gOverQueryLimitDate;
    CLLocation *_lastKnownLocation;
    NSDate *_timelockStartDate;
    NSDate *_timelockedUntil;
    NSDate *_timelockRetryDate;
    long long _timelockReasonCode;
    NSDate *_connectionDisconnectDate;
    double _addressBookReloadingStartTime;
    NSString *_statusPendingUpdate;
}

+ (id)sharedManager;
@property(readonly, copy, nonatomic) NSString *statusPendingUpdate; // @synthesize statusPendingUpdate=_statusPendingUpdate;
@property(readonly, nonatomic) double addressBookReloadingStartTime; // @synthesize addressBookReloadingStartTime=_addressBookReloadingStartTime;
@property(readonly, nonatomic) _Bool addressBookReloadingInProgress; // @synthesize addressBookReloadingInProgress=_addressBookReloadingInProgress;
@property(nonatomic) _Bool usingSilentPush; // @synthesize usingSilentPush=_usingSilentPush;
@property(readonly, nonatomic) NSDate *connectionDisconnectDate; // @synthesize connectionDisconnectDate=_connectionDisconnectDate;
@property(nonatomic) long long timelockReasonCode; // @synthesize timelockReasonCode=_timelockReasonCode;
@property(retain, nonatomic) NSDate *timelockRetryDate; // @synthesize timelockRetryDate=_timelockRetryDate;
@property(retain, nonatomic) NSDate *timelockedUntil; // @synthesize timelockedUntil=_timelockedUntil;
@property(retain, nonatomic) NSDate *timelockStartDate; // @synthesize timelockStartDate=_timelockStartDate;
@property(nonatomic, getter=isTimelocked) _Bool timelocked; // @synthesize timelocked=_timelocked;
@property(retain, nonatomic) CLLocation *lastKnownLocation; // @synthesize lastKnownLocation=_lastKnownLocation;
@property(retain, nonatomic) NSDate *gOverQueryLimitDate; // @synthesize gOverQueryLimitDate=_gOverQueryLimitDate;
@property(readonly, nonatomic) NSMutableSet *placeCache; // @synthesize placeCache=_placeCache;
@property(nonatomic) _Bool popupMenuVisible; // @synthesize popupMenuVisible=_popupMenuVisible;
@property(nonatomic) _Bool verificationInProgress; // @synthesize verificationInProgress=_verificationInProgress;
@property(readonly, nonatomic) NSMutableSet *navigationBarHintHistory; // @synthesize navigationBarHintHistory=_navigationBarHintHistory;
@property(readonly, nonatomic) NSMutableArray *statusList; // @synthesize statusList=_statusList;
@property(readonly, nonatomic) WASyncManager *syncManager; // @synthesize syncManager=_syncManager;
@property(readonly, nonatomic) WAChatDatabaseStatsManager *statsManager; // @synthesize statsManager=_statsManager;
@property(copy, nonatomic) NSString *currentStatus; // @synthesize currentStatus=_currentStatus;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void).cxx_destruct;
- (id)allWhatsAppablePhonesInWebClient:(id)arg1;
- (id)allBroadcastListsInWebClient:(id)arg1;
- (id)allGroupChatsInWebClient:(id)arg1;
- (id)allChatSessionsInWebClient:(id)arg1;
- (void)webClient:(id)arg1 didRequestResendMessage:(id)arg2;
- (void)webClient:(id)arg1 didCreateGroupWithSubject:(id)arg2 participants:(id)arg3 requestID:(id)arg4;
- (void)webClient:(id)arg1 didChangeSubjectOfGroupWithJID:(id)arg2 to:(id)arg3 requestID:(id)arg4;
- (void)webClient:(id)arg1 didLeaveGroupWithJID:(id)arg2 requestID:(id)arg3;
- (void)webClient:(id)arg1 didAddParticipants:(id)arg2 inChatWithJID:(id)arg3 requestID:(id)arg4;
- (void)webClient:(id)arg1 didRemoveParticipants:(id)arg2 inChatWithJID:(id)arg3 requestID:(id)arg4;
- (void)webClient:(id)arg1 didRequestMediaUploadForMessageWithStanzaID:(id)arg2 outgoing:(_Bool)arg3 inChatWithJID:(id)arg4 requestID:(id)arg5;
- (void)webClient:(id)arg1 didDeletePictureForChatWithJID:(id)arg2 requestID:(id)arg3;
- (void)webClient:(id)arg1 didSetPicture:(id)arg2 thumbnail:(id)arg3 forChatWithJID:(id)arg4 requestID:(id)arg5;
- (void)webClient:(id)arg1 didSetMuteDate:(id)arg2 ofChatWithJID:(id)arg3;
- (void)webClient:(id)arg1 didSetArchiveState:(_Bool)arg2 ofChatWithJID:(id)arg3;
- (void)webClient:(id)arg1 didDeleteIndividualChatWithJID:(id)arg2;
- (void)webClient:(id)arg1 didPlayIncomingMessageWithStanzaID:(id)arg2 inChatWithJID:(id)arg3;
- (void)webClient:(id)arg1 didUpdateStatus:(id)arg2;
- (void)webClient:(id)arg1 didReadUntilMessageWithStanzaID:(id)arg2 outgoing:(_Bool)arg3 inChatWithJID:(id)arg4 readCount:(long long)arg5;
- (void)webClient:(id)arg1 didRelayMessageStanza:(id)arg2;
- (id)webClient:(id)arg1 chatSessionForJID:(id)arg2;
- (id)webClient:(id)arg1 existingOutgoingMessageWithStanzaID:(id)arg2 inJID:(id)arg3;
- (void)webClient:(id)arg1 didChangeOutgoingChatStateToJID:(id)arg2;
- (void)webClient:(id)arg1 didSubscribeToJID:(id)arg2;
- (id)webClient:(id)arg1 outgoingMessagesWithOrAfterStanzaID:(id)arg2 inChatSession:(id)arg3;
- (id)recentlyRelevantMessagesInChatsForWebClient:(id)arg1;
- (id)webClient:(id)arg1 memberJIDsInBroadcastList:(id)arg2;
- (id)webClient:(id)arg1 messagesInChatSession:(id)arg2 afterStanzaID:(id)arg3 isFromMe:(_Bool)arg4 count:(unsigned long long)arg5 countExceeded:(out _Bool *)arg6;
- (id)webClient:(id)arg1 JIDToChatSessionMapWithJIDs:(id)arg2;
- (id)webClient:(id)arg1 messagesInJID:(id)arg2 beforeStanzaID:(id)arg3 isFromMe:(_Bool)arg4 count:(unsigned long long)arg5;
- (void)terminateAllWebClientSessionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginNewWebClientSessionWithQRCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)allSavedWebClientSessions;
- (_Bool)hasActiveWebClientSession;
- (_Bool)isWebClientAvailable;
- (_Bool)isWebClientSupported;
- (void)callWillEnd:(id)arg1;
- (void)callDidBecomeActive:(id)arg1;
- (void)updateStatus:(id)arg1;
- (void)reconnectAndLoadChatDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disconnectAndUnloadChatDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)addContactFromABRecord:(void *)arg1 addressBook:(void *)arg2 whatsAppID:(id)arg3;
- (id)reloadDataFromABRecord:(void *)arg1 whatsAppID:(id)arg2;
- (void)reloadUnknownChatsWithWAContact:(id)arg1;
- (void)menuControllerDidHideMenu:(id)arg1;
- (void)menuControllerDidShowMenu:(id)arg1;
- (void)sendLocalNotificationForMessage:(id)arg1 fromUser:(id)arg2 numberOfAttempts:(int)arg3;
- (void)sendLocalNotificationForMessage:(id)arg1 fromUser:(id)arg2;
- (_Bool)messageShouldBeMuted:(id)arg1;
- (void)saveNotificationTimeForMessage:(id)arg1;
- (void)changeNumberFailedWithError:(id)arg1;
- (void)changeNumberFinishedWithAccountInfo:(id)arg1;
- (void)requestChangeNumberIfNecessary;
- (void)xmppConnection:(id)arg1 didReceiveCallOfferReceipt:(id)arg2;
- (void)xmppConnectionDidChangeNetworkStateDuringCall:(id)arg1;
- (void)xmppConnection:(id)arg1 didReceiveCallAck:(id)arg2;
- (void)xmppConnection:(id)arg1 didReceiveIncomingCallStanza:(id)arg2;
- (void)xmppConnectionDidReceiveOfflineMarker:(id)arg1;
- (void)xmppConnection:(id)arg1 callStanzaDidTimeOut:(id)arg2;
- (void)xmppConnection:(id)arg1 callabilityChangedForJID:(id)arg2 callability:(int)arg3;
- (_Bool)xmppConnection:(id)arg1 didReceiveMessages:(id)arg2;
- (void)xmppConnection:(id)arg1 didReceiveOfflineReceiptWithStanzaIDs:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4;
- (void)xmppConnection:(id)arg1 didReceiveServerRejectRetryForReceipt:(id)arg2 registrationId:(int)arg3 fromJID:(id)arg4 participanr:(id)arg5;
- (void)xmppConnection:(id)arg1 didReceiveRetryReceiptForStanzaID:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4 registrationId:(int)arg5 retryCount:(int)arg6;
- (void)xmppConnection:(id)arg1 didRequestDownloadOfMediaInMessage:(id)arg2;
- (void)xmppConnection:(id)arg1 didReceiveServerErrorForOutgoingMessagesWithStanzaIDs:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4;
- (void)xmppConnection:(id)arg1 didReceiveServerErrorAckForIncomingMessageWithStanzaID:(id)arg2 fromJID:(id)arg3 participantJID:(id)arg4;
- (void)xmppConnection:(id)arg1 accountChangedWithAccountInfo:(id)arg2 receitInfo:(id)arg3 offlineStorage:(_Bool)arg4;
- (void)xmppConnection:(id)arg1 contactsSyncRequest:(id)arg2 timestamp:(id)arg3;
- (void)xmppConnection:(id)arg1 contactUpdated:(id)arg2;
- (void)xmppConnection:(id)arg1 contactRemoved:(id)arg2;
- (void)xmppConnection:(id)arg1 contactAdded:(id)arg2;
- (void)xmppConnection:(id)arg1 statusChanged:(id)arg2;
- (void)xmppConnectionStopGroupLocationSharing:(id)arg1;
- (_Bool)xmppConnection:(id)arg1 startLocationSharingForGroup:(id)arg2 duration:(int)arg3;
- (void)xmppConnection:(id)arg1 dirtyFlagsReceived:(id)arg2 timestamp:(id)arg3;
- (void)xmppConnection:(id)arg1 profilePictureUploadRequestFor:(id)arg2 timestamp:(id)arg3;
- (void)xmppConnection:(id)arg1 profilePictureChangedFor:(id)arg2 identifier:(id)arg3 author:(id)arg4 name:(id)arg5 timestamp:(id)arg6;
- (void)xmppConnection:(id)arg1 groupSubjectChanged:(id)arg2 notification:(id)arg3;
- (void)xmppConnection:(id)arg1 groupLockStateChanged:(_Bool)arg2 notification:(id)arg3;
- (void)xmppConnection:(id)arg1 groupDeletedNotification:(id)arg2;
- (void)xmppConnection:(id)arg1 participantsDemoted:(id)arg2 notification:(id)arg3;
- (void)xmppConnection:(id)arg1 participantsPromoted:(id)arg2 notification:(id)arg3;
- (void)xmppConnection:(id)arg1 userModified:(id)arg2 toJID:(id)arg3 inGroupWithJID:(id)arg4 timestamp:(id)arg5;
- (void)xmppConnection:(id)arg1 groupCreated:(id)arg2 notification:(id)arg3;
- (void)xmppConnection:(id)arg1 participantsRemoved:(id)arg2 groupSubject:(id)arg3 notification:(id)arg4;
- (void)xmppConnection:(id)arg1 participantsAdded:(id)arg2 notification:(id)arg3;
- (void)xmppConnection:(id)arg1 statusChanged:(unsigned long long)arg2 forIncomingMessageWithStanzaID:(id)arg3 fromJID:(id)arg4 participantJID:(id)arg5;
- (void)xmppConnection:(id)arg1 statusChanged:(unsigned long long)arg2 forOutgoingMessagesWithStanzaIDs:(id)arg3 fromJID:(id)arg4 participantJID:(id)arg5 userData:(id)arg6;
- (void)xmppConnection:(id)arg1 chatStateChanged:(unsigned long long)arg2 forJID:(id)arg3 participantJID:(id)arg4;
- (void)xmppConnection:(id)arg1 presenceChanged:(unsigned long long)arg2 forJID:(id)arg3;
- (void)xmppConnection:(id)arg1 presenceChanged:(unsigned long long)arg2;
- (void)xmppConnectionDidDisconnect:(id)arg1;
- (void)xmppConnectionDidNotAuthenticate:(id)arg1 lockDuration:(double)arg2 retryAfter:(double)arg3 reasonCode:(long long)arg4;
- (void)xmppConnectionDidAuthenticate:(id)arg1;
- (void)xmppConnectionDidConnect:(id)arg1;
- (void)xmppConnection:(id)arg1 stateChanged:(unsigned long long)arg2;
- (void)xmppConnection:(id)arg1 networkStatusChanged:(unsigned long long)arg2;
- (void)xmppConnectionDidBecomeIdle:(id)arg1;
- (void)networkStatusChanged:(unsigned long long)arg1;
- (void)showNetworkUnavailableAlert;
- (void)syncManager:(id)arg1 didFinishSyncWithResult:(unsigned long long)arg2;
- (void)contactsStorage:(id)arg1 didAddOrUpdateContacts:(id)arg2 didRemoveJIDs:(id)arg3 removeMissingJIDs:(_Bool)arg4;
- (void)contactsStorageDidFailToGenerateFavorites:(id)arg1;
- (void)contactsStorageDidGenerateFavorites:(id)arg1;
- (void)contactsStorageDidUpdateFavorites:(id)arg1;
- (void)contactsStorageDidUpdateStatus:(id)arg1;
- (void)contactsStorageDidUpdateContacts:(id)arg1;
- (void)chatStorage:(id)arg1 didSetAllChatSessionsArchived:(_Bool)arg2 notifyWebClient:(_Bool)arg3;
- (void)chatStorage:(id)arg1 didUpdateArchiveStateOfChatSession:(id)arg2 notifyWebClient:(_Bool)arg3;
- (void)chatStorage:(id)arg1 didGenerateNotificationMessage:(id)arg2 fromParticipant:(id)arg3;
- (void)chatStorage:(id)arg1 didUpdateParticipantsOfChatSession:(id)arg2;
- (void)chatStorageDidDeleteAllChatSessions:(id)arg1;
- (void)chatStorageDidClearAllChatSessions:(id)arg1;
- (void)chatStorage:(id)arg1 didDeleteMessages:(id)arg2 inChatSession:(id)arg3;
- (void)chatStorage:(id)arg1 willDeleteMessages:(id)arg2 inChatSession:(id)arg3;
- (void)chatStorage:(id)arg1 didDeleteAllMessagesInChatSession:(id)arg2;
- (void)chatStorage:(id)arg1 willDeleteChatSession:(id)arg2 fromWebClient:(_Bool)arg3;
- (void)chatStorage:(id)arg1 didUpdateChatSessions:(id)arg2;
- (void)chatStorage:(id)arg1 didDeleteChatSessions:(id)arg2;
- (void)chatStorage:(id)arg1 didInsertChatSessions:(id)arg2;
- (void)chatStorage:(id)arg1 mediaDownloadDidFailForMessage:(id)arg2 withError:(id)arg3 autodownload:(_Bool)arg4;
- (void)chatStorage:(id)arg1 mediaUploadDidFailForMessage:(id)arg2;
- (void)chatStorage:(id)arg1 mediaUploadDidFinishForMessage:(id)arg2;
- (void)didUpdateMessage:(id)arg1;
- (void)chatStorage:(id)arg1 didUpdateMessage:(id)arg2 changedKeyPaths:(id)arg3;
- (void)chatStorage:(id)arg1 didUpdateStatusOfMessage:(id)arg2 from:(unsigned long long)arg3;
- (void)chatStorage:(id)arg1 didReceiveMessage:(id)arg2;
- (void)chatStorage:(id)arg1 didAddMessages:(id)arg2 notifyWebClient:(_Bool)arg3;
- (void)chatStorage:(id)arg1 didFailWithError:(id)arg2;
- (id)outgoingMessagesInSharedItemOutboxes;
- (void)resetTimelockRetryDate;
- (void)checkTimelockExpiration;
- (void)loadTimelockParameters;
- (void)saveTimelockParameters;
- (void)setTimelockedUntil:(id)arg1 retryDate:(id)arg2 withReasonCode:(long long)arg3;
- (void)resetTimelock;
- (id)localizedChatActivityStringForJID:(id)arg1;
- (id)localizedChatActivityStringForContactWithJID:(id)arg1;
- (id)localizedChatActivityStringForGroupWithJID:(id)arg1;
- (void)updateChatStateIfNeededForJID:(id)arg1;
- (void)changeOutgoingChatState:(unsigned long long)arg1 forJID:(id)arg2;
- (unsigned long long)outgoingChatStateForJID:(id)arg1;
- (void)setChatSession:(id)arg1 muteDate:(id)arg2 notifyWebClient:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changeNameOfList:(id)arg1 to:(id)arg2;
- (void)markMessagesAsReadFromIndex:(unsigned long long)arg1 readCount:(long long)arg2 inChatSession:(id)arg3 onWebClient:(_Bool)arg4;
- (void)markChatSessionAsRead:(id)arg1;
- (void)prepareWAChatSession:(id)arg1 subscribeToGroups:(_Bool)arg2;
- (void)failedUploadNotifyForMessage:(id)arg1;
- (id)pushSettings;
- (void)requestFreshServerProps;
- (id)pushSettingsForXMPPConnection:(id)arg1;
- (void)saveStatusList;
- (void)deleteAllStatusMessages;
- (void)resetStatusMessages;
- (void)loadStatusMessages;
- (id)statusListFilePath;
- (id)getOrGenerateRecoveryToken:(id)arg1;
- (void)postPhoneNumberChangedNotification;
- (void)registerUsingAuthCode:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestAuthCodeUsingMethod:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getNewPasswordFailedWithError:(id)arg1;
- (void)getNewPasswordFinishedWithResult:(id)arg1;
- (void)performSameDeviceCheckForPhone:(id)arg1 countryCode:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)performSameDeviceCheckForPhone:(id)arg1 countryCode:(id)arg2 rcToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)processVerificationServerResponse:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetAuthInfo;
- (void)initializeChat;
- (void)dataRefreshContextDidSave:(id)arg1;
- (void)mergeChanges:(id)arg1;
- (void)refreshChats;
- (void)refreshChatSessionsForUnknownContacts:(id)arg1;
- (id)allWhatsAppIDsInChatSessions:(id)arg1;
- (void)refreshChatSessionsForKnownContacts:(id)arg1;
- (void)refreshChatSessionsAfterAddressBookReloadWithContext:(id)arg1;
- (id)allABIDsInChatSessions:(id)arg1;
- (_Bool)findContactInContext:(id)arg1 forChatSession:(id)arg2;
- (void)reset;
- (void)reloadFavorites;
- (void)enableContactsSync;
- (void)reloadAddressBook;
- (void)reloadAddressBookIfNeeded;
- (void)setNeedsReloadAddressBook;
@property(readonly, nonatomic) NSLock *addressBookMutationLock;
- (id)storage;
- (id)connection;
- (void)setUserInteractionEnabled;
- (id)mapsURLsForAddress:(id)arg1;
- (id)mapsURLsForCoordinate:(CDStruct_c3b9c2ee)arg1 placeName:(id)arg2;
- (id)routeURLsForSourceLocation:(id)arg1 destLocation:(id)arg2;
@property(readonly, nonatomic) void *sharedAddressBook; // @synthesize sharedAddressBook=_sharedAddressBook;
- (void)sendPushTokensToServerWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *voipToken;
@property(copy, nonatomic) NSString *apnsToken;
- (_Bool)hasValidVOIPToken;
- (_Bool)hasValidAPNSToken;
@property(readonly, nonatomic) NSString *sameDeviceCheckURL; // @synthesize sameDeviceCheckURL=_sameDeviceCheckURL;
@property(readonly, nonatomic) NSString *codeRequestURL; // @synthesize codeRequestURL=_codeRequestURL;
@property(readonly, nonatomic) NSString *registrationURL; // @synthesize registrationURL=_registrationURL;
- (_Bool)allowServicePurchase;
- (id)localizedServicePrice;
- (id)serviceExpirationDate;
- (unsigned long long)accountType;
- (unsigned long long)serviceType;
- (id)fullPhoneNumber:(_Bool)arg1;
- (id)fullPhoneNumber;
- (void)setCountryCode:(id)arg1 phoneNumber:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

