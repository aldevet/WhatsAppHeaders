//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAMediaPickerLibraryTableViewCell.h"

@class UIColor, UIImageView, UIView;

@interface WAMediaPickerLibraryTableViewCell7 : WAMediaPickerLibraryTableViewCell
{
    UIImageView *_mainImageView;
    UIImageView *_imageView2;
    UIImageView *_imageView3;
    UIView *_bottomBorder;
    _Bool _hasPosterImage;
    UIColor *_imageViewBackgroundColor;
}

+ (long long)preferredSeparatorStyle;
+ (double)preferredHeight;
- (void).cxx_destruct;
- (void)reapplyBackgroundColors;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateWithAssetCount:(unsigned long long)arg1;
- (void)setImageViewBackgroundColor:(id)arg1;
- (void)configureWithAssetCollection:(id)arg1;
- (void)setBottomBorderHidden:(_Bool)arg1;
- (_Bool)isBottomBorderHidden;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
