/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import <Foundation/NSMutableDictionary.h>
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSFastEnumeration.h"


__attribute__((visibility("hidden")))
@interface JKDictionary : NSMutableDictionary <NSCopying, NSMutableCopying, NSFastEnumeration> {
	unsigned count;
	unsigned capacity;
	unsigned mutations;
	JKHashTableEntry* entry;
}
+(id)allocWithZone:(NSZone*)zone;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(void)removeObjectForKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(id)keyEnumerator;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)getObjects:(id*)objects andKeys:(id*)keys;
-(id)objectForKey:(id)key;
-(unsigned)count;
-(void)dealloc;
@end

