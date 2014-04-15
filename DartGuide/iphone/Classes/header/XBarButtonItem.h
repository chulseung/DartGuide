//
//  XBarButtonItem.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 17..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XStateButton.h"
#import "XEventReceiver.h" 
@interface XBarButtonItem : UIBarButtonItem <XStateButton,XEventReceiver>{
	NSDictionary *parameter;
	NSDictionary *record;	
	NSString *_btnstate;
	UISegmentedControl *segmentedControl;
}
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic, retain) NSDictionary *record;
@property (nonatomic, retain) NSString *_btnstate;
-(XBarButtonItem *)initWithDict:(NSDictionary*) dict target:(id)target selector:(SEL)selector;
@end
