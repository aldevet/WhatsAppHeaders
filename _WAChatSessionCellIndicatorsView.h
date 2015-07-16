//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, WAShapeView;

@interface _WAChatSessionCellIndicatorsView : UIView
{
    UIImageView *_muteIndicator;
    UILabel *_unreadLabel;
    WAShapeView *_unreadLabelBackground;
    UILabel *_archivedLabel;
    WAShapeView *_archivedLabelBackground;
    struct CGSize _archivedLabelSize;
    _Bool _highlighted;
    _Bool _showMuteIcon;
    _Bool _showArchivedLabel;
    long long _unreadCount;
}

+ (id)muteIndicatorImageHighlighted;
+ (id)muteIndicatorImage;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) _Bool showArchivedLabel; // @synthesize showArchivedLabel=_showArchivedLabel;
@property(nonatomic) _Bool showMuteIcon; // @synthesize showMuteIcon=_showMuteIcon;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)reloadFonts;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end
