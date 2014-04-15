#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XEventReceiver.h"
#import "XFORM.h"
@interface XWebView : UIWebView <XEventReceiver,UIWebViewDelegate,UIActionSheetDelegate >{
	NSDictionary *parameter;
	NSDictionary *Header;
	XFORM *parent;
    NSString *username;
    NSString *password;
    CGPoint    tapLocation;
    NSTimer    *contextualMenuTimer;
}
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSDictionary *Header;
@property (nonatomic, retain) XFORM *parent;
@property (nonatomic, retain) NSString *username;
@property (nonatomic, retain) NSString *password;
- (void)removeObserver;
- (void)openContextualMenuAt:(CGPoint)pt;
- (void)contextualMenuAction:(NSNotification*)notification;
- (CGSize)windowSize;
- (CGPoint)scrollOffset;
- (NSString *)executeScript:(NSString *)script;
- (NSString *)getInnerHTML:(NSString *)objId;
- (void)setInnerHTML:(NSString *)objId text:(NSString *)text;
- (NSString *)getInputText:(NSString *)objId;
- (void)setInputText:(NSString *)objId text:(NSString *)text;
- (NSDictionary *)parseQueryString:(NSString *)query;
-(void)executeDunamisScript:(NSString *)text;
@end
