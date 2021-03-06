//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, WACopyableLabel;

@interface WAContactInfoTableHeaderView : UIView
{
    UIView *_profilePhotoView;
    UIImageView *_profilePhotoImageView;
    _Bool _hasProfilePhoto;
    NSString *_headerText;
    struct _NSRange _nameRange;
    WACopyableLabel *_label;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)reloadFonts;
- (void)setAllowCopyText:(_Bool)arg1;
- (void)configureWithName:(id)arg1;
- (void)configureWithMergedContact:(id)arg1;
- (void)configureWithContactInfoNameUnit:(id)arg1 photoUnit:(id)arg2;
- (void)reloadText;
- (void)setupContactPicture:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

