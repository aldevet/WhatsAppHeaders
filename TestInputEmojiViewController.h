//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAViewController.h"

#import "WAEmojiKeyboardDelegate.h"

@class NSString, WAEmojiKeyboard, WATextView;

@interface TestInputEmojiViewController : WAViewController <WAEmojiKeyboardDelegate>
{
    _Bool _emojiKeyboardShown;
    WATextView *_textView;
    WAEmojiKeyboard *_emojiKeyboard;
}

@property(nonatomic) _Bool emojiKeyboardShown; // @synthesize emojiKeyboardShown=_emojiKeyboardShown;
@property(retain, nonatomic) WAEmojiKeyboard *emojiKeyboard; // @synthesize emojiKeyboard=_emojiKeyboard;
@property(retain, nonatomic) WATextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)returnButtonPressed;
- (void)deleteButtonPressed;
- (void)spaceButtonPressed;
- (void)insertEmoji:(id)arg1;
- (void)switchKeyboard;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

