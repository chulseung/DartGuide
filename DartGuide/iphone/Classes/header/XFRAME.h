//
//  XFRAME.h
//  PROTO
//
//  Created by 바다 홍 on 10. 9. 25..
//  Copyright 2010 ASG Korea. All rights reserved.
//

#import "PROTO.h"
#import <UIKit/UIKit.h>


@interface XFRAME : UISplitViewController <XEventReceiver,UISplitViewControllerDelegate>{
	UISplitViewController *splitViewController;
    UIPopoverController *popoverController;    
    UIBarButtonItem *rootPopoverButtonItem;
    UIViewController *splitMaster;
    UIViewController *splitDetail;
	NSMutableDictionary *currentRecord;	
	NSString *plistUrl;
	NSString *landscapeUrl;
	NSString *portraitUrl;
	NSDictionary *plist;	
	NSDictionary *extra;
	NSMutableDictionary *dataProvider;
	NSMutableData *xmlData;		
	NSString *xmlUrl;	
	UIViewController *parent;
    NSMutableArray *viewDatas;
	id <ModalManager> modalController;	
	NSDictionary *landscapeLayout;
	UIToolbar				*toolbar;	// created programmatically, not in IB
	UIView *titleView;
}

@property (nonatomic, assign) UIViewController *splitMaster;
@property (nonatomic, assign) UIViewController *splitDetail;
@property (nonatomic, assign) UISplitViewController *splitViewController;
@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic, retain) UIBarButtonItem *rootPopoverButtonItem;
@property (nonatomic, retain) NSMutableDictionary *currentRecord;	
@property (nonatomic, retain) NSString *plistUrl;
-(void)closePopOver;
-(UINavigationController *)getNavigator:(NSString *)path;
-(void)changeMasterDetail:(UIViewController *)masterView detailView:(UIViewController *)detailView;
-(id)initWithExtra:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData;

@end
