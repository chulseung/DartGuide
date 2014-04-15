//
//  PROTO.h
//  PROTO
//
//  Created by 바다 홍 on 10. 2. 23..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XBarButtonItem.h"
#import "XTextField.h"
#import "XPdfViewer.h"
#import <UIKit/UIKit.h>
#import "ModalManager.h"
#import "XSearchBar.h"
#import "XLabel.h"
#import "XTextView.h"
#import "PROTOAppDelegate.h"
#import "XMLPROP.h"
#import "EventManager.h"
#import "NSDictionary+helpers.h"
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import <EventKit/EventKit.h>
#import <EventKitUI/EventKitUI.h>
#import <QuartzCore/CAGradientLayer.h>
#import <MessageUI/MFMessageComposeViewController.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <net/if.h>
#include <net/if_dl.h>
#include <arpa/inet.h>
#include <ifaddrs.h>
#import "XAdapter.h"
#if __IPHONE_OS_VERSION_MAX_ALLOWED > 32000
#import <AssetsLibrary/AssetsLibrary.h>
#endif
#define PI 3.141592
#define   DEG_TO_RAD(degrees)  ((M_PI * degrees)/ 180)
#define DOCUMENTS_FOLDER [NSHomeDirectory() stringByAppendingPathComponent:@"Documents"]
#define kStdButtonWidth		106.0
#define kStdButtonHeight	40.0
#define kViewTag			1		// for tagging our embedded controls for removal at cell recycle time



@class ROOTVIEWCONTROLLER,XButton,XSegment,XPageControl,XSlider,XSwitch,XWebView;
typedef enum {
	UIViewControlerAnimationTransitionNone = 0,
	UIViewControlerAnimationTransitionFade = 6,
	UIViewControlerAnimationTransitionPushFromTop = 7,
	UIViewControlerAnimationTransitionPushFromRight = 1,
	UIViewControlerAnimationTransitionPushFromBottom = 3,
	UIViewControlerAnimationTransitionPushFromLeft = 2,
	UIViewControlerAnimationTransitionSlide = 8,
	UIViewControlerAnimationTransitionReveal = 9,
	UIViewControlerAnimationTransitionFlipFromLeft = 10,
	UIViewControlerAnimationTransitionFlipFromRight = 11
} UIViewControllerAnimationTransition;
#if __IPHONE_OS_VERSION_MAX_ALLOWED > 32000
typedef void (^ALAssetsLibraryAssetForURLResultBlock)(ALAsset *asset);
typedef void (^ALAssetsLibraryAccessFailureBlock)(NSError *error);
#endif


@protocol SubstitutableDetailViewController
- (void)showRootPopoverButtonItem:(UIBarButtonItem *)barButtonItem;
- (void)invalidateRootPopoverButtonItem:(UIBarButtonItem *)barButtonItem;
@end

@interface UIViewController(extended)
- (void)dismissModalViewControllerWithTransition:(UIViewControllerAnimationTransition)transition;
- (void)presentModalViewController:(id)viewController withTransition:(UIViewControllerAnimationTransition)transition;
@end


@interface PROTO : NSObject{
    PROTOAppDelegate *delegate;
}

@property (nonatomic, retain) PROTOAppDelegate *delegate;

+(PROTO *)sharedObject;
+(BOOL)getBool:(NSDictionary *)dict valueForKey:(NSString *)valueForKey def:(BOOL)def;
+(BOOL)isKindOfClass:(id)object cls:(NSString *)cls;
+(void) flushNavigator:(UINavigationController *)controller;
+(NSMutableDictionary *)getPlist:(NSString *)data range:(NSString *)range;
+(NSMutableArray *) makePlist:(NSString *) data;
+(NSMutableDictionary *) loadCvsPlist:(NSString *)url range:(NSString *)range flag:(BOOL)flag;
+(void)NSLog:(NSString *)addr;
+(void)postLog:(NSString *)addr body:(NSString *)body;
+(NSString*)getWiFiIPAddress;
+(NSString *)postDeviceInfo:(NSString *)addr;
+(void)postStateInfo:(NSString *)addr targetObject:(NSObject *)targetObject;
+(void)postActionInfo:(NSString *)addr action:(NSDictionary *)action targetObject:(NSObject *)targetObject;
+(void)postData:(NSString *)addr body:(NSString *)body url:(NSString *)url;
+(NSString *)getParam:(NSString *)path record:(NSDictionary *)record targetObject:(NSObject *)targetObject flag:(BOOL)flag;
+(CGPoint)getPoint:(NSDictionary *)dict valueForKey:(NSString *)valueForKey;
+(CAGradientLayer *)getGradient:(NSDictionary *)dict objectForKey:(NSString *)valueForKey;
+(UIView *)getExtendedView:(NSDictionary *)dict record:(NSDictionary *)record parent:(id)parent;
+(UIView *)getCustomView:(NSDictionary *)dict record:(NSDictionary *)record parent:(id)parent;
+(void) log:(NSString *)val;
+(void)PushController:(UIViewController *)topView;
+(void) moveObjectPortrait:(UIView *)view objects:(NSDictionary *)objects layout:(NSDictionary *)nsdict targetObject:(NSObject *)targetObject;

+(void) moveObjectLandscape:(UIView *)view objects:(NSDictionary *)objects layout:(NSDictionary *)nsdict targetObject:(NSObject *)targetObject;
+(NSString *)getDateString:(NSDate *)date format:(NSString *)format;
+(NSDate *)getDateFromString:(NSString *)date format:(NSString *)format;
#if __IPHONE_OS_VERSION_MAX_ALLOWED > 32000
+(void)findImage:(NSString *)mediaurl view:(UIImageView *)view;
#endif
+(void) flushAllControllers:(UINavigationController *)controller;
+ (NSString *) digestString:(NSString *)hashkey;
+(void) moveObject:(UIView *)view objects:(NSDictionary *)objects layout:(NSDictionary *)nsdict;
+(NSString *)makeVariableBlank:(NSString *)target;
+(void)downloadAndParse:(XMLPROP *) xmlProp;
+(CGSize)getSize:(NSDictionary *)dict objectForKey:(NSString *)valueForKey;
+(XPdfViewer *)makePdfViewer:(NSDictionary*) dict bundle:(NSDictionary *)extra;
+(NSURL *) cachedURL:(NSString *)url;
+(BOOL)testCondition:(NSDictionary *)param;
+(NSObject *)replaceObject:(NSDictionary *)source target:(NSString *)target document:(UIWebView *)document;
+(NSString *) makeParameter2:(NSDictionary *)nsdict;
+(int)getInt:(NSDictionary *)dict valueForKey:(NSString *)valueForKey;
+(float)getReal:(NSDictionary *)dict valueForKey:(NSString *)valueForKey def:(float)def;
+(float)getReal:(NSDictionary *)dict valueForKey:(NSString *)valueForKey;
+(void)sendEvent:(NSDictionary *)data navigator:(UINavigationController *)navigator;
+(NSDictionary *)getGlobalStyle:(NSString *)valueForKey;
+(NSString *)getGlobalValue:(NSString *)key;
+(NSDictionary *)loadAndDecode:(NSString *)url;
+(void) saveAs:(NSString *)key data:(NSDictionary *)data;
+(id)setCustomProp:(id)obj prop:(NSDictionary *)dict;
+(NSDictionary *) getXmlData:(NSDictionary *)dataProvider;
+(NSDictionary *) getXmlData2:(NSDictionary *)dataProvider document:(UIWebView *)document;
+(NSMutableDictionary *) loadPlist:(NSString *)url flag:(BOOL)flag;
+(NSString *)cachedPath:(NSString *)url;
+(XTextField *)makeTextField:(NSDictionary*)dict delegate:(id)delegate;
+(NSString *) newPath:(NSString *)url;
+(NSDictionary *) mapData;
+(NSString *) loadString:(NSString *)url;

+(NSMutableDictionary *)applyVariables:(NSDictionary *)record bundle:(NSDictionary *)bundle;
+(NSString *) makeParameter:(NSDictionary *)nsdict;
+(NSMutableDictionary *) loadPlist:(NSString *)url;
+(NSMutableDictionary *) LoadPlist:(NSString *)url;
+(NSDictionary *) DisplayObject:(UIView *)view  entity:(NSDictionary *)entity layout:(NSDictionary *)nsdict selector:(SEL)selector target:(id)target;
+(void)downloadAsData:(NSString *)url path:(NSString *)path;
+(XSegment *)makeSegmentedControl:(NSDictionary*) dict  target:(id)target selector:(SEL)selector;
+(NSString *)makeDictParameter:(NSDictionary *)header prefix:(NSString *)prefix;
+(NSString *) newImagePath:(NSString *)url;
+(NSString *)base64EncodedString:(NSData *)data;
+(void) disableTouchEvent:(NSDictionary *)dict;
+(void) enableTouchEvent:(NSDictionary *)dict;
+(void) forceEnableTouchEvent:(NSDictionary *)dict;
+(XButton *)buttonWithTitle:(NSString *)title
                     target:(id)target
                   selector:(SEL)selector
                      frame:(CGRect)frame
                      image:(UIImage *)image
               imagePressed:(UIImage *)imagePressed
              darkTextColor:(BOOL)darkTextColor;
+(XButton *)buttonWithTitle2:	(NSString *)title
                      target:(id)target
                    selector:(SEL)selector
                       frame:(CGRect)frame
                       image:(UIImage *)image
                imagePressed:(UIImage *)imagePressed
               darkTextColor:(BOOL)darkTextColor;
+(NSIndexPath *)getIndexPath:(int)section col:(int)col;
+ (NSRange) getVariableStart:(NSString *)target start:(int)start idx:(unichar)idx;
+(UITableViewRowAnimation)rowAnimationEffect:(NSString *)effect;
+(NSString *)parseFormula:(NSString *)path;
+(NSString *)scanDirectory;
+(NSObject *)applyJSON:(NSObject *)target;
+(void)didStopNetworking;
+(float *)getRealArray:(NSString *)obj;
+(NSString *) dateFormatter:(NSDate *)date format:(NSString *)format;
+(NSDate *) makeDate:(int)year month:(int)month date:(int)date;
+(void)didStartNetworking;
+(NSDate *) parseDate:(NSString *)date format:(NSString *)format;
+(UIActivityIndicatorView *)makeActivityIndicator ;
+(NSObject *) getObjectValue:(NSObject *)value parent:(NSObject *)parent;
+(NSArray *) filterList:(NSArray *)ret filter:(NSString *)filter;
+(NSArray *) searchList:(NSArray *)ret filter:(NSString *)filter;
+(int)parseIndex:(NSString *)index list:(NSArray *)list;
+(void) logToConsole:(NSDictionary *)nsdict;
+(NSString *) PlistToXml:(NSDictionary *)nsdict;
+(NSString *) PlistToXml2:(NSDictionary *)nsdict indent:(NSString *)indent;

+(BOOL) preAction:(NSDictionary *)taction targetObject:(NSObject *)targetObject;
+(NSString *) plistToString:(NSDictionary *)nsdict;
+(void) getXmlData3:(NSDictionary *)dataProvider target:(id)target selector:(SEL)selector;
+(NSDictionary *)applyObjectDatas:(NSDictionary *)bundle targetObject:(NSObject *)targetObject;
+(BOOL)evaluateValid:(NSArray *)validTest sender:(id)sender action:(NSDictionary *)action targetObject:(NSObject *)targetObject;
+(XButton *)makeSimpleImageButton:(NSDictionary*)dict image:(UIImage *)image target:(id)target selector:(SEL)selector;
+ (NSObject *)applyTemplate:(NSObject *)target  record:(NSDictionary *)record targetObject:(NSObject *)targetObject;
+(int) getFirstIndexOfChar:(NSString *)target idx:(unichar)idx;
+(void)animateView:(UIView *)view objects:(NSDictionary *)objects lastView:(UIView *)lastView hideEffect:(NSDictionary *)hideEffect  parent:(id)parent;
+(void)replaceViews:(UIView *)view objects:(NSDictionary *)objects first:(UIView *)first second:(UIView *)second layout:(NSDictionary *)dict  parent:(id)parent;
+ (NSString *)testViewConditions:(NSString *)viewConditions  record:(NSDictionary *)record targetObject:(NSObject *)targetObject;
+(BOOL)testViewCondition:(NSString *)viewCondition  record:(NSDictionary *)record targetObject:(NSObject *)targetObject;
+(void) transObject2:(UIView *)view objects:(NSDictionary *)objects layout:(NSDictionary *)nsdict parent:(id)parent;
+(void) transObject:(UIView *)view objects:(NSDictionary *)objects layout:(NSDictionary *)nsdict;
//+(void)processHeadAction:(NSDictionary *)header navigator:(UINavigationController *)navigator;
+(void) moveRelative:(UIView *)view nsdict:(NSDictionary *)nsdict key:(NSString *)key  objects:(NSDictionary *)objects;
+(void) moveAllObjects:(UIView *)view layout:(NSDictionary *)nsdict objects:(NSDictionary *)objects;

+(void)halfAnimate:(float)duration  angle:(float)angle lastView:(UIView *)lastView aniEnd:(NSDictionary *)aniEnd;
+(UIColor *)parseColor:(NSString *)valueForKey;
+(float *)getRealArray:(NSDictionary *)dict objectForKey:(NSString *)valueForKey;
+(int *)getIntArray:(NSDictionary *)dict objectForKey:(NSString *)valueForKey;

+(NSDictionary *) DisplayObject2:(UIView *)view entity:(NSDictionary *)entity layout:(NSDictionary *)nsdict selector:(SEL)selector target:(id)target record:(NSDictionary *)record objects:(NSMutableDictionary *)objects targetObject:(NSObject *)targetObject;
+(NSDictionary *) DisplayObject2:(UIView *)view entity:(NSDictionary *)entity layout:(NSDictionary *)nsdict selector:(SEL)selector target:(id)target record:(NSDictionary *)record objects:(NSMutableDictionary *)objects;
+(void)setObjectValue:(UIView *)view entity:(NSDictionary *)entity layout:(NSDictionary *)nsdict record:(NSDictionary *)aDict;
+(void)setObjectValue:(UIView *)view entity:(NSDictionary *)entity layout:(NSDictionary *)nsdict record:(NSDictionary *)aDict objects:(NSDictionary *)objects;
+(void)setObjectValue:(UIView *)view entity:(NSDictionary *)entity layout:(NSDictionary *)nsdict record:(NSDictionary *)aDict objects:(NSDictionary *)objects targetObject:(NSObject *)targetObject;

+(void) setObjectValues:(NSDictionary *)values  targetObject:(NSObject *)targetObject;
+(CGRect)getRect:(NSDictionary *)dict objectForKey:(NSString *)valueForKey;
+(NSString *)toNumberFormat:(NSNumber *)number format:(NSString *)format;
+(NSObject *)applyAllVariables:(NSDictionary *)source target:(NSObject *)target;
+(NSObject *)applyAllVariables:(NSDictionary *)source target:(NSObject *)target document:(UIWebView *)document;
+(NSObject *)applyAllVariables:(NSObject *)target record:(NSDictionary *)record flag:(BOOL)flag targetObject:(NSObject *)targetObject;

+(NSDictionary *) propToHash:(NSString *)path;
+(int)getInt:(NSDictionary *)dict valueForKey:(NSString *)valueForKey def:(int)def;
+(NSObject *)replaceVariables:(NSDictionary *)source target:(NSString *)target;
+(UIToolbar *)createToolbarItems:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(UIColor *)getColor:(NSDictionary *)dict valueForKey:(NSString *)valueForKey def:(UIColor *)def;
+(UIColor *)getColor:(NSDictionary *)dict objectForKey:(NSString *)valueForKey;
+(UIColor *)getColor:(NSDictionary *)dict valueForKey:(NSString *)valueForKey;
+(UIColor *)getColor:(NSString *)value;
+ (float) calcurateBound:(NSDictionary *)nsdict record:(NSDictionary *)aDict targetObject:(NSObject *)targetObject;
+ (int) getVariableEnd:(NSString *)target start:(int)start;
+(id)getProp:(NSDictionary *)dict objectForKey:(NSString *)valueForKey def:(id)def;
+(id)getProp:(NSDictionary *)dict valueForKey:(NSString *)valueForKey;
+(id)getProp:(NSDictionary *)dict objectForKey:(NSString *)valueForKey;
+(id)getProp2:(NSDictionary *)dict valueForKey:(NSString *)valueForKey;
+(id)getProp3:(NSDictionary *)dict valueForKey:(NSString *)valueForKey;
+(XAdapter *) getAdapter:(NSDictionary *)action target:(id)targetObject  selector:(SEL)selector;
+(BOOL)evaluateFunction:(NSDictionary *)dict;
+(UIImage *)imageNamed:(NSObject *)path;
+(UIImageView *)makeImageView:(NSDictionary*) dict;
+(XTextView *)makeTextView:(NSDictionary*) dict;
+(NSString *)getTitleImage;
+(NSArray *)splitToken:(NSString *)source val:(NSString *)val;
+(BOOL)testString:(NSString *)value fromSet:(NSString *)fromSet;
+(NSString *) base64Encode:(NSString *)hashkey;
+(NSArray *)parseToken:(NSString *)path;
+(NSArray *)parseOption:(NSString *)path;
+(void)processSequence:(NSObject *)values targetObject:(NSObject *)targetObject record:(NSDictionary *)record;
+(void)pushViewController:(UINavigationController *)navigator controller:(UIViewController*)controller  animated:(BOOL)animated;
+(XButton *)makeGreyButton:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XButton *)makeImageButton:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XButton *)makeButton:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XLabel *)makeLabel:(NSDictionary*) dict;
+(XButton *)makeDetailDisclosureButton:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XButton *)makeInfoDarkButton:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XButton *)makeInfoLightButton:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XButton *)makeContactAddButton:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XButton *)makeRoundedButton:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(UIPickerView *)createPicker:(NSArray *)pickerViewArray;
+(UIDatePicker *)createDatePicker;
+(UIPickerView *)createCustomPicker;
+(NSString *) base64Decode:(NSString *)hashkey;
+(NSString *)base64DecodedString:(NSData *)data;
+(CGRect)pickerFrameWithSize:(CGSize)size;
+(NSObject *)makeParamToDict:(NSString *)val;
+(XSlider *)makeCustomSlider:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XSlider *)makeSlider:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XSwitch *)makeSwitch:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(XPageControl *)makePageControl:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
+(UIActivityIndicatorView *)makeProgressInd:(NSDictionary*)dict ;
+(UIProgressView *)makeProgressBar:(NSDictionary*)dict;
+(void) setObjectValues:(NSDictionary *)values;
+(XWebView *)makeWebView:(NSDictionary*) dict bundle:(NSDictionary *)extra;
+(NSString *)getValue:(NSDictionary *)dict key:(NSString *)key;
+(NSString *)getValueDef:(NSDictionary *)dict key:(NSString *)key def:(NSString *)def;
+(XSearchBar *)makeSearchBar:(NSDictionary*)dict delegate:(id)target;
+(void)makeActionSheet:(NSDictionary*) dict view:(UIView *)parent delegate:(id)target;
+(UIViewController *)gobackViewController:(UINavigationController *)navigator transitionType:(NSString *)transitionType;
+(void)makeAlert:(NSDictionary*) dict view:(UIView *)parent delegate:(id)target;
+(NSDateFormatter *)dateFormatter;
+(NSDictionary *)parsePlist:(NSString *)data;
+(NSString *)getBackground;
+(void)transViewController:(UINavigationController *)navigator controller:(UIViewController*)controller transitionType:(NSString *)transitionType;
+(NSString *)stringNamed:(NSString *)url;
+(void) applyHeaderLayout:(NSDictionary *)headerLayout entity:(NSDictionary *)entity navigator:(UIViewController *)navigator target:(id)target selector:(SEL)selector record:(NSDictionary *)record document:(UIWebView *)document;
+(NSObject *)getDict:(NSDictionary *)source key:(NSString *)key targetObject:targetObject;
+(NSObject *)getImport:(NSObject *)data source:(NSDictionary *)source;
+(NSObject *)getImport:(NSObject *)data source:(NSDictionary *)source flag:(BOOL)flag targetObject:(NSObject *)targetObject;
+(void)postActionInfo:(NSString *)addr ;
+(void)processMacro:(NSMutableDictionary *)target;
+(NSObject *)processString:(NSString *)target;
+(NSArray *)parseParameter:(NSString *)target;
+(void)checkTouchEvent:(NSDictionary *)dict;
+(CGPoint)rotatePoint:(float)length angle:(float)angle center:(CGPoint)center;
+(void)switchViews:(UIView *)view objects:(NSDictionary *)objects  first:(UIView *)first second:(UIView *)second layout:(NSDictionary *)dict  parent:(id)parent;
+(NSString *)extractNumber:(NSString *)path;
+(CGPoint)getPoint:(NSString *)data;
+(CGRect)getRect:(NSString *)data;
+ (PROTOAppDelegate *)getAppDel;
+ (NSString *) PlistToDict:(NSDictionary *)nsdict;


////////////////////////////////
+(NSDictionary *)processMacroPlus:(NSDictionary *)source object:(NSObject *)object seq:(NSString *) seq;
+(NSString *)pathForTemporaryFileWithPrefix:(NSString *)prefix ext:(NSString *)ext;
+(NSDictionary *)processMacroDict:(NSDictionary *)dict object:(NSObject *)object prefix:(NSString *) prefix;
+(NSString *)getMasked:(NSString *)value mask:(NSString *)mask del:(NSString *)del;
+(void)applyEventAction:(NSDictionary *)eventAction  eventRecord:(NSDictionary  *)eventRecord targetObject:(NSObject *)targetObject sender:(NSObject *)sender;
+(NSObject *)getObject:(NSObject *)targetObject selector:(SEL)selector;
+(void) goBack:(NSDictionary *)data targetObject:(UIViewController *)targetObject;
+(UIViewController *) makeController:(NSDictionary *)dict extra:(NSDictionary *)extra;
+(NSObject *)getObject:(NSObject *)targetObject selector:(SEL)selector withObject:(id)withObject;
+(void) setTargetValue:(NSString *)keyValue valueForKey:(NSObject *)valueForKey record:(NSDictionary *)record targetObject:(NSObject *)targetObject;
+(id) getTargetObject:(NSString *)keyValue record:(NSDictionary *)record targetObject:(NSObject *)targetObject flag:(BOOL)flag;
+(id) getTargetObject:(NSString *)keyValue record:(NSDictionary *)record targetObject:(NSObject *)targetObject;
+(NSObject *)filterString:(NSString *)type value:(NSString *)value record:(NSDictionary *)record;
+(BOOL) processTargetAction:(NSDictionary *)taction targetObject:(NSObject *)targetObject sender:(id)sender;
+(void) processActionOfName:(NSString *)actionName source:(NSDictionary *)source targetObject:(NSObject *)targetObject;
+(BOOL) doAction:(NSDictionary *)action bundle:(NSDictionary *)bundle navigator:(UINavigationController *)navigator targetObject:(NSObject *)targetObject;
+(BOOL) doAction:(NSDictionary *)action bundle:(NSDictionary *)bundle navigator:(UINavigationController *)navigator;
+(void) processAction:(NSDictionary *)newAction targetObject:(NSObject *)targetObject;
+(NSArray *)splitParams:(NSString *)path record:(NSDictionary *)record targetObject:(NSObject *)targetObject flag:(BOOL)flag;

+(NSObject *)replaceVariables:(NSDictionary *)source target:(NSString *)target document:(UIWebView *)document;
+(NSObject *)replaceAllVariables:(NSString *)target record:(NSDictionary *)record targetObject:(NSObject *)targetObject;
+(NSObject *)replaceAllVariables:(NSString *)target record:(NSDictionary *)record targetObject:(NSObject *)targetObject flag:(BOOL)flag;
+(NSObject *)replaceAllVariables1:(NSString *)target record:(NSDictionary *)record targetObject:(NSObject *)targetObject flag:(BOOL)flag;


+(NSObject *)getTargetValue:(NSString *)key record:(NSDictionary *)record targetObject:(NSObject *)targetObject;
+(BOOL) isRange:(NSString *)range;
+(XAdapter *) getAdapter:(NSDictionary *)action target:(id)targetObject;
@end


@interface PROTO (PROTO_EXT)

@end

