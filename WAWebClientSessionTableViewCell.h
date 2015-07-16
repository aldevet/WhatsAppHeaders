//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface WAWebClientSessionTableViewCell : UITableViewCell
{
    UILabel *_lastActiveLabel;
    UILabel *_locationLabel;
    UILabel *_operatingSystemLabel;
    UIImageView *_iconImageView;
}

@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *operatingSystemLabel; // @synthesize operatingSystemLabel=_operatingSystemLabel;
@property(nonatomic) __weak UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(nonatomic) __weak UILabel *lastActiveLabel; // @synthesize lastActiveLabel=_lastActiveLabel;
- (void).cxx_destruct;
- (void)setIconImageForBrowserName:(id)arg1;

@end
