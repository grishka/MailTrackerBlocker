//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MFPersistenceMigratorV3Delegate;

@interface MFPersistenceMigratorV3 : NSObject
{
    id <MFPersistenceMigratorV3Delegate> _delegate;	// 8 = 0x8
}

@property(nonatomic) __weak id <MFPersistenceMigratorV3Delegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x00000000001cfd09
- (void)_migrateDefaults;	// IMP=0x00000000001cfbe6
- (id)_fixSmartMailboxCriteria:(id)arg1;	// IMP=0x00000000001cf877
- (id)_updateSmartMailboxes:(id)arg1;	// IMP=0x00000000001cf67c
- (id)_fixCriteria:(id)arg1;	// IMP=0x00000000001cf14c
- (id)_updateRules:(id)arg1;	// IMP=0x00000000001cee9c
- (void)_migratePlistsContainingPaths;	// IMP=0x00000000001ced13
- (void)_moveAccountsPlistFromV3BackToV2;	// IMP=0x00000000001ce7a1
- (void)migrate;	// IMP=0x00000000001ce4a9

@end
