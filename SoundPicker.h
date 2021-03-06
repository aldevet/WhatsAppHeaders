//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WATableViewController.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, MPVolumeView, NSArray, NSIndexPath, NSMutableDictionary, NSString, UILabel;

@interface SoundPicker : WATableViewController <AVAudioPlayerDelegate>
{
    NSArray *_soundSets;
    NSIndexPath *_indexPathForSelectedSound;
    NSMutableDictionary *_audioPlayers;
    AVAudioPlayer *_currentPlayer;
    id _audioActivity;
    MPVolumeView *_volumeView;
    long long _tag;
    NSString *_viewTitle;
    id <SoundPickerDelegate> _delegate;
    UILabel *_navItemTitle;
}

@property(retain, nonatomic) UILabel *navItemTitle; // @synthesize navItemTitle=_navItemTitle;
@property(nonatomic) __weak id <SoundPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)cancelAction:(id)arg1;
- (void)saveAction:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)startAudioActivityIfNeeded;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didReceiveMemoryWarning;
- (void)adjustVolumeIfNeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)adjustTitleFont;
- (void)fadeOut;
- (id)audioPlayerForFilename:(id)arg1;
- (id)audioPlayers;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 selectedSoundFilename:(id)arg2 soundSets:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

