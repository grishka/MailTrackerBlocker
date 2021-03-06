//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFMessageCounts : NSObject
{
    unsigned long long _totalCount;	// 8 = 0x8
    unsigned long long _unreadCount;	// 16 = 0x10
    unsigned long long _unseenCount;	// 24 = 0x18
    unsigned long long _deletedCount;	// 32 = 0x20
    unsigned long long _unreadAdjustedForDuplicates;	// 40 = 0x28
}

@property(readonly, nonatomic) unsigned long long unreadAdjustedForDuplicates; // @synthesize unreadAdjustedForDuplicates=_unreadAdjustedForDuplicates;
@property(readonly, nonatomic) unsigned long long deletedCount; // @synthesize deletedCount=_deletedCount;
@property(readonly, nonatomic) unsigned long long unseenCount; // @synthesize unseenCount=_unseenCount;
@property(readonly, nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(readonly, nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
- (id)description;	// IMP=0x000000000016c98d
- (id)initWithTotal:(unsigned long long)arg1 unread:(unsigned long long)arg2 unseen:(unsigned long long)arg3 deleted:(unsigned long long)arg4 unreadAdjustedForDuplicates:(unsigned long long)arg5;	// IMP=0x000000000016c943

@end

