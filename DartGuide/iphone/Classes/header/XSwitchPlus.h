//
//  XSwitchPlus.h
//  PROTO
//
//  Created by 바다 홍 on 10. 6. 23..
//  Copyright 2010 ASG Korea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XSwitch.h"
#import "XEventReceiver.h"

@interface XSwitchPlus : UIView <XEventReceiver>{
	UILabel *xlabel;
	XSwitch *xswitch;
	NSString *onTitle;
	NSString *offTitle;
	id switchTarget;
	SEL switchSelector;
}

@property (nonatomic, retain) NSString *onTitle;
@property (nonatomic, retain) NSString *offTitle;

- (id)initWithDict:(NSDictionary *)dict  target:(id)target selector:(SEL)selector;
- (void)switchaction:(id)sender;
- (NSString *)getSwitchValue;
- (void)setSwitchValue:(NSString *)val;

@property (nonatomic, retain) id switchTarget;
@property (nonatomic) SEL switchSelector;
@property (nonatomic, retain) UILabel *xlabel;
@property (nonatomic, retain) XSwitch *xswitch;
@end
