//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/MCActivityTarget-Protocol.h>

@class NSConditionLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface MFSmartMailboxUnreadCountManager : NSObject <MCActivityTarget>
{
    NSMutableArray *_smartMailboxes;	// 8 = 0x8
    NSMutableDictionary *_smartMailboxesOpenDates;	// 16 = 0x10
    BOOL _updateNeededAfterOpeningMailboxes;	// 24 = 0x18
    NSMutableDictionary *_unreadMessagesBySmartMailbox;	// 32 = 0x20
    NSMutableDictionary *_smartMailboxesUpdates;	// 40 = 0x28
    NSConditionLock *_watchedMessagesLock;	// 48 = 0x30
    NSMutableDictionary *_watchedMessages;	// 56 = 0x38
    NSMutableDictionary *_messagesNeedingToBeIndexed;	// 64 = 0x40
    NSConditionLock *_isUpdatingStateLock;	// 72 = 0x48
    NSConditionLock *_isDirtyStateLock;	// 80 = 0x50
    NSConditionLock *_obsoleteMessageKeysLock;	// 88 = 0x58
    NSMutableSet *_obsoleteMessageKeys;	// 96 = 0x60
    NSMutableSet *_restartingUnreadCountQueryMailboxes;	// 104 = 0x68
    double _lastUnreadCountQueryRestartTime;	// 112 = 0x70
    double _restartDelay;	// 120 = 0x78
    BOOL _suspendSmartMailboxUnreadCountCalculations;	// 128 = 0x80
    double _lastModificationToUpdate;	// 136 = 0x88
    long long _unreadQueryCount;	// 144 = 0x90
    NSOperationQueue *_spotlightQueue;	// 152 = 0x98
}

+ (id)sharedInstance;	// IMP=0x000000000020d1f6
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020d13d
+ (void)initialize;	// IMP=0x000000000020d018
+ (id)log;	// IMP=0x000000000020cfbb
@property(readonly, nonatomic) NSOperationQueue *spotlightQueue; // @synthesize spotlightQueue=_spotlightQueue;
@property long long unreadQueryCount; // @synthesize unreadQueryCount=_unreadQueryCount;
@property BOOL suspendSmartMailboxUnreadCountCalculations; // @synthesize suspendSmartMailboxUnreadCountCalculations=_suspendSmartMailboxUnreadCountCalculations;
@property double lastModificationToUpdate; // @synthesize lastModificationToUpdate=_lastModificationToUpdate;
// - (void).cxx_destruct;	// IMP=0x0000000000215e4d
- (void)_updateObsoleteMessageKeys;	// IMP=0x0000000000215b59
- (void)_addObsoleteMessageKeys:(id)arg1;	// IMP=0x00000000002159a9
- (id)_messageKeysWaitingToBeIndexes;	// IMP=0x0000000000215212
- (BOOL)_isMessageIndexed:(id)arg1;	// IMP=0x0000000000215185
- (void)_addMessagesWaitingToBeIndexed:(id)arg1;	// IMP=0x0000000000214ecb
- (void)_updateSmartMailboxUnreadCountsByRemovingMessagesWithKeys:(id)arg1;	// IMP=0x00000000002148c3
- (void)_updateSmartMailboxUnreadCountsWithMessages:(id)arg1;	// IMP=0x0000000000213c21
- (id)_filterMessages:(id)arg1 matchingCriterion:(id)arg2;	// IMP=0x000000000021386d
- (void)_updateUnreadCountsWithWatchedMessages;	// IMP=0x0000000000213154
- (void)_performUpdateNow;	// IMP=0x0000000000212edf
- (void)_performDelayedUpdate:(id)arg1;	// IMP=0x0000000000212ddd
- (void)_watchMessages:(id)arg1 withUnreadState:(BOOL)arg2 onDate:(id)arg3;	// IMP=0x000000000021292c
- (unsigned long long)_uniqueCountOfMessages:(id)arg1;	// IMP=0x00000000002126c1
- (void)_setUnreadMessages:(id)arg1 forSmartMailbox:(id)arg2 onDate:(id)arg3;	// IMP=0x0000000000212130
- (void)_searchedMailboxPreferencesChanged:(id)arg1;	// IMP=0x00000000002120d8
- (void)_smartMailboxesDidSaveToDisk:(id)arg1;	// IMP=0x00000000002120d2
- (void)_smartMailboxesWillSaveToDisk:(id)arg1;	// IMP=0x000000000021202f
- (void)_storeDidOpen:(id)arg1;	// IMP=0x0000000000211ae8
- (void)_storeWillOpen:(id)arg1;	// IMP=0x000000000021197f
- (void)_mailboxesDeleted:(id)arg1;	// IMP=0x0000000000211979
- (void)_messagesCompacted:(id)arg1;	// IMP=0x0000000000211708
- (void)_messageFlagsChanged:(id)arg1;	// IMP=0x0000000000211323
- (void)_messagesAdded:(id)arg1;	// IMP=0x0000000000211005
- (void)_stopObservingNotifications;	// IMP=0x0000000000210ef5
- (void)_startObservingNotifications;	// IMP=0x0000000000210dbb
- (BOOL)_isObservingSmartMailbox:(id)arg1;	// IMP=0x0000000000210d39
- (void)_setSmartMailboxesWithSpotlightCriterion:(id)arg1;	// IMP=0x00000000002109ac
- (id)_pathForMessage:(id)arg1;	// IMP=0x0000000000210907
- (void)_decomposeMessageKey:(id)arg1 intoRowID:(id *)arg2 messageIDHeader:(id *)arg3;	// IMP=0x000000000021084b
- (id)_keyForMessage:(id)arg1;	// IMP=0x000000000021073a
- (id)_keyForMailbox:(id)arg1;	// IMP=0x0000000000210725
- (void)_setIsDirty:(BOOL)arg1;	// IMP=0x0000000000210659
- (void)_setIsUpdating:(BOOL)arg1;	// IMP=0x000000000021053f
- (void)smartMailbox:(id)arg1 willReturnDictionaryRepresentation:(id)arg2;	// IMP=0x00000000002103e8
- (void)smartMailbox:(id)arg1 didInitializeWithDictionaryRepresentation:(id)arg2;	// IMP=0x0000000000210282
- (void)setSmartMailboxes:(id)arg1;	// IMP=0x000000000021005e
- (void)updateMailboxesUnreadCountUsingSpotlight:(id)arg1 cancelExistingQuery:(BOOL)arg2;	// IMP=0x000000000020fde8
- (void)updateUnreadCountsUsingSpotlightForAllSmartMailboxes;	// IMP=0x000000000020fcfb
- (void)_libraryMessagesFlagsChanged:(id)arg1;	// IMP=0x000000000020f0a3
- (void)_updateSmartMailboxUnreadCountUsingSpotlight:(id)arg1;	// IMP=0x000000000020e38a
- (BOOL)_canCreateQuery;	// IMP=0x000000000020e32d
- (void)_updateSmartMailboxUnreadCountUsingSearchableIndexForMailbox:(id)arg1;	// IMP=0x000000000020d844
- (double)_restartQueryDelayForError:(id)arg1;	// IMP=0x000000000020d69a
- (void)dealloc;	// IMP=0x000000000020d57f
- (id)init;	// IMP=0x000000000020d2af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
