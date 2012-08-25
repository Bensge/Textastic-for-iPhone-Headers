/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSURL.h>


@interface NSURL (QueryComponents)
-(id)queryComponents;
@end

@interface NSURL (MPURLEscapingAdditions)
-(id)stringByAddingURIPercentEscapesUsingEncoding:(unsigned)encoding;
@end

@interface NSURL (MPURLParameterAdditions)
-(BOOL)domainMatches:(id)matches;
-(id)absoluteNormalizedString;
-(id)urlByRemovingQuery;
-(id)urlByAddingParameterDictionary:(id)dictionary;
-(id)urlByAddingParameters:(id)parameters;
@end
