//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSTimer, UIImageView, UILabel;

@interface PropertyTableViewCell : UITableViewCell
{
    UILabel *_labelLabel;
    UILabel *_labelValue;
    UILabel *_labelComment;
    UIImageView *_imageViewStar;
    _Bool _isFavorite;
    _Bool _valueHighlighted;
    _Bool _popupActive;
    NSTimer *_popupTimer;
}

+ (double)heightForText:(id)arg1 withFont:(id)arg2 hasComment:(_Bool)arg3 hasStar:(_Bool)arg4 cellWidth:(double)arg5;
+ (id)commentFont;
+ (id)valueFont;
+ (id)labelFont;
+ (id)commentTextColorSelected;
+ (id)commentTextColorNormal;
+ (id)valueTextColorHighlighted;
+ (id)valueTextColorSelected;
+ (id)valueTextColorNormal;
+ (id)labelTextColorSelected;
+ (id)labelTextColorNormal;
@property(nonatomic) _Bool valueHighlighted; // @synthesize valueHighlighted=_valueHighlighted;
@property(readonly, nonatomic) _Bool popupActive; // @synthesize popupActive=_popupActive;
@property(readonly, nonatomic) UILabel *labelComment; // @synthesize labelComment=_labelComment;
@property(readonly, nonatomic) UILabel *labelValue; // @synthesize labelValue=_labelValue;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFavorite;
- (void)didHideMenu;
- (void)showCopyPasteView:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
