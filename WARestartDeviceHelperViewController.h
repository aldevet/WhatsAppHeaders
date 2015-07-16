//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface WARestartDeviceHelperViewController : UIViewController
{
    NSString *_explanation;
    UIView *_contentView;
    UIView *_phoneImageContainer;
    UIImageView *_imageViewPhone;
    UIImageView *_imageViewRestartArrow;
    NSLayoutConstraint *_topMarginConstraint;
    UILabel *_labelTitle;
    UILabel *_labelDescription;
    UILabel *_labelActionDescription;
    UIButton *_buttonClose;
}

+ (id)controllerWithTitle:(id)arg1 explanation:(id)arg2;
@property(retain, nonatomic) UIButton *buttonClose; // @synthesize buttonClose=_buttonClose;
@property(retain, nonatomic) UILabel *labelActionDescription; // @synthesize labelActionDescription=_labelActionDescription;
@property(retain, nonatomic) UILabel *labelDescription; // @synthesize labelDescription=_labelDescription;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(retain, nonatomic) UIImageView *imageViewRestartArrow; // @synthesize imageViewRestartArrow=_imageViewRestartArrow;
@property(retain, nonatomic) UIImageView *imageViewPhone; // @synthesize imageViewPhone=_imageViewPhone;
@property(retain, nonatomic) UIView *phoneImageContainer; // @synthesize phoneImageContainer=_phoneImageContainer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
- (void).cxx_destruct;
- (void)configureRestartImages;
- (void)closeAction:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end

