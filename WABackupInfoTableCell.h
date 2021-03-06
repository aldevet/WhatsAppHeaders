//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, WAAnimatedGearsView;

@interface WABackupInfoTableCell : UITableViewCell
{
    WAAnimatedGearsView *_gearsView;
    UILabel *_labelBackupDetails;
    UILabel *_labelHelperText;
}

@property(readonly, nonatomic) UILabel *labelHelperText; // @synthesize labelHelperText=_labelHelperText;
@property(readonly, nonatomic) UILabel *labelBackupDetails; // @synthesize labelBackupDetails=_labelBackupDetails;
@property(readonly, nonatomic) WAAnimatedGearsView *gearsView; // @synthesize gearsView=_gearsView;
- (void).cxx_destruct;
- (struct UIEdgeInsets)layoutMargins;
- (double)heightForContentWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

