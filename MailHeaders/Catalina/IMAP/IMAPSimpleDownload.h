//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPDownload.h>

@class NSError, NSMutableData, NSString;

@interface IMAPSimpleDownload : IMAPDownload
{
    NSMutableData *_mdata;	// 32 = 0x20
    BOOL _knownLength;	// 40 = 0x28
    unsigned int _bytesFetched;	// 44 = 0x2c
    BOOL _isComplete;	// 48 = 0x30
    unsigned int _expectedLength;	// 52 = 0x34
    NSError *_error;	// 56 = 0x38
    NSString *_partSectionSpecifier;	// 64 = 0x40
    long long _textSectionSpecifier;	// 72 = 0x48
}

@property(nonatomic) BOOL isComplete; // @synthesize isComplete=_isComplete;
@property(readonly, nonatomic) unsigned int expectedLength; // @synthesize expectedLength=_expectedLength;
@property long long textSectionSpecifier; // @synthesize textSectionSpecifier=_textSectionSpecifier;
@property(retain) NSString *partSectionSpecifier; // @synthesize partSectionSpecifier=_partSectionSpecifier;
- (void)setError:(id)arg1;	// IMP=0x00000000000168ff
- (id)error;	// IMP=0x0000000000013d20
- (void).cxx_destruct;	// IMP=0x00000000000144f6
- (id)data;	// IMP=0x000000000001427e
- (void)addCommandsToPipeline:(id)arg1 withCache:(id)arg2;	// IMP=0x000000000001132b
- (void)processResults;	// IMP=0x00000000000134d4
- (BOOL)handleFetchResult:(id)arg1;	// IMP=0x0000000000011f01
- (unsigned int)bytesFetched;	// IMP=0x0000000000014c9a
- (id)description;	// IMP=0x000000000002c9ee
- (id)createCopy;	// IMP=0x000000000002c92a
- (id)initWithUid:(unsigned int)arg1;	// IMP=0x000000000002c85b
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 length:(unsigned int)arg4;	// IMP=0x0000000000011738
- (id)initWithUid:(unsigned int)arg1 partSectionSpecifier:(id)arg2 textSectionSpecifier:(long long)arg3 estimatedLength:(unsigned int)arg4;	// IMP=0x0000000000010ec7

@end

