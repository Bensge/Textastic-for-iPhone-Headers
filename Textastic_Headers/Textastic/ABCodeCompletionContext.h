/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSArray, OnigRegexp, ABScopeSelector;

@interface ABCodeCompletionContext : NSObject {
	ABScopeSelector* _scopeSelector;
	OnigRegexp* _pattern;
	NSArray* _completionSetNames;
	unsigned _completionCaptureIndex;
}
@property(retain, nonatomic) NSArray* completionSetNames;
@property(assign, nonatomic) unsigned completionCaptureIndex;
@property(retain, nonatomic) OnigRegexp* pattern;
@property(retain, nonatomic) ABScopeSelector* scopeSelector;
-(void)dealloc;
@end
