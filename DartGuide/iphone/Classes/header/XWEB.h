//
//  PROTO.h
//  PROTO
//
//  Created by 바다 홍 on 10. 2. 23..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XFORM.h"
#import "PROTO.h"
#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
@interface XWEB : XFORM {
	XWebView *webView;
    NSString *html;
    NSString *htmlUrl;
}
-(id)initWithDict:(NSDictionary *)dict;
- (id) initWithExtra:(NSString *)url bundle:(NSDictionary *)bundle plistData:(NSDictionary *)plistData htmlData:(NSString *)htmlData;

@property (nonatomic, assign)  NSString *html;
@property (nonatomic, assign)  NSString *htmlUrl;
@end

