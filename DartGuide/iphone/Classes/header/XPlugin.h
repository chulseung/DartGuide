//
//  XPlugin.h
//  PROTO
//
//  Created by BADA HONG on 12. 5. 26..
//  Copyright (c) 2012년 ASG Korea. All rights reserved.
//

#import "XAdapter.h"
#import "XEventReceiver.h"
@interface XPlugin : UIView <XEventReceiver>{
	NSDictionary *parameter;
	id parent;
}
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) id parent;


-(id)initWithDict:(NSDictionary *)dict  target:(id)target;	
@end
