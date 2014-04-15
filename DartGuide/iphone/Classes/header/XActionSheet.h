//
//  XActionSheet.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 17..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface XActionSheet : UIActionSheet {
	NSDictionary *parameter;
}
@property (nonatomic, retain) NSDictionary *parameter;
@end
