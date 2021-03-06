//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSAttributedString, NSString, UIFont;

@interface WAContactNameLabel : UILabel
{
    NSString *_originalText;
    NSAttributedString *_normalText;
    NSAttributedString *_highlightedText;
    _Bool _reverseNameSearch;
    NSString *_highlightedPart;
    UIFont *_nameFont;
}

@property(nonatomic) _Bool reverseNameSearch; // @synthesize reverseNameSearch=_reverseNameSearch;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(copy, nonatomic) NSString *highlightedPart; // @synthesize highlightedPart=_highlightedPart;
- (void).cxx_destruct;
- (void)recreateAttrubutedString;
@property(copy, nonatomic) NSString *text;
- (void)setText:(id)arg1 highlightedPart:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

