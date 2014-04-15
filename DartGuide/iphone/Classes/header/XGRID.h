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

#import "DTGridViewController.h"
#import "DTGridViewCell.h"
@interface XGRID : DTGridViewController <DTGridViewDelegate, DTGridViewDataSource,XEventReceiver,ModalManager,EventManager,UITextFieldDelegate>{
    DTGridViewCell *currentSelectedCell;
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
    int targetSection;
    NSString *plistUrl;
    NSDictionary *plist;	
    id selectedCell;
    NSMutableString *currentParsedCharacterData;
    NSURLConnection *xmlFeedConnection;	
    //UIToolbar				*toolbar;	// created programmatically, not in IB
    NSObject *parent;
    
    BOOL viewAppeared;
    id <ModalManager> modalController;	
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
    id currentCell;
    
}
@property CGRect viewFrame;	
@property int  orientation;	
@property BOOL afterLoad;
@property BOOL interrupted;
@property BOOL inAction;
@property (nonatomic, retain) NSObject *parent;

@property (nonatomic, retain) id selectedCell;
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
@property (nonatomic, retain) DTGridViewCell *currentSelectedCell;
- (void) setObjectValues:(NSDictionary *)values flag:(BOOL)flag;
- (void) prepareTableAction:(NSDictionary *)paction;
- (id)initWithFrame:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData frame:(CGRect)frame;
- (id) initExtra:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData;
- (void) deleteRecord:(NSIndexPath *)indexPath;	
- (void) repeatAction:(NSMutableDictionary *)action;
- (void) selectRowAtIndexPath:(NSIndexPath *)indexPath;	
- (int) getSelectedRowNum;
- (NSObject *)replaceVariables:(NSString *)target record:(NSDictionary *) record flag:(BOOL)flag;
- (void) applyDataToTarget:(NSString *)objName withObject:(NSObject *)objValue;
- (void) applyDataToObject:(NSDictionary *)record;
- (void) viewDidLoad2;
- (void) freeLargeData;
- (void) Dealloc;
- (void) processTableAction:(NSDictionary *)action record:(NSDictionary *)record sender:(id)sender;

- (void) setData:(NSDictionary *)dict;
- (void) afterLoadData:(NSObject *)source;
- (void) processHeadAction:(NSDictionary *)header;
- (void) reloadTemplate;
- (void)processOnDidLoadAction:(NSDictionary *)header;
- (NSObject *) getObjectValue:(NSObject *)value;
- (NSObject *)getTargetValue:(NSString *)valueForKey record:(NSDictionary *)record;
- (void) applyData:(NSObject *)data;
- (UINavigationController *)getNavigator:(NSString *)path;
- (NSDictionary *)applyObjectDatas:(NSDictionary *)bundle;
- (CGFloat)calculateColumnWidth:(NSIndexPath *) indexPath;
- (void)refreshList;
- (void)sendEvent:(NSDictionary *)data;
- (void)setNewData:(NSDictionary *)data;
- (void)action:(id)sender;
- (void)handleError:(NSError *)error;
- (id)initWithExtra:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData;
- (BOOL) processAction:(NSDictionary *)action sender:(id)sender; 
- (void) responseLoadData:(NSDictionary *)responseData;
@end
