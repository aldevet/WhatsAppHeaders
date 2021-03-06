//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, XMPPContactsSyncResponse;

@interface XMPPContactsSyncContext : NSObject
{
    NSMutableArray *_phoneNumbers;
    NSMutableArray *_deletedJIDs;
    unsigned long long _mode;
    unsigned long long _context;
    NSString *_sid;
    unsigned long long _batchSize;
    double _timeout;
    XMPPContactsSyncResponse *_response;
    CDUnknownBlockType _completionHandler;
    unsigned long long _batchIndex;
}

@property(readonly, nonatomic) unsigned long long batchIndex; // @synthesize batchIndex=_batchIndex;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) XMPPContactsSyncResponse *response; // @synthesize response=_response;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(nonatomic) unsigned long long context; // @synthesize context=_context;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)getNextPhoneNumberSetInto:(id *)arg1 deletedJIDs:(id *)arg2;
@property(readonly, nonatomic) _Bool hasMoreData;
- (void)setDeletedJIDs:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (id)init;

@end

