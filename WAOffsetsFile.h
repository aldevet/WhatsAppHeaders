//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle;

@interface WAOffsetsFile : NSObject
{
    NSFileHandle *_handle;
    unsigned long long *_offsets;
    unsigned long long _lastChangedBlock;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)blockForIndex:(unsigned long long)arg1;
- (void)save;
- (void)invalidateFromIndex:(unsigned long long)arg1;
- (void)loadBlock:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)offsetAtIndex:(unsigned long long)arg1;
- (void)initializeArray;
- (void)determineCountWithMaximum:(unsigned long long)arg1;
- (id)initWithPath:(id)arg1 andCount:(unsigned long long)arg2;

@end

