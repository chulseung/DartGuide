//
//  ContentViewController.h
//  MyPascal
//
//  Created by 바다 홍 on 10. 2. 19..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ContentViewController : UIViewController <UIWebViewDelegate>{
	UIWebView *webView;
	NSString *pageUrl;
	NSString *pageUrl2;
	CGRect webFrame;
}

- (id)initWithPath:(NSString*)theTitle contentpath:(NSString*)path contentpath2:(NSString*)path2;
- (void)lotateView:(UIInterfaceOrientation)interfaceOrientation;
@property (nonatomic, retain) UIWebView *webView;
@property (nonatomic, retain) NSString *pageUrl;
@property (nonatomic, retain) NSString *pageUrl2;
@end
