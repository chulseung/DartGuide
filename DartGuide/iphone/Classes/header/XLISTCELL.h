//
//  XLISTCELL.h
//  PROTO
//
//  Created by 바다 홍 on 10. 2. 24..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XLISTCELLVIEW.h"
@class XLISTCELLVIEW;
@interface XLISTCELL : UITableViewCell <UITextFieldDelegate>{
	XLISTCELLVIEW *xlistCellView;
	NSDictionary *objects;
	NSDictionary *editingObjects;
	NSDictionary *editingAccessoryObjects;
	NSDictionary *accessoryObjects;
	NSDictionary *selectedViewObjects;
	NSDictionary *whenSelected;
	NSDictionary *whenDeSelected;
	NSDictionary *accessoryLayout;
	NSDictionary *backgroundLayout;
	NSDictionary *landscapeLayout;
	NSDictionary *selectedLayout;
	NSDictionary *editingAccessory;
	NSDictionary *cellLayout;
	BOOL shouldIndent;
	UIViewController *parentForm;
	NSString *outlet;
    NSString *identifier;
	NSMutableDictionary *record;
	id actiontarget;
	SEL actionselector;
}
- (void)freeLargeComponents;
-(void)sendEvent:(NSDictionary *)data;
-(BOOL) processAction:(NSDictionary *)action button:(id)button;	
- (void)sendOutlet:(NSDictionary *)params;
@property BOOL shouldIndent;
@property (nonatomic, retain) XLISTCELLVIEW *xlistCellView;
@property (nonatomic, retain) NSMutableDictionary *record;
@property (nonatomic, retain) UIViewController *parentForm;
@property (nonatomic, retain) NSDictionary *objects;
@property (nonatomic, retain) NSDictionary *editingAccessoryObjects;
@property (nonatomic, retain) NSDictionary *accessoryObjects;
@property (nonatomic, retain) NSDictionary *selectedViewObjects;
@property (nonatomic, retain) NSDictionary *cellLayout;
@property (nonatomic, retain) NSDictionary *landscapeLayout;
@property (nonatomic, retain) NSDictionary *whenSelected;
@property (nonatomic, retain) NSDictionary *whenDeSelected;
@property (nonatomic, retain) NSDictionary *accessoryLayout;
@property (nonatomic, retain) NSDictionary *backgroundLayout;
@property (nonatomic, retain) NSDictionary *selectedLayout;
@property (nonatomic, retain) NSDictionary *editingAccessory;
@property (nonatomic, retain) NSString *outlet;
@property (nonatomic, retain) NSString *identifier;
- (void)selectCell:(BOOL)selected;
- (void)moveLandscape:(int)orient;
- (id)initWithBundle:(NSDictionary *)plist entity:(NSDictionary*)entity reuseIdentifier:(NSString *)reuseIdentifier target:(id)target selector:(SEL)selector;
- (void)setObjectValue:(NSDictionary *)plist entity:(NSDictionary *)entity record:(NSDictionary *)aDict document:(UIWebView *)document;
@end
