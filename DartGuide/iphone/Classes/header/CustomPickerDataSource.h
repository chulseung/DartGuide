/*
     File: CustomPickerDataSource.h
 Abstract: The data source for the Custom Picker that displays text and images.
  Version: 2.6
 
 Disclaimer: IMPORTANT:  This Apple software is supplied to you by Apple
 Inc. ("Apple") in consideration of your agreement to the following
 terms, and your use, installation, modification or redistribution of
 this Apple software constitutes acceptance of these terms.  If you do
 not agree with these terms, please do not use, install, modify or
 redistribute this Apple software.
 
 In consideration of your agreement to abide by the following terms, and
 subject to these terms, Apple grants you a personal, non-exclusive
 license, under Apple's copyrights in this original Apple software (the
 "Apple Software"), to use, reproduce, modify and redistribute the Apple
 Software, with or without modifications, in source and/or binary forms;
 provided that if you redistribute the Apple Software in its entirety and
 without modifications, you must retain this notice and the following
 text and disclaimers in all such redistributions of the Apple Software.
 Neither the name, trademarks, service marks or logos of Apple Inc. may
 be used to endorse or promote products derived from the Apple Software
 without specific prior written permission from Apple.  Except as
 expressly stated in this notice, no other rights or licenses, express or
 implied, are granted by Apple herein, including but not limited to any
 patent rights that may be infringed by your derivative works or by other
 works in which the Apple Software may be incorporated.
 
 The Apple Software is provided by Apple on an "AS IS" basis.  APPLE
 MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION
 THE IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS
 FOR A PARTICULAR PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND
 OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS.
 
 IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL
 OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION,
 MODIFICATION AND/OR DISTRIBUTION OF THE APPLE SOFTWARE, HOWEVER CAUSED
 AND WHETHER UNDER THEORY OF CONTRACT, TORT (INCLUDING NEGLIGENCE),
 STRICT LIABILITY OR OTHERWISE, EVEN IF APPLE HAS BEEN ADVISED OF THE
 POSSIBILITY OF SUCH DAMAGE.
 
 Copyright (C) 2009 Apple Inc. All Rights Reserved.
 
 */
#import <UIKit/UIKit.h>
@interface CustomPickerDataSource : NSObject <UIPickerViewDataSource, UIPickerViewDelegate>
{
	NSArray	*customPickerArray;
	int firstColumnWidth;
	int firstColumnHeight;
	int secondColumnWidth;
	int secondColumnHeight;
	int thirdColumnWidth;
	int thirdColumnHeight;
	int forthColumnWidth;
	int forthColumnHeight;
	int fifthColumnWidth;
	int fifthColumnHeight;
	int columnNum;
	NSDictionary *extra;
	NSMutableDictionary *firstDataProvider;
	NSMutableDictionary *secondDataProvider;
	NSMutableDictionary *thirdDataProvider;
	NSMutableDictionary *forthDataProvider;
	NSMutableDictionary *fifthDataProvider;
	NSString *firstTitleColumnName;
	NSString *firstDataColumnName;
	NSString *secondTitleColumnName;
	NSString *secondDataColumnName;
	NSString *thirdTitleColumnName;
	NSString *thirdDataColumnName;
	NSString *forthTitleColumnName;
	NSString *forthDataColumnName;
	NSString *fifthTitleColumnName;
	NSString *fifthDataColumnName;
	NSArray *firstList;
	NSArray *secondList;
	NSArray *thirdList;
	NSArray *forthList;
	NSArray *fifthList;
	NSMutableDictionary *selectedData;
	NSDictionary *initData;
	NSString *objectKey;
	UIWebView *document;
	int firstInitRow;
	int secondInitRow;
	int thirdInitRow;
	int forthInitRow;	
	int fifthInitRow;	
}
- (id)initData:(NSDictionary *)action extra:(NSDictionary *)ext document:(UIWebView *)doc record:(NSDictionary *)record targetObject:(NSObject *)targetObject;
- (id)initData:(NSDictionary *)action extra:(NSDictionary *)ext document:(UIWebView *)doc;
- (int)findRow:(NSArray *)list title:(NSString *)title data:(NSString *)data;
@property int firstInitRow;
@property int secondInitRow;
@property int thirdInitRow;
@property int forthInitRow;	
@property int fifthInitRow;	
@property (nonatomic, retain) UIWebView *document;
@property (nonatomic, retain) NSMutableDictionary *firstDataProvider;
@property (nonatomic, retain) NSMutableDictionary *secondDataProvider;
@property (nonatomic, retain) NSMutableDictionary *thirdDataProvider;
@property (nonatomic, retain) NSMutableDictionary *forthDataProvider;
@property (nonatomic, retain) NSMutableDictionary *fifthDataProvider;
@property (nonatomic, retain) NSArray *firstList;
@property (nonatomic, retain) NSArray *secondList;
@property (nonatomic, retain) NSArray *thirdList;
@property (nonatomic, retain) NSArray *forthList;
@property (nonatomic, retain) NSArray *fifthList;
@property (nonatomic, retain) NSMutableDictionary *selectedData;
@property (nonatomic, retain) NSDictionary *extra;
@property (nonatomic, retain) NSDictionary *initData;
@property (nonatomic, retain) NSString *objectKey;
@property (nonatomic, retain) NSString *firstTitleColumnName;
@property (nonatomic, retain) NSString *firstDataColumnName;
@property (nonatomic, retain) NSString *secondTitleColumnName;
@property (nonatomic, retain) NSString *secondDataColumnName;
@property (nonatomic, retain) NSString *thirdTitleColumnName;
@property (nonatomic, retain) NSString *thirdDataColumnName;
@property (nonatomic, retain) NSString *forthTitleColumnName;
@property (nonatomic, retain) NSString *forthDataColumnName;
@property (nonatomic, retain) NSString *fifthTitleColumnName;
@property (nonatomic, retain) NSString *fifthDataColumnName;
@end
