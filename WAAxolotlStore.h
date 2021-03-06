//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStore, NSPersistentStoreCoordinator;

@interface WAAxolotlStore : NSObject
{
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPersistentStore *_axolotlStore;
    NSManagedObjectContext *_managedObjectContext;
    _Bool _mustDeferStoreSaves;
    int _registrationId;
    NSData *_publicKey;
    NSData *_privateKey;
}

@property(copy, nonatomic) NSData *privateKey; // @synthesize privateKey=_privateKey;
@property(copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property int registrationId; // @synthesize registrationId=_registrationId;
- (void).cxx_destruct;
- (void)saveStore;
- (void)deferStoreSaves;
- (_Bool)isTrustedIdentity:(id)arg1 recipientId:(long long)arg2;
- (_Bool)storeIdentity:(id)arg1 recipientId:(long long)arg2;
- (void)clearIdentityForRecipientId:(long long)arg1;
- (int)deleteAllSessionsForRecipientId:(long long)arg1;
- (int)deleteSessionForRecipientId:(long long)arg1 deviceId:(int)arg2;
- (_Bool)containsSessionForRecipientId:(long long)arg1 deviceId:(int)arg2;
- (_Bool)storeSessionRecord:(id)arg1 recipientId:(long long)arg2 deviceId:(int)arg3;
- (id)timeForSessionWithRecipientId:(long long)arg1 deviceId:(int)arg2;
- (id)sessionRecordForRecipientId:(long long)arg1 deviceId:(int)arg2;
- (id)signedPreKeyData;
- (_Bool)removeSignedPreKeyRecordWithId:(int)arg1;
- (_Bool)containsSignedPreKeyRecordWithId:(int)arg1;
- (_Bool)storeSignedPreKeyRecord:(id)arg1 id:(int)arg2;
- (id)signedPreKeyRecordForId:(int)arg1;
- (_Bool)checkPreKeysPresent:(id)arg1;
- (id)unsentPreKeys;
- (void)setLastSentPreKeyId:(int)arg1;
- (int)lastSentPreKeyId;
- (void)setLastPreKeyId:(int)arg1;
- (int)lastPreKeyId;
- (_Bool)removePreKeyRecordWithId:(int)arg1;
- (_Bool)containsPreKeyRecordWithId:(int)arg1;
- (_Bool)storePreKeyRecord:(id)arg1 id:(int)arg2;
- (id)preKeyRecordForId:(int)arg1;
- (id)metadataForKey:(id)arg1;
- (void)setMetadata:(id)arg1 forKey:(id)arg2;
- (_Bool)saveContext;
- (id)managedObjectContext;
- (void)clearStore;
- (_Bool)loadStore;
- (id)persistentStoreURL;
- (id)persistentStorePath;
- (id)init;

@end

