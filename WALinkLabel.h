//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class TextBlock, TextMessage, UIColor;

@interface WALinkLabel : UILabel
{
    TextBlock *_selectedTextBlock;
    TextMessage *_message;
    _Bool _underlineLinks;
    id <WALinkLabelDelegate> _delegate;
    UIColor *_linkColor;
    UIColor *_linkColorHighlighted;
    UIColor *_linkBackgroundColor;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) _Bool underlineLinks; // @synthesize underlineLinks=_underlineLinks;
@property(retain, nonatomic) UIColor *linkBackgroundColor; // @synthesize linkBackgroundColor=_linkBackgroundColor;
@property(retain, nonatomic) UIColor *linkColorHighlighted; // @synthesize linkColorHighlighted=_linkColorHighlighted;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <WALinkLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)openURL;
- (void)highlightURL:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

