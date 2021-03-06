/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString, NSMutableDictionary, FMDatabase, FMStatement;

__attribute__((visibility("hidden")))
@interface FMResultSet : NSObject {
	FMDatabase* _parentDB;
	FMStatement* _statement;
	NSString* _query;
	NSMutableDictionary* _columnNameToIndexMap;
	BOOL _columnNamesSetup;
}
@property(retain) FMStatement* statement;
@property(retain) NSMutableDictionary* columnNameToIndexMap;
@property(retain) NSString* query;
+(id)resultSetWithStatement:(id)statement usingParentDatabase:(id)database;
-(void)setParentDB:(id)db;
-(id)columnNameForIndex:(int)index;
-(id)objectForColumnName:(id)columnName;
-(id)objectForColumnIndex:(int)columnIndex;
-(const char*)UTF8StringForColumnName:(id)columnName;
-(const char*)UTF8StringForColumnIndex:(int)columnIndex;
-(BOOL)columnIsNull:(id)null;
-(BOOL)columnIndexIsNull:(int)null;
-(id)dataNoCopyForColumnIndex:(int)columnIndex;
-(id)dataNoCopyForColumn:(id)column;
-(id)dataForColumnIndex:(int)columnIndex;
-(id)dataForColumn:(id)column;
-(id)dateForColumnIndex:(int)columnIndex;
-(id)dateForColumn:(id)column;
-(id)stringForColumn:(id)column;
-(id)stringForColumnIndex:(int)columnIndex;
-(double)doubleForColumnIndex:(int)columnIndex;
-(double)doubleForColumn:(id)column;
-(BOOL)boolForColumnIndex:(int)columnIndex;
-(BOOL)boolForColumn:(id)column;
-(long long)longLongIntForColumnIndex:(int)columnIndex;
-(long long)longLongIntForColumn:(id)column;
-(long)longForColumnIndex:(int)columnIndex;
-(long)longForColumn:(id)column;
-(int)intForColumnIndex:(int)columnIndex;
-(int)intForColumn:(id)column;
-(int)columnIndexForName:(id)name;
-(BOOL)hasAnotherRow;
-(BOOL)next;
-(id)resultDict;
-(void)kvcMagic:(id)magic;
-(void)setupColumnNames;
-(int)columnCount;
-(void)close;
-(void)dealloc;
-(void)finalize;
@end

