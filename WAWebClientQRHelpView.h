//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView;

@interface WAWebClientQRHelpView : UIView
{
    _Bool _animating;
    UIView *_stage;
    UIImageView *_laptop;
    UIImageView *_qrCode;
    UIImageView *_checkMark;
    UIImage *_blurredQRCodeImage;
    UIImage *_sharpQRCodeImage;
    UIView *_phoneContainer;
    struct CGPoint _qrCodeCenter;
    _Bool _firstIterationCompleted;
    id <WAWebClientQRHelpViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WAWebClientQRHelpViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fadeOut;
- (void)showCheckMark;
- (void)movePhoneDownAndUp;
- (void)slideInPhone;
- (void)showLaptop;
- (void)fadeIn;
- (void)resume;
- (void)pause;
- (void)beginAnimation;
- (void)resetState;
- (void)removeAnimationsInView:(id)arg1;
- (void)didMoveToWindow;
- (id)init;

@end

