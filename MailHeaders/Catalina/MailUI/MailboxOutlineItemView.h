//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "NSTextFieldDelegate-Protocol.h"

@class MailboxBadgeView, NSButton, NSObject, NSString;
@protocol MailboxOutlineItemViewDelegate;

@interface MailboxOutlineItemView : NSTableCellView <NSTextFieldDelegate>
{
    NSObject<MailboxOutlineItemViewDelegate> *_delegate;	// 112 = 0x70
    MailboxBadgeView *_badgeView;	// 120 = 0x78
    NSButton *_indicatorView;	// 128 = 0x80
    NSButton *_addMailboxButton;	// 136 = 0x88
}

@property(retain, nonatomic) NSButton *addMailboxButton; // @synthesize addMailboxButton=_addMailboxButton;
@property(retain, nonatomic) NSButton *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) MailboxBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) __weak NSObject<MailboxOutlineItemViewDelegate> *delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x00000001001bb399
- (void)viewWillDraw;	// IMP=0x000000010001958d
- (void)_layoutAuxiliaryViews;	// IMP=0x00000001000195ce
- (void)_layoutAuxiliaryViewsForcingBadge:(BOOL)arg1;	// IMP=0x00000001001bb03e
- (struct CGRect)_layoutText:(struct CGRect *)arg1 isRTL:(BOOL)arg2;	// IMP=0x00000001000190c2
- (struct CGRect)_layoutAuxiliaryButton:(id)arg1 inRect:(struct CGRect *)arg2 isRTL:(BOOL)arg3;	// IMP=0x00000001001badc9
- (struct CGRect)_layoutIndicator:(struct CGRect *)arg1 isRTL:(BOOL)arg2;	// IMP=0x00000001001bad5e
- (struct CGRect)_layoutAddButton:(struct CGRect *)arg1 isRTL:(BOOL)arg2;	// IMP=0x00000001001bacf3
- (struct CGRect)_leftAlignAndVerticallyCenterRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;	// IMP=0x00000001001baca5
- (struct CGRect)_rightAlignAndVerticallyCenterRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2;	// IMP=0x000000010001905b
- (struct CGRect)_layoutBadge:(struct CGRect *)arg1 force:(BOOL)arg2 isRTL:(BOOL)arg3;	// IMP=0x0000000100018c39
- (void)setUserInterfaceLayoutDirection:(long long)arg1;	// IMP=0x0000000100016403
- (void)setObjectValue:(id)arg1;	// IMP=0x000000010001711c
- (void)setBackgroundStyle:(long long)arg1;	// IMP=0x000000010001733e
- (id)menu;	// IMP=0x00000001001bac1e
- (id)menuForEvent:(id)arg1;	// IMP=0x000000010007092e
@property(readonly, nonatomic) double idealWidth;
- (void)setAddMailboxButtonTarget:(id)arg1;	// IMP=0x00000001001babac
- (void)setAddMailboxButtonAction:(SEL)arg1;	// IMP=0x00000001001bab60
- (void)showAddMailboxButton:(BOOL)arg1;	// IMP=0x00000001001baab8
- (void)setAlertTarget:(id)arg1;	// IMP=0x0000000100016391
- (void)setAlertAction:(SEL)arg1;	// IMP=0x0000000100016334
- (void)setRowSizeStyle:(long long)arg1;	// IMP=0x0000000100017529
- (void)showAlertIndicator:(BOOL)arg1 withState:(long long)arg2;	// IMP=0x0000000100018a2f
- (void)showBadge:(BOOL)arg1 withCount:(unsigned long long)arg2 animated:(BOOL)arg3;	// IMP=0x0000000100016b4c
- (void)viewDidChangeEffectiveAppearance;	// IMP=0x00000001001ba9d2
- (void)_updateImage;	// IMP=0x000000010001737f
- (void)prepareForReuse;	// IMP=0x0000000100028717
- (void)_mailboxOutlineItemViewCommonInit;	// IMP=0x0000000100015f3d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001001ba98b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100015ede

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
