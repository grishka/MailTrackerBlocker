//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSFont, NSString, _MCMimeEnrichedState, _MCMimeEnrichedWriterCommandStackEntry;

@interface _MCMimeEnrichedWriter : NSObject
{
    NSAttributedString *_attributedString;	// 8 = 0x8
    NSString *_string;	// 16 = 0x10
    CDStruct_2ada2998 _stringBuffer;	// 24 = 0x18
    NSFont *_defaultFont;	// 208 = 0xd0
    NSFont *_defaultFixedPitchFont;	// 216 = 0xd8
    double _defaultPointSize;	// 224 = 0xe0
    _MCMimeEnrichedWriterCommandStackEntry *_commandStack;	// 232 = 0xe8
    _MCMimeEnrichedWriterCommandStackEntry *_topOfStack;	// 240 = 0xf0
    _MCMimeEnrichedState *_currentState;	// 248 = 0xf8
    unsigned long long _currentLineStart;	// 256 = 0x100
    unsigned long long _lastSpace;	// 264 = 0x108
}

// - (void).cxx_destruct;	// IMP=0x000000000007143a
- (id)debugDescription;	// IMP=0x000000000007120b
- (void)appendTextFromRange:(struct _NSRange)arg1 toString:(id)arg2;	// IMP=0x0000000000070e4c
- (void)updateOutput:(id)arg1 forAttributes:(id)arg2 range:(struct _NSRange)arg3;	// IMP=0x000000000007029a
- (id)convertAttributedString:(id)arg1;	// IMP=0x000000000006fe72
- (void)setState:(id)arg1 fromStackEntry:(id)arg2;	// IMP=0x000000000006f98c
- (void)setState:(id)arg1 fromAttributes:(id)arg2;	// IMP=0x000000000006f407
- (void)pushEntryForCommand:(id)arg1 withParameter:(id)arg2 output:(id)arg3;	// IMP=0x000000000006f0d2
- (void)popStackEntry;	// IMP=0x000000000006f053
- (void)pushStackEntry:(id)arg1;	// IMP=0x000000000006efd0

@end
