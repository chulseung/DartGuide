#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "XEventReceiver.h"
#define kMinimumGestureLength 25
#define kMaximumVariance 10
#import "PaintingView.h"

@interface XDrawingCanvas : PaintingView <XEventReceiver> {
	NSDictionary *parameter;
	CGRect initialFrame;
	NSString *align;
	CGRect spacing;
    UIViewController *parentController;
}

@property (nonatomic, retain) UIColor *lineColor;
@property (nonatomic, retain) UIViewController *parentController;
@property (nonatomic, retain) NSDictionary *parameter;
- (id)initWithDict:(NSDictionary *)dict parent:(UIViewController *)parent;
- (id)initWithDict:(NSDictionary *)dict;	
@end


