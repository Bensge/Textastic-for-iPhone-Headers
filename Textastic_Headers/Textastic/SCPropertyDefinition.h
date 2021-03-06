/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class SCPropertyAttributes, NSString;

__attribute__((visibility("hidden")))
@interface SCPropertyDefinition : NSObject {
	int dataType;
	BOOL dataReadOnly;
	NSString* name;
	NSString* title;
	int type;
	BOOL required;
	BOOL autoValidate;
	SCPropertyAttributes* attributes;
}
@property(assign, nonatomic) BOOL dataReadOnly;
@property(assign, nonatomic) int dataType;
@property(assign, nonatomic) BOOL autoValidate;
@property(assign, nonatomic) BOOL required;
@property(retain, nonatomic) SCPropertyAttributes* attributes;
@property(assign, nonatomic) int type;
@property(copy, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) NSString* name;
+(id)definitionWithName:(id)name title:(id)title type:(int)type;
+(id)definitionWithName:(id)name;
-(void)dealloc;
-(id)initWithName:(id)name title:(id)title type:(int)type;
-(id)initWithName:(id)name;
@end

