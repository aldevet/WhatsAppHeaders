//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class WABadgeView;

@interface WABadgedTableViewCell : UITableViewCell
{
    WABadgeView *_badgeView;
    unsigned long long _badgeValue;
}

@property(nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;
- (void)updateBadgeFromValue:(unsigned long long)arg1 toValue:(unsigned long long)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateBadgeView;
- (void)removeBadgeView;
- (void)addBadgeView;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;

@end

