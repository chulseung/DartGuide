//
//  XTREE.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 12..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PROTO.h"
#import "XLIST.h"

@interface XTREE : XLIST{
	NSMutableArray *indexKeys;
}
@property (nonatomic, retain) NSMutableArray *indexKeys;
@end

