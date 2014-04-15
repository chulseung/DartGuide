//
//  XSegment.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 7..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XEventReceiver.h"
@interface XSegment : UISegmentedControl <XEventReceiver> {
	NSString *url;
	NSString *actionType;
	NSDictionary *parameter;
	BOOL indexAction;
}
-(void)setSegmentIndex:(int)index;
@property  BOOL indexAction;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *actionType;
@property (nonatomic, retain) NSDictionary *parameter;
@end
