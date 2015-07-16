//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface WATextAttachmentLoader : NSObject
{
    NSMutableArray *_registeredSizes;
    NSMutableDictionary *_atlases;
    NSDictionary *_symbolDict;
    NSMutableDictionary *_glyphSizeDict;
    NSDictionary *_availableSizesDict;
    NSArray *_symbolArray;
}

+ (_Bool)isCustomEmojiSupported;
+ (id)regionalPairSet;
+ (id)sharedLoader;
@property(retain, nonatomic) NSArray *symbolArray; // @synthesize symbolArray=_symbolArray;
- (void).cxx_destruct;
- (id)bestGlyphForName:(id)arg1 pointSize:(double)arg2;
- (id)bestGlyphAtlasForPointSize:(double)arg1;
- (void)registerGlyphAtlasWithName:(id)arg1 pointSize:(double)arg2;
- (id)textAttachmentForName:(id)arg1 pointSize:(double)arg2;
- (id)init;

@end
