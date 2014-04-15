//
//  HPTextView.h
//
//  Created by Hans Pinckaers on 29-06-10.
//
//	MIT License
//
//	Copyright (c) 2011 Hans Pinckaers
//
//	Permission is hereby granted, free of charge, to any person obtaining a copy
//	of this software and associated documentation files (the "Software"), to deal
//	in the Software without restriction, including without limitation the rights
//	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//	copies of the Software, and to permit persons to whom the Software is
//	furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//	THE SOFTWARE.

#import <UIKit/UIKit.h>

@class HPGrowingTextView;
@class HPTextViewInternal;

@protocol HPGrowingTextViewDelegate
@optional
- (BOOL)textViewShouldBeginEditing:(HPGrowingTextView *)textView;
- (BOOL)textViewShouldEndEditing:(HPGrowingTextView *)textView;
- (void)textViewDidChange:(HPGrowingTextView *)textView;

- (void)textViewDidBeginEditing:(HPGrowingTextView *)textView;
- (void)textViewDidEndEditing:(HPGrowingTextView *)textView;

- (BOOL)textView:(HPGrowingTextView *)textView shouldChangeTextInRange:(NSRange)range replacementText:(NSString *)string;
- (void)growingTextViewDidChange:(HPGrowingTextView *)textView;

- (void)textView:(HPGrowingTextView *)textView willChangeHeight:(float)height;
- (void)textView:(HPGrowingTextView *)textView didChangeHeight:(float)height;

- (void)textViewDidChangeSelection:(HPGrowingTextView *)textView;
- (BOOL)textViewShouldReturn:(HPGrowingTextView *)textView;
@end


@interface HPGrowingTextView : UIView <UITextViewDelegate> {
	HPTextViewInternal *internalTextView;	
	
	int minHeight;
	int maxHeight;
	
	//class properties
	int maxNumberOfLines;
	int minNumberOfLines;
	
	BOOL animateHeightChange;
	
	//uitextview properties
	NSObject <HPGrowingTextViewDelegate> *delegate;
	NSString *text;
	UIFont *font;
	UIColor *textColor;
    UIColor *backgroundColor;
	UITextAlignment textAlignment; 
	NSRange selectedRange;
	BOOL editable;
	UIDataDetectorTypes dataDetectorTypes;
	UIReturnKeyType returnKeyType;
    UIKeyboardType keyboardType;
    UIEdgeInsets contentInset;
}

//real class properties
@property int maxNumberOfLines;
@property int minNumberOfLines;
@property BOOL animateHeightChange;
@property (retain) UITextView *internalTextView;	


//uitextview properties
@property(assign) NSObject<HPGrowingTextViewDelegate> *delegate;
@property(nonatomic,assign) NSString *text;
@property(nonatomic,assign) UIFont *font;
@property(nonatomic,assign) UIColor *textColor;
@property(nonatomic,assign) UIColor *backgroundColor;
@property(nonatomic) UITextAlignment textAlignment;    // default is UITextAlignmentLeft
@property(nonatomic) NSRange selectedRange;            // only ranges of length 0 are supported
@property(nonatomic,getter=isEditable) BOOL editable;
@property(nonatomic) UIDataDetectorTypes dataDetectorTypes __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_0);
@property (nonatomic) UIReturnKeyType returnKeyType;
@property (nonatomic) UIKeyboardType keyboardType;
@property (assign) UIEdgeInsets contentInset;

//uitextview methods
//need others? use .internalTextView
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;

- (BOOL)hasText;
- (void)scrollRangeToVisible:(NSRange)range;

@end
