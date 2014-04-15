//
//  XTextView.h
//  PROTO
//
//  Created by 바다 홍 on 10. 5. 23..
//  Copyright 2010 ASG Korea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HPGrowingTextView.h"
#import "HPTextViewInternal.h"

#import "XEventReceiver.h"

@interface XTextView : HPGrowingTextView <XEventReceiver> {
	NSDictionary *parameter;
}

@property (nonatomic, retain) NSDictionary *parameter;
-(NSString *) getText;

@end
