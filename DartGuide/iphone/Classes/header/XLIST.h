//
//  XLIST.h
//  PROTO
//
//  Created by 바다 홍 on 10. 2. 24..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PROTO.h"
#import "XFORM.h"
#import "XListParser.h"
#import "XLISTCELL.h"
#import "CocoaXMLParser.h"
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import "ECSlidingViewController.h"
#import "PullRefreshTableViewController.h"

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 40000
@interface XLIST : PullRefreshTableViewController <EKEventEditViewDelegate,ABNewPersonViewControllerDelegate,XEventReceiver,ModalManager,EventManager,UITextFieldDelegate>{
#else
	@interface XLIST : PullRefreshTableViewController <XEventReceiver,ModalManager,XListParserDelegate,EventManager,UITextFieldDelegate>{
#endif	
        ECSlidingViewController *slidingViewController;
		UITableViewCell *currentSelectedCell;
		UIViewController *nextViewController;	
		NSMutableDictionary *currentRecord;
		NSMutableDictionary *lData;
		NSMutableArray *xlist; 
		NSMutableData *xmlData;	
		NSString *entityUrl;
		NSDictionary *entity;		
		NSDictionary *extra;
		NSDictionary *deleteAction;
		NSDictionary *rowSelected;
		NSDictionary *rowUnSelected;
		NSDictionary *rowSelectedInNormal;
		NSDictionary *rowUnSelectedInNormal;
		NSDictionary *onScrollStart;
		NSDictionary *onScrollEnd;
		NSMutableDictionary *dataProvider;
		NSIndexPath *selectedIndex;
		NSString *xmlUrl;
        NSString *scrollDirection;
		int targetSection;
		NSString *plistUrl;
		NSDictionary *plist;	
		XLISTCELL *selectedCell;
		NSMutableString *currentParsedCharacterData;
		NSURLConnection *xmlFeedConnection;	
		//UIToolbar				*toolbar;	// created programmatically, not in IB
		NSObject *parent;
		
		BOOL gatherData;
		BOOL accumulatingParsedCharacterData;
		BOOL didAbortParsing;
		BOOL viewAppeared;
		UIWebView *document;	
		NSMutableArray *currentParseBatch;	
		CocoaXMLParser *xmlParser;
		id <ModalManager> modalController;	
		NSMutableDictionary *folder; 
		UINavigationController *myNavigator;
		UIPopoverController *popoverController;
		UIViewController *popoverManager;
		CGRect viewFrame;
		int orientation;
		int editMode;
		BOOL afterLoad;
		BOOL interrupted;
		BOOL swipeDelete;
        BOOL inAction;
		UIActivityIndicatorView *activityIndicator;
		UITextView *activityIndicatorBack;
		XLISTCELL *currentCell;
		
	}
	@property CGRect viewFrame;	
	@property int  orientation;	
	@property BOOL afterLoad;
	@property BOOL interrupted;
	@property BOOL inAction;
	@property (nonatomic, retain) NSObject *parent;

@property (nonatomic, retain) NSString *scrollDirection;
@property (nonatomic, retain) ECSlidingViewController *slidingViewController;	
@property (nonatomic, retain) XLISTCELL *selectedCell;
@property (nonatomic, retain) NSIndexPath *selectedIndex;
@property (nonatomic, retain) UIViewController *nextViewController;
@property (nonatomic, retain) UIViewController *popoverManager;
@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic, retain) UINavigationController *myNavigator;
@property (nonatomic, retain) NSMutableDictionary *folder;
@property (nonatomic, retain) id <ModalManager>  modalController;
@property (nonatomic, retain) UIWebView *document;
@property (nonatomic, retain) NSDictionary *extra;
@property (nonatomic, retain) NSMutableDictionary *dataProvider;
@property (nonatomic, retain) NSMutableDictionary *lData;
@property (nonatomic, retain) NSString *xmlUrl;
@property (nonatomic, retain) NSString *plistUrl;
@property (nonatomic, retain) XListParser *xmlParser;
@property (nonatomic, retain) NSDictionary *onScrollStart;
@property (nonatomic, retain) NSDictionary *onScrollEnd;
@property (nonatomic, retain) NSDictionary *plist;
@property (nonatomic, retain) NSDictionary *deleteAction;
@property (nonatomic, retain) NSDictionary *rowSelected;
@property (nonatomic, retain) NSDictionary *rowUnSelected;
@property (nonatomic, retain) NSDictionary *rowSelectedInNormal;
@property (nonatomic, retain) NSDictionary *rowUnSelectedInNormal;
@property (nonatomic, retain) NSMutableArray *currentParseBatch;
@property (nonatomic, retain) NSURLConnection *xmlFeedConnection;
@property (nonatomic, retain) NSMutableData *xmlData;
@property (nonatomic, retain) NSMutableDictionary *currentRecord;
@property (nonatomic, retain) NSMutableArray *xlist;
@property (nonatomic, retain) NSMutableString *currentParsedCharacterData;
@property (nonatomic, retain) NSString *entityUrl;
@property (nonatomic, retain) NSDictionary *entity;
@property BOOL viewAppeared;
@property (nonatomic, retain) UITableViewCell *currentSelectedCell;
    -(void)processSequence:(NSObject *)values;
- (void) setObjectValues:(NSDictionary *)values flag:(BOOL)flag;
- (void) prepareTableAction:(NSDictionary *)paction;
- (void) setSelectedCell:(UITableViewCell *)selectedCell deselectedCell:(UITableViewCell *)deselectedCell selectionColor:(UIColor *)selectionColor;
- (id) initExtra:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData;
- (void) processActivityResult:(NSDictionary *)ret;
- (void) deleteRecord:(NSIndexPath *)indexPath;	
- (void) repeatAction:(NSMutableDictionary *)action;
- (void) selectRowAtIndexPath:(NSIndexPath *)indexPath;	
- (int) getSelectedRowNum;
- (NSObject *)applyAllVariables:(NSObject *)target  record:(NSDictionary *)record flag:(BOOL)flag;
- (NSObject *)replaceVariables:(NSString *)target record:(NSDictionary *) record flag:(BOOL)flag;
- (void) applyDataToTarget:(NSString *)objName withObject:(NSObject *)objValue;
- (void) applyDataToObject:(NSDictionary *)record;
- (void) unselectAll;
- (void) unselectAll:(NSObject *)dummy;
- (void) viewDidLoad2;
- (void) freeLargeData;
- (void) Dealloc;
- (void) processTableAction:(NSDictionary *)action record:(NSDictionary *)record sender:(id)sender;
- (void) selectNext;
- (void) selectPrev;
    
- (void) setData:(NSDictionary *)dict;
- (void) afterLoadData:(NSObject *)source;
- (void) processHeadAction:(NSDictionary *)header;
- (void) reloadTemplate;
- (void)processOnDidLoadAction:(NSDictionary *)header;
- (NSString *)testViewConditions:(NSString *)viewConditions  record:(NSDictionary *)record;
- (BOOL)testViewCondition:(NSString *)viewCondition  record:(NSDictionary *)record;
- (NSObject *)applyTemplate:(NSObject *)target  record:(NSDictionary *)record;
- (NSArray *) filterList:(NSArray *)ret;
- (NSObject *) getRecordValue:(NSArray *)xpath;
- (NSDictionary *) findRecord:(NSString *)recordName;
- (NSDictionary *) findRecord:(NSMutableDictionary *)datas recordName:(NSString *)recordName;
- (NSObject *) getObjectValue:(NSObject *)value;
- (NSObject *)replaceVariables:(NSString *)target record:(NSDictionary *) record;
- (NSObject *)applyAllVariables:(NSObject *)target  record:(NSDictionary *)record;
- (NSObject *)getTargetValue:(NSString *)valueForKey record:(NSDictionary *)record;
- (BOOL)evaluateValid:(NSArray *)validTest sender:(id)sender;			
- (void) setRecordData:(NSDictionary *)values;
- (void) setRecordData:(NSString *)recordName value:(NSObject *)value;
- (void) setRecordData:(NSMutableDictionary *)datas recordName:(NSString *)recordName fieldName:(NSString *)fieldName value:(NSObject *)value;
- (void) setRecordData:(NSString *)recordName fieldName:(NSString *)fieldName value:(NSObject *)value;
- (void) applyData:(NSObject *)data;
- (void) addNewRecord:(NSDictionary *)data;
- (void) addNewData:(NSDictionary *)data;
- (void) addSelectedData:(NSArray *)data;
- (void) deleteSelectedData;
- (UINavigationController *)getNavigator:(NSString *)path;
- (NSString *) findData:(NSMutableDictionary *)datas recordName:(NSString *)recordName fieldName:(NSString *)fieldName;
- (NSString *) findData:(NSString *)recordName fieldName:(NSString *)fieldName;
- (NSDictionary *)applyObjectDatas:(NSDictionary *)bundle;
- (void)findAndReplace:(NSString *)recordName fieldName:(NSString *)fieldName value:(NSString *)value;
- (void)findAndReplace:(NSMutableDictionary *)datas recordName:(NSString *)recordName fieldName:(NSString *)fieldName value:(NSString *)value;
- (void)refreshList:(NSDictionary *)nsdict;
- (void)refreshList;
- (void)sendEvent:(NSDictionary *)data;
- (void)setNewData:(NSDictionary *)data;
- (void)action:(id)sender;
- (void)addRecordToList:(NSArray *)records;
- (void)handleError:(NSError *)error;
- (id)initWithExtra:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData;
- (id)initWithFrame:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData frame:(CGRect)frame;
- (id)initWithURL:(NSString *)url;
- (BOOL) processAction:(NSDictionary *)action sender:(id)sender; 
- (void) responseLoadData:(NSDictionary *)responseData;
@end
