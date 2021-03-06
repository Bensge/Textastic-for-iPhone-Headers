/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Textastic-Structs.h"
#import "UIKeyInput.h"

@class NSDictionary, UITextPosition, UIView, UITextRange;
@protocol UITextInputDelegate, UITextInputTokenizer;

@protocol UITextInput <UIKeyInput>
@optional
@property(assign, nonatomic) int selectionAffinity;
@property(readonly, assign, nonatomic) UIView* textInputView;
@required
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;
@property(readonly, assign, nonatomic) UITextPosition* endOfDocument;
@property(readonly, assign, nonatomic) UITextPosition* beginningOfDocument;
@property(copy, nonatomic) NSDictionary* markedTextStyle;
@property(readonly, assign, nonatomic) UITextRange* markedTextRange;
@property(copy) UITextRange* selectedTextRange;
-(id)characterRangeAtPoint:(CGPoint)point;
-(id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;
-(id)closestPositionToPoint:(CGPoint)point;
-(CGRect)caretRectForPosition:(id)position;
-(CGRect)firstRectForRange:(id)range;
-(void)setBaseWritingDirection:(int)direction forRange:(id)range;
-(int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;
-(id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;
-(id)positionWithinRange:(id)range farthestInDirection:(int)direction;
-(int)offsetFromPosition:(id)position toPosition:(id)position2;
-(int)comparePosition:(id)position toPosition:(id)position2;
-(id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;
-(id)positionFromPosition:(id)position offset:(int)offset;
-(id)textRangeFromPosition:(id)position toPosition:(id)position2;
-(void)unmarkText;
-(void)setMarkedText:(id)text selectedRange:(NSRange)range;
-(void)replaceRange:(id)range withText:(id)text;
-(id)textInRange:(id)range;
@optional
-(void)dictationRecognitionFailed;
-(void)dictationRecordingDidEnd;
-(void)insertDictationResult:(id)result;
-(int)characterOffsetOfPosition:(id)position withinRange:(id)range;
-(id)positionWithinRange:(id)range atCharacterOffset:(int)characterOffset;
-(id)textStylingAtPosition:(id)position inDirection:(int)direction;
@end

