//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCPayTouchLockVerifyLogic;

@protocol WCPayTouchLockVerifyLogicDelegate <NSObject>
- (void)touchLockVerifyCancel:(WCPayTouchLockVerifyLogic *)arg1;
- (void)touchLockVerifySuccess:(WCPayTouchLockVerifyLogic *)arg1;

@optional
- (_Bool)needBlockUntilVerified:(WCPayTouchLockVerifyLogic *)arg1;
@end

