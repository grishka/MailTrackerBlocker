//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMUserProfileProvider.h>

#import <MailFW/EMUserProfileProviderSubclassMethods-Protocol.h>

@class NSString;

@interface MFUserProfileProvider_macOS : EMUserProfileProvider <EMUserProfileProviderSubclassMethods>
{
}

+ (id)defaultProvider;	// IMP=0x0000000000238413
- (id)_accountsEmailAddresses;	// IMP=0x0000000000238478

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

