//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPreferences.h>

#import "EFLoggable-Protocol.h"

@class NSMutableArray, NSString;

@interface MailPreferences : NSPreferences <EFLoggable>
{
    NSMutableArray *_preferenceTitles;	// 136 = 0x88
    NSMutableArray *_preferenceOwners;	// 144 = 0x90
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;	// IMP=0x00000001001c4d1a
+ (void)_mailApplicationDidFinishLaunching:(id)arg1;	// IMP=0x00000001001c4aa1
+ (void)initialize;	// IMP=0x00000001001c47e6
+ (id)makePreferenceTabViewItems;	// IMP=0x00000001001c44fc
+ (id)log;	// IMP=0x00000001001c4433
// - (void).cxx_destruct;	// IMP=0x00000001001c4f46
- (void)addPreferenceNamed:(id)arg1 owner:(id)arg2;	// IMP=0x00000001001c498e
- (id)init;	// IMP=0x00000001001c48e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
