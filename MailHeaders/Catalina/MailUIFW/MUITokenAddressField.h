//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTokenField.h>

@class MUITokenAddressTextView, NSView;

@interface MUITokenAddressField : NSTokenField
{
    MUITokenAddressTextView *_addressTextView;	// 120 = 0x78
    NSView *_parentAddressField;	// 128 = 0x80
}

+ (Class)cellClass;	// IMP=0x000000000000b966
@property(nonatomic) __weak NSView *parentAddressField; // @synthesize parentAddressField=_parentAddressField;
// - (void).cxx_destruct;	// IMP=0x0000000000010e8c
- (id)accessibilityParent;	// IMP=0x0000000000023d20
- (id)designatedFocusRingView;	// IMP=0x0000000000023d0e
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000d0e2
- (void)setFrameSize:(struct CGSize)arg1;	// IMP=0x000000000000d82a
@property(readonly, nonatomic) double minimumHeight;
- (void)refreshField;	// IMP=0x0000000000023adc
- (id)_addressTextView;	// IMP=0x000000000000ca03
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;	// IMP=0x0000000000023ad4
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x000000000000e0eb
- (unsigned long long)textView:(id)arg1 dragOperationForDraggingInfo:(id)arg2 type:(id)arg3;	// IMP=0x0000000000023a63
- (id)tokenFieldCell:(id)arg1 shouldUseReadablePasteboardTypes:(id)arg2;	// IMP=0x0000000000023a4a
- (id)tokenFieldCell:(id)arg1 shouldUseDraggingPasteboardTypes:(id)arg2;	// IMP=0x000000000000b993
- (BOOL)resignFirstResponder;	// IMP=0x00000000000239cb
- (BOOL)becomeFirstResponder;	// IMP=0x000000000000de77

@end

