//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class NSDictionary;
@protocol IMAPPersistLabelChangesOperationDelegate;

@interface IMAPPersistLabelChangesOperation : IMAPPersistenceTaskOperation
{
    id <IMAPPersistLabelChangesOperationDelegate> _delegate;	// 8 = 0x8
    NSDictionary *_labelChangesByServerMessages;	// 16 = 0x10
}

@property(readonly, copy, nonatomic) NSDictionary *labelChangesByServerMessages; // @synthesize labelChangesByServerMessages=_labelChangesByServerMessages;
@property(readonly, nonatomic) __weak id <IMAPPersistLabelChangesOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000000004f863
- (void)main;	// IMP=0x000000000004f3dc
- (id)description;	// IMP=0x000000000004f2fe
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000004f22f
- (id)initWithDataSource:(id)arg1 labelChangesByServerMessages:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000004f162

@end
