//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMetadataQuery.h"

@interface WASharedMetadataQuery : NSMetadataQuery
{
    unsigned long long _queryRetainCount;
}

- (_Bool)restartQueryAndRetain;
@property(readonly, nonatomic) _Bool finishedGathering;
- (void)releaseQuery;
- (_Bool)retainQuery;
- (_Bool)startSharedQuery;
- (void)dealloc;
- (id)init;

@end
