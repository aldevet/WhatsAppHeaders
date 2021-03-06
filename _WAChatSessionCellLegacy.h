//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAChatSessionCell.h"

@class UIImageView;

@interface _WAChatSessionCellLegacy : WAChatSessionCell
{
    UIImageView *_locationIcon;
    UIImageView *_pushToTalkIcon;
    UIImageView *_cameraIcon;
    UIImageView *_camcorderIcon;
}

@property(retain, nonatomic) UIImageView *camcorderIcon; // @synthesize camcorderIcon=_camcorderIcon;
@property(retain, nonatomic) UIImageView *cameraIcon; // @synthesize cameraIcon=_cameraIcon;
@property(retain, nonatomic) UIImageView *pushToTalkIcon; // @synthesize pushToTalkIcon=_pushToTalkIcon;
@property(retain, nonatomic) UIImageView *locationIcon; // @synthesize locationIcon=_locationIcon;
- (void).cxx_destruct;
- (void)setPushToTalkIconType:(unsigned long long)arg1;
- (void)setShowCamcorderIcon:(_Bool)arg1;
- (void)setShowCameraIcon:(_Bool)arg1;
- (void)setShowLocationIcon:(_Bool)arg1;
- (void)setMessageText:(id)arg1;
- (void)configureWithChatSession:(id)arg1 message:(id)arg2;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

