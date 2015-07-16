//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString, WAChatSession, WAMessage, WAWebClient, XMPPMessageStanza;

@protocol WAWebClientDelegate <NSObject>
- (NSArray *)allWhatsAppablePhonesInWebClient:(WAWebClient *)arg1;
- (NSArray *)allBroadcastListsInWebClient:(WAWebClient *)arg1;
- (NSArray *)allGroupChatsInWebClient:(WAWebClient *)arg1;
- (NSArray *)allChatSessionsInWebClient:(WAWebClient *)arg1;
- (void)webClient:(WAWebClient *)arg1 didCreateGroupWithSubject:(NSString *)arg2 participants:(NSArray *)arg3 requestID:(NSString *)arg4;
- (void)webClient:(WAWebClient *)arg1 didChangeSubjectOfGroupWithJID:(NSString *)arg2 to:(NSString *)arg3 requestID:(NSString *)arg4;
- (void)webClient:(WAWebClient *)arg1 didLeaveGroupWithJID:(NSString *)arg2 requestID:(NSString *)arg3;
- (void)webClient:(WAWebClient *)arg1 didAddParticipants:(NSArray *)arg2 inChatWithJID:(NSString *)arg3 requestID:(NSString *)arg4;
- (void)webClient:(WAWebClient *)arg1 didRemoveParticipants:(NSArray *)arg2 inChatWithJID:(NSString *)arg3 requestID:(NSString *)arg4;
- (void)webClient:(WAWebClient *)arg1 didRequestMediaUploadForMessageWithStanzaID:(NSString *)arg2 outgoing:(_Bool)arg3 inChatWithJID:(NSString *)arg4 requestID:(NSString *)arg5;
- (void)webClient:(WAWebClient *)arg1 didDeletePictureForChatWithJID:(NSString *)arg2 requestID:(NSString *)arg3;
- (void)webClient:(WAWebClient *)arg1 didSetPicture:(NSData *)arg2 thumbnail:(NSData *)arg3 forChatWithJID:(NSString *)arg4 requestID:(NSString *)arg5;
- (void)webClient:(WAWebClient *)arg1 didSetMuteDate:(NSDate *)arg2 ofChatWithJID:(NSString *)arg3;
- (void)webClient:(WAWebClient *)arg1 didSetArchiveState:(_Bool)arg2 ofChatWithJID:(NSString *)arg3;
- (void)webClient:(WAWebClient *)arg1 didDeleteIndividualChatWithJID:(NSString *)arg2;
- (void)webClient:(WAWebClient *)arg1 didPlayIncomingMessageWithStanzaID:(NSString *)arg2 inChatWithJID:(NSString *)arg3;
- (void)webClient:(WAWebClient *)arg1 didUpdateStatus:(NSString *)arg2;
- (void)webClient:(WAWebClient *)arg1 didReadUntilMessageWithStanzaID:(NSString *)arg2 outgoing:(_Bool)arg3 inChatWithJID:(NSString *)arg4 readCount:(long long)arg5;
- (void)webClient:(WAWebClient *)arg1 didRequestResendMessage:(WAMessage *)arg2;
- (void)webClient:(WAWebClient *)arg1 didRelayMessageStanza:(XMPPMessageStanza *)arg2;
- (WAChatSession *)webClient:(WAWebClient *)arg1 chatSessionForJID:(NSString *)arg2;
- (WAMessage *)webClient:(WAWebClient *)arg1 existingOutgoingMessageWithStanzaID:(NSString *)arg2 inJID:(NSString *)arg3;
- (void)webClient:(WAWebClient *)arg1 didChangeOutgoingChatStateToJID:(NSString *)arg2;
- (void)webClient:(WAWebClient *)arg1 didSubscribeToJID:(NSString *)arg2;
- (NSArray *)webClient:(WAWebClient *)arg1 outgoingMessagesWithOrAfterStanzaID:(NSString *)arg2 inChatSession:(WAChatSession *)arg3;
- (NSArray *)recentlyRelevantMessagesInChatsForWebClient:(WAWebClient *)arg1;
- (NSArray *)webClient:(WAWebClient *)arg1 memberJIDsInBroadcastList:(WAChatSession *)arg2;
- (NSArray *)webClient:(WAWebClient *)arg1 messagesInChatSession:(WAChatSession *)arg2 afterStanzaID:(NSString *)arg3 isFromMe:(_Bool)arg4 count:(unsigned long long)arg5 countExceeded:(out _Bool *)arg6;
- (NSDictionary *)webClient:(WAWebClient *)arg1 JIDToChatSessionMapWithJIDs:(NSArray *)arg2;
- (NSArray *)webClient:(WAWebClient *)arg1 messagesInJID:(NSString *)arg2 beforeStanzaID:(NSString *)arg3 isFromMe:(_Bool)arg4 count:(unsigned long long)arg5;
@end
