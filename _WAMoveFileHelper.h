//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSString;

@interface _WAMoveFileHelper : NSObject
{
    NSString *_fromPath;
    NSString *_toPath;
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
- (void)revert;
- (_Bool)performMove;
- (id)initWithFromPath:(id)arg1 toPath:(id)arg2;

@end

