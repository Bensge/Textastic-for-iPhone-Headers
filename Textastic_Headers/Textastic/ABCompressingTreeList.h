/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "Textastic-Structs.h"

@class ABCompressingTreeListNode;

@interface ABCompressingTreeList : NSObject {
	id _isEqualBlock;
	ABCompressingTreeListNode* _root;
}
@property(retain, nonatomic) ABCompressingTreeListNode* root;
-(id)description;
-(void)appendDescriptionOfNode:(id)node toString:(id)string withIndent:(unsigned)indent;
-(void)rightRotateNode:(id)node;
-(void)leftRotateNode:(id)node;
-(void)replaceNode:(id)node with:(id)with;
-(unsigned)indexOfObject:(id)object;
-(void)removeAllObjects;
-(void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
-(void)removeObjectAtIndex:(unsigned)index;
-(void)addObject:(id)object;
-(void)insertObject:(id)object atIndex:(unsigned)index;
-(id)objectAtIndex:(unsigned)index;
-(unsigned)count;
-(id)nodeAtIndex:(unsigned*)index;
-(id)siblingOfNode:(id)node parentNode:(id)node2;
-(id)siblingOfNode:(id)node;
-(void)fixTreeOnDeleteAtNode:(id)node parentNode:(id)node2;
-(void)removeNode:(id)node;
-(void)fixTreeOnInsertAtNode:(id)node;
-(void)updateAugmentedDataOfNode:(id)node;
-(void)insertNode:(id)node rightOf:(id)of;
-(void)insertNode:(id)node leftOf:(id)of;
-(void)insertNode:(id)node before:(id)before;
-(void)replaceObjectsInRange:(NSRange)range withObject:(id)object;
-(void)removeObjectsInRange:(NSRange)range;
-(void)insertObject:(id)object inRange:(NSRange)range;
-(void)dealloc;
-(id)initWithBlock:(id)block;
-(id)init;
@end

