//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface WAGlyphAtlas : NSObject
{
    _Bool _loaded;
    NSString *_dirName;
    NSMutableDictionary *_imageMap;
    NSDictionary *_glyphMap;
    NSSet *_allowedGlyphNames;
}

- (void).cxx_destruct;
- (id)allNames;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)unload;
- (void)loadIfNeeded;
- (id)atlasImageWithName:(id)arg1;
- (id)glyphWithName:(id)arg1;
- (void)parsePropertyList:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

