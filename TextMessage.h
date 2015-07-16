//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLayoutManager, NSMutableArray, NSString, NSTextContainer, NSTextStorage, UIColor, UIFont;

@interface TextMessage : NSObject
{
    struct __CFAttributedString *_attributedString;
    struct __CTFramesetter *_framesetter;
    NSMutableArray *_highlightedTextBlocks;
    _Bool _dataDetectionEnabled;
    unsigned char _alignment;
    _Bool _underlineLinks;
    _Bool _textStoragePrepared;
    NSString *_text;
    NSString *_originalText;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_urlColor;
    UIColor *_highlightedUrlColor;
    UIColor *_urlBackgroundColor;
    UIColor *_shadowColor;
    NSArray *_textBlocks;
    NSArray *_highlightedTerms;
    UIColor *_highlightBoxColor;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    struct CGSize _shadowOffset;
    struct CGSize _size;
}

@property(nonatomic) _Bool textStoragePrepared; // @synthesize textStoragePrepared=_textStoragePrepared;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) UIColor *highlightBoxColor; // @synthesize highlightBoxColor=_highlightBoxColor;
@property(nonatomic) _Bool underlineLinks; // @synthesize underlineLinks=_underlineLinks;
@property(copy, nonatomic) NSArray *highlightedTerms; // @synthesize highlightedTerms=_highlightedTerms;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *textBlocks; // @synthesize textBlocks=_textBlocks;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) unsigned char alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) UIColor *urlBackgroundColor; // @synthesize urlBackgroundColor=_urlBackgroundColor;
@property(retain, nonatomic) UIColor *highlightedUrlColor; // @synthesize highlightedUrlColor=_highlightedUrlColor;
@property(retain, nonatomic) UIColor *urlColor; // @synthesize urlColor=_urlColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool dataDetectionEnabled; // @synthesize dataDetectionEnabled=_dataDetectionEnabled;
- (void).cxx_destruct;
- (void)setNeedsRedraw;
- (id)hitTest:(struct CGPoint)arg1 withPadding:(double)arg2;
- (void)drawInView:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3 lastLineRect:(struct CGRect *)arg4;
- (struct CGPoint)lineBoundsWithRange:(struct __CTLine *)arg1 range:(CDStruct_912cb5d2)arg2;
- (struct CGPoint)visualRangeOfTextRange:(CDStruct_912cb5d2)arg1 inLine:(struct __CTLine *)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 lastLineRect:(struct CGRect *)arg2;
- (_Bool)needsRedrawForSetDataDetection:(_Bool)arg1;
- (void)prepareTextStorage;
- (void)prepareFramesetter;
- (void)prepareTextBlocks;
- (id)matchesInString:(id)arg1;
- (_Bool)isStringSafe:(id)arg1;
- (void)dealloc;
- (id)initWithText:(id)arg1;

@end
