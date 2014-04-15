//
//  XVideoViewAdapter.h
//  DartGuide
//
//  Created by cs.lim on 2014. 4. 15..
//
//

#import "XAdapter.h"

@interface XVideoViewAdapter : XAdapter <UIWebViewDelegate> {
    
}

@property (nonatomic, retain) UIWebView * webView;
@property (nonatomic, retain) NSString * urlString;

@end
