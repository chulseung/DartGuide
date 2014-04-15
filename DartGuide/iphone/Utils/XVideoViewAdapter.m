//
//  XVideoViewAdapter.m
//  DartGuide
//
//  Created by cs.lim on 2014. 4. 15..
//
//

#import "XVideoViewAdapter.h"
#import "PROTO.h"
#import "PROTOAppDelegate.h"

@implementation XVideoViewAdapter

@synthesize webView=_webView, urlString=_urlString;


-(id)initWithDict:(NSDictionary *)dict  target:(id)target selector:(SEL)sel{
    selector=sel;
    [self initWithDict:dict target:target];
    return self;
}

-(id)initWithDict:(NSDictionary *)dict  target:(id)target {
    [self init];
    parent=target;
    parameter=[dict retain];
    
    NSLog(@"dict: %@", dict);
    
    NSDictionary * extra = [dict objectForKey:@"extra"];
    NSDictionary * parameter = [extra objectForKey:@"parameter"];

    // setting view
    self.webView = [[UIWebView alloc] init];
    [self.webView setFrame:[PROTO getRect:dict objectForKey:@"pos"]];
    [self.webView setBackgroundColor:[UIColor whiteColor]];
    
    // get url
    self.urlString = [parameter objectForKey:@"url"];
    
    // get video ID
    NSString * videoID = [_urlString substringFromIndex:MAX((int)[_urlString length]-11, 0)];
    NSLog(@"videoID: %@", videoID);
    
    // load webview url in iframe
    NSString *htmlStr = [NSString stringWithFormat:@"<iframe class=\"youtube-player\" type=\"text/html\" width=\"100%%\" height=\"100%%\" src=\"http://www.youtube.com/embed/%@\" frameborder=\"0\"></iframe>",_urlString];
    [_webView loadHTMLString:htmlStr baseURL:nil];


    return self;
}

-(NSObject *)getData:(NSArray *)command {
    return currentData;
}

-(UIView *)getView {
    return self.webView;
}

-(void)freeData {
    if (_webView != nil) {
        _webView = nil;
        _urlString = nil;
    }
}

@end
