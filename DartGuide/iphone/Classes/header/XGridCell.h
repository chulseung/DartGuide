//
//  XLISTCELL.h
//  PROTO
//
//  Created by 바다 홍 on 10. 2. 24..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DTGridViewCell.h"
@interface XGridCell : DTGridViewCell <UITextFieldDelegate>{
    
	NSDictionary *objects;
	NSDictionary *whenSelected;
	NSDictionary *whenDeSelected;
	NSDictionary *landscapeLayout;
	NSDictionary *cellLayout;
	NSObject *parentForm;
	NSString *outlet;
	NSMutableDictionary *record;
	id actiontarget;
	SEL actionselector;
    CGFloat slideAmount;
}
- (void)freeLargeComponents;
-(void)sendEvent:(NSDictionary *)data;
-(BOOL) processAction:(NSDictionary *)action button:(id)button;	
-(void)sendOutlet:(NSDictionary *)params;
@property (nonatomic, assign) CGFloat slideAmount;
@property (nonatomic, retain) NSMutableDictionary *record;
@property (nonatomic, retain) NSDictionary *landscapeLayout;
@property (nonatomic, retain) NSObject *parentForm;
@property (nonatomic, retain) NSDictionary *objects;
@property (nonatomic, retain) NSDictionary *cellLayout;
@property (nonatomic, retain) NSDictionary *whenSelected;
@property (nonatomic, retain) NSDictionary *whenDeSelected;
@property (nonatomic, retain) NSString *outlet;
- (void)selectCell:(BOOL)selected;
- (void)moveLandscape:(int)orient;
- (id)initWithBundle:(NSDictionary *)plist entity:(NSDictionary*)entity reuseIdentifier:(NSString *)reuseIdentifier target:(id)target selector:(SEL)selector;
- (void)setObjectValue:(NSDictionary *)plist entity:(NSDictionary *)entity record:(NSDictionary *)aDict document:(UIWebView *)document;
@end
