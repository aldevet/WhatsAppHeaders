//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAMessageCell.h"

@class UIButton, UIImageView, UILabel, UIView, WAMessageFooterView;

@interface WAVCardMessageCell : WAMessageCell
{
    UIImageView *_bubbleImageView;
    WAMessageFooterView *_footerView;
    UIImageView *_broadcastImageView;
    UILabel *_fromNameLabel;
    UILabel *_pushNameLabel;
    UIView *_vCardContentView;
    UIImageView *_contactImageView;
    UIImageView *_arrowImageView;
    UILabel *_contactNameLabel;
    UIView *_horizontalSeparator;
    UIView *_verticalSeparator;
    UIButton *_buttonMessage;
    UIButton *_buttonAdd;
}

+ (id)cellReuseIdentifier;
+ (double)rowHeightForCellData:(id)arg1 maxWidth:(double)arg2;
+ (struct UIEdgeInsets)contentInsetsForCellData:(id)arg1;
+ (_Bool)shouldShowActionButtonsForCellData:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)accessibilityHintText;
- (id)accessibilityValueText;
- (void)configureForAccessibility;
- (id)referenceViewForPopupMenu;
- (struct CGRect)targetRectForPopupMenu;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setBubbleHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDimmed:(_Bool)arg1;
- (void)handleLongPressOnBubble:(id)arg1;
- (void)handleSingleTapOnBubble:(id)arg1;
- (void)configureCellUpdatingAllContents:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)addContactAction:(id)arg1;
- (void)messageAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

