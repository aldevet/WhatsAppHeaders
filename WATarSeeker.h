//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TarFile;

@interface WATarSeeker : NSObject
{
    TarFile *_file;
}

@property(nonatomic) __weak TarFile *file; // @synthesize file=_file;
- (void).cxx_destruct;
- (unsigned long long)seekToFindIndex:(unsigned long long *)arg1 withFiles:(id)arg2;
- (id)initWithTarFile:(id)arg1;

@end

