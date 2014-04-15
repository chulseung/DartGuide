//
//  ROOTVIEWCONTROLLER.h
//  PROTO
//
//  Created by 바다 홍 on 10. 2. 23..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ROOTVIEWCONTROLLER : UIViewController {
	NSDictionary *plist;
}

@property (nonatomic, retain) NSArray *dataSourceArray;
@property (nonatomic, retain) NSDictionary *plist;
- (id) initWithURL:(NSString *)url;
@end
