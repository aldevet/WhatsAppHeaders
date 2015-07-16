//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, UILabel, UIView;

@interface WACallEventsTableViewCell : UITableViewCell
{
    UIView *_topEdge;
    NSMutableArray *_customConstraints;
    UILabel *_dateLabel;
    NSMutableArray *_timeLabels;
    NSMutableArray *_eventLabels;
    NSMutableArray *_durationLabels;
}

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addCustomConstraints:(id)arg1;
- (void)configureWithAggregateCallEvent:(id)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

