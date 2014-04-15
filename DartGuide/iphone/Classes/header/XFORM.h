//
//  PROTO.h
//  PROTO
//
//  Created by 바다 홍 on 10. 2. 23..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EditingViewController.h"
#import "CustomPickerDataSource.h"
#import "PROTO.h"
#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import "HPGrowingTextView.h"
#import "ECSlidingViewController.h"

@class XButton,XSegment;
#if __IPHONE_OS_VERSION_MAX_ALLOWED > 32000
@interface XFORM : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate,MFMessageComposeViewControllerDelegate,ABPeoplePickerNavigationControllerDelegate,EKEventEditViewDelegate,ABNewPersonViewControllerDelegate,UIWebViewDelegate,XEventReceiver,UITableViewDelegate,UISearchBarDelegate,UIPickerViewDelegate,ModalManager,UITextFieldDelegate,HPGrowingTextViewDelegate,UIScrollViewDelegate,UIAlertViewDelegate,UIActionSheetDelegate,PropertyEditing>{
#endif	
#if __IPHONE_OS_VERSION_MAX_ALLOWED <= 32000
	@interface XFORM : UIViewController <UINavigationControllerDelegate, MFMessageComposeViewControllerDelegate,ABPeoplePickerNavigationControllerDelegate,EKEventEditViewDelegate,ABNewPersonViewControllerDelegate,UIWebViewDelegate,XEventReceiver,UITableViewDelegate,UISearchBarDelegate,UIPickerViewDelegate,ModalManager,UITextFieldDelegate,HPGrowingTextViewDelegate,UIScrollViewDelegate,UIAlertViewDelegate,UIActionSheetDelegate,PropertyEditing>{
#endif	
	NSDictionary *personPickerDelegateAction; 
	NSDictionary *folder; 
        ECSlidingViewController *slidingViewController; 
	CGRect viewFrame;
        int myIndex;
	NSMutableArray *xlist; 
	int actionCounter; 
	NSMutableDictionary *imagePickerParameter;	
	NSMutableDictionary *currentRecord;	
	NSString *plistUrl;
	NSString *landscapeUrl;
	NSString *portraitUrl;
	NSDictionary *plist;	
	NSString *entityUrl;
	NSDictionary *entity;	
	NSDictionary *extra;
	NSMutableDictionary *lData;
	UIWebView *document;
    UIColor *contentBgColor;

    UIToolbar  *navigationBar;
    UIView *contentView;
	UIActivityIndicatorView *activityIndicator;
	UITextView *activityIndicatorBack;
	UIPopoverController *popoverController;
	UIViewController *popoverManager;
	NSMutableDictionary *dataProvider;
	NSMutableDictionary *dataProviderOrigin;
	NSMutableData *xmlData;		
	NSMutableDictionary *objects;
	NSString *xmlUrl;	
	NSMutableString *currentParsedCharacterData;
	NSURLConnection *xmlFeedConnection;	
	BOOL viewAppeared;
	BOOL gatherData;
	BOOL gatherRecord;
	BOOL accumulatingParsedCharacterData;
	BOOL didAbortParsing;
	NSMutableArray *currentParseBatch;		
	NSObject *parent;
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    NSMutableArray *viewControllers;
    NSMutableArray *viewDatas;
    BOOL pageControlUsed;	
	id <ModalManager> modalController;	
	UIDatePicker *datePicker;
	UIPickerView *pickerView;
	UIToolbar *pickerToolbar;
	NSDictionary *landscapeLayout;
	NSMutableDictionary *portraitLayout;
	NSMutableDictionary *repeatActionNames;
	UIActionSheet *pickerViewPopup;
	NSDictionary *pickerInfo;
        UITextView *disableView;
        int disableTouchCount;
	CustomPickerDataSource* customPickerDataSource;
	UIToolbar				*toolbar;	// created programmatically, not in IB
	UIView *titleView;
	UINavigationController *myNavigator;
	UIViewController *nextViewController;	
    UIViewController *underRightViewController;	
    UIViewController *underLeftViewController;	
	//UIViewController *waitController;	
	CGPoint gestureStartPoint;
	CGRect gestureStartFrame;
	BOOL horizontalDraggable;
	BOOL verticalDraggable;
	BOOL syncronizeAction;
	BOOL afterLoad;
	int orientation;
	BOOL disableEvent;	
    BOOL inBatch;
	BOOL interrupted;
		BOOL processingManager;
	NSAutoreleasePool *downloadAndParsePool;
}
	-(void)freeLargeComponents;
	-(void)processManagerResponse:(XMLPROP *) xmlProp;
    - (void) disableTouchEvent;
    - (void) enableTouchEvent;
    -(void) startTouchEvent:(NSDictionary *)dict;
    - (void) disableTouchEventReal;
    - (void) enableTouchEventReal;
    -(void) waitTouchEvent;
-(void) processDelayedAction:(NSDictionary *)taction;
-(void)checkOrientation:(NSDictionary *)object;
-(id) initExtra:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData;
-(UIView *)selectCustomView:(CGRect) frame;
-(void) repeatAction:(NSMutableDictionary *)action;
-(NSObject *)getImport:(NSObject *)data source:(NSDictionary *)source flag:(BOOL)flag;
-(NSObject *)getDict:(NSDictionary *)source key:(NSString *)key;
-(void)showImagePicker:(NSDictionary*)dict;	
-(NSObject *)applyTemplate:(NSObject *)target  record:(NSDictionary *)record;
-(void) setObjectValues:(NSDictionary *)values;
-(NSString *)testViewConditions:(NSString *)viewConditions  record:(NSDictionary *)record;
-(BOOL)testViewCondition:(NSString *)viewCondition  record:(NSDictionary *)record;
-(void) refreshData:(NSDictionary *)record;
-(void) showPicker:(NSDictionary*)dict;
-(void) showDatePicker:(NSDictionary*)dict;
-(void )removeView:(UIView *)sview;
-(void)delayAction:(NSObject *)dummy;
-(NSObject *)applyAllVariables:(NSObject *)target  record:(NSDictionary *)record flag:(BOOL)flag;
-(void)processOnDidLoadAction:(NSDictionary *)header;
-(void)sendOutlet:(NSDictionary *)params;
-(void) reloadWideForm:(NSString *)url;
-(void)processActivityResult:(NSDictionary *)ret;
-(void)replaceObjectLandscape;
-(void) checkAllClassLoaded:(NSDictionary *)dict;
-(void )removeController:(UIViewController *)sview;

    @property int myIndex;
@property int orientation;
@property int actionCounter;	
@property CGRect viewFrame;	
@property BOOL afterLoad;
@property BOOL horizontalDraggable;
@property BOOL verticalDraggable;
@property BOOL viewAppeared;
@property BOOL disableEvent;
@property BOOL interrupted;
@property BOOL processingManager;
@property (nonatomic, retain)     ECSlidingViewController *slidingViewController; 
@property CGPoint gestureStartPoint;
@property CGRect gestureStartFrame;
@property (nonatomic, retain) UIToolbar *navigationBar;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIViewController *nextViewController;
@property (nonatomic, retain) UIViewController *underRightViewController;
@property (nonatomic, retain) UIViewController *underLeftViewController;
//	@property (nonatomic, retain) UIViewController *waitController;
@property (nonatomic, retain) NSMutableDictionary *imagePickerParameter;	
@property (nonatomic, retain) NSMutableDictionary *lData;	
@property (nonatomic, retain) UIViewController *popoverManager;
@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic, retain) NSDictionary *personPickerDelegateAction;
@property (nonatomic, retain) NSDictionary *landscapeLayout;
@property (nonatomic, retain) NSMutableDictionary *portraitLayout;
@property (nonatomic, retain) UITextView *activityIndicatorBack;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UINavigationController *myNavigator;
@property (nonatomic, retain) id <ModalManager>  modalController;
@property (nonatomic, retain) UIWebView *document;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (nonatomic, retain) NSMutableArray *viewControllers;
@property (nonatomic, retain) NSMutableArray *viewDatas;
@property (nonatomic, retain) NSObject *parent;
@property (nonatomic, retain) UIColor *contentBgColor;

@property (nonatomic, retain) NSMutableArray *currentParseBatch;
@property (nonatomic, retain) NSMutableData *xmlData;
@property (nonatomic, retain) NSURLConnection *xmlFeedConnection;
@property (nonatomic, retain) NSMutableDictionary *currentRecord;
@property (nonatomic, retain) NSMutableString *currentParsedCharacterData;
@property (nonatomic, retain) CustomPickerDataSource* customPickerDataSource;
@property (nonatomic, retain) NSMutableDictionary *dataProvider;
@property (nonatomic, retain) NSMutableDictionary *dataProviderOrigin;
@property (nonatomic, retain) NSDictionary *pickerInfo;
@property (nonatomic, retain) NSDictionary *extra;
@property (nonatomic, retain) UIDatePicker *datePicker;
	
@property (nonatomic, retain) NSMutableDictionary *objects;
@property (nonatomic, retain) NSString *plistUrl;
@property (nonatomic, retain) NSString *landscapeUrl;
@property (nonatomic, retain) NSString *portraitUrl;
@property (nonatomic, retain) NSDictionary *plist;
@property (nonatomic, retain) NSString *entityUrl;
@property (nonatomic, retain) NSDictionary *entity;
@property (nonatomic, retain) NSString *xmlUrl;
@property (nonatomic, retain) UIView *titleView;
@property (nonatomic, retain) UIToolbar				*toolbar;	// created programmatically, not in IB
@property (nonatomic, retain) NSDictionary *folder; 
@property (nonatomic, retain) NSMutableArray *xlist;
-(void)doTextAction:(NSDictionary *) param;
- (void) responseLoadData:(NSDictionary *)ret;
- (void)processHeadAction:(NSDictionary *)head;
    -(void)processSequence:(NSObject *)values;
- (void)resignResponder;
- (void) doAfterLoadData;
- (void) refreshLoadData:(NSDictionary *)data;
- (void) afterLoadData:(NSDictionary *)data;
- (BOOL)evaluateValid:(NSArray *)validTest sender:(id)sender action:(NSDictionary *)action;
- (NSObject *)replaceVariables:(NSString *)target record:(NSDictionary *)record;
- (NSObject *)applyAllVariables:(NSObject *)target  record:(NSDictionary *)record;
- (void)addObjectToPanel:(UIView *)panel obj:(NSObject *)obj forKey:(NSString *)key;
	
- (NSObject *)getTargetValue:(NSString *)valueForKey record:(NSDictionary *)record;
- (NSObject *) getObjectValue:(NSObject *)value;
- (void) applyDataToTarget:(NSString *)objName withObject:(NSObject *)objValue;
- (void) applyDataToObject:(NSDictionary *)record;
- (NSString *) makeCurRecordScript;
- (void)sendEvent:(NSDictionary *)data;
- (void)refreshData;
- (NSDictionary *)applyObjectDatas:(NSDictionary *)bundle;
- (BOOL)cancelPicker:(id)sender;
- (BOOL)closePicker:(id)sender;
- (BOOL)cancelDatePicker:(id)sender;
- (BOOL)closeDatePicker:(id)sender;
- (void)switchaction:(id)sender;
- (UINavigationController *)getNavigator:(NSString *)path;
- (void)parseXmlData:(NSData *)data;
- (id)initWithURL:(NSString *)url;
- (id)initWithExtra:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData;
- (id)initWithFrame:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData frame:(CGRect)frame;
- (void)action:(id)sender;
- (void)segmentaction:(id)sender;
- (BOOL)processAction:(NSDictionary *)action sender:(id)sender;
	
- (void)displayObject:(UIView *)view layout:(NSDictionary *)nsdict selector:(SEL)selector target:(id)target record:(NSMutableDictionary *)record ;
- (void)handleError:(NSError *)error;
- (void)changePage:(id)sender;
- (void)loadScrollViewWithPage:(int)page;
    
@end
