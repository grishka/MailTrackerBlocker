//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/NSObject-Protocol.h>

@protocol MCAttachmentDataSource <NSObject>
@property(readonly, nonatomic) BOOL isDirectory;
@property(readonly, nonatomic) BOOL canResultsBeCached;
@property(readonly, nonatomic) BOOL dataIsLocallyAvailable;
- (unsigned long long)approximateSizeForAccessLevel:(long long)arg1;
- (void)fileWrapperForAccessLevel:(long long)arg1 completionBlock:(void (^)(MCFileWrapper *, NSError *))arg2;
- (void)dataForAccessLevel:(long long)arg1 completionBlock:(void (^)(NSData *, NSError *))arg2;
@end
