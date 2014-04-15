//
//  XPageControl.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 13..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface XPageControl : UIPageControl {
	NSDictionary *parameter;
}
@property (nonatomic, retain) NSDictionary *parameter;
@end
