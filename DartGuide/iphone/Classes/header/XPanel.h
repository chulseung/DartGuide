#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XAdapter.h"
#import "XEventReceiver.h"
#import "FTUtils+NSObject.h"
#import "FTAnimationManager.h"
#define kMinimumGestureLength 25
#define kMaximumVariance 10

@interface XVirtualView : UIView{
    BOOL checkTouch;
}
- (void)addSubviewEx:(UIView *)view;
@end

@interface XPanel : XVirtualView <XEventReceiver> {
    XAdapter *adapter;
    NSMutableDictionary *parentObjects;
	NSDictionary *parameter;
	NSDictionary *chartInfo;
	NSDictionary *objects;
    NSDictionary *onTouchAction;
    NSDictionary *onTouchBegin;
    NSDictionary *onTouchMove;
    NSDictionary *onTouchEnd;
	float viewPortX;
	float viewPortY;
	float viewPortWidth;
	float viewPortHeight;
	float viewSpaceX;
	float viewSpaceY;
	float viewSpaceWidth;
	float viewSpaceHeight;
    float downx;
    float downy;
	NSArray *plotData;
	BOOL autoResize;
	CGRect initialFrame;
	NSString *align;
	CGRect spacing;
    UIViewController *parentController;
    CGFloat initialTouchPositionX;
    CGFloat initialHoizontalCenter;
    UIPanGestureRecognizer *panGesture;
    UITapGestureRecognizer *resetTapGesture;
    CGPoint gestureStartPoint;
    CGRect gestureStartFrame;    
    BOOL horizontalDraggable;
    BOOL verticalDraggable;
	
}
@property CGPoint gestureStartPoint;
@property CGRect gestureStartFrame;
@property BOOL horizontalDraggable;
@property BOOL verticalDraggable;

@property (nonatomic, unsafe_unretained) CGFloat initialTouchPositionX;
@property (nonatomic, unsafe_unretained) CGFloat initialHoizontalCenter;
@property (nonatomic, strong) UIPanGestureRecognizer *panGesture;
@property (nonatomic, strong) UITapGestureRecognizer *resetTapGesture;

@property CGRect initialFrame;
@property CGRect spacing;
@property (nonatomic, retain) XAdapter *adapter;
@property (nonatomic, retain) NSMutableDictionary *parentObjects;
@property (nonatomic, retain) UIViewController *parentController;
@property (nonatomic, retain) NSDictionary *onTouchAction;
@property (nonatomic, retain) NSDictionary *onTouchBegin;
@property (nonatomic, retain) NSDictionary *onTouchMove;
@property (nonatomic, retain) NSDictionary *onTouchEnd;
@property (nonatomic, retain) NSDictionary *chartInfo;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSDictionary *objects;
@property (nonatomic, retain) NSString *align;
- (void)updateViewWithRecognizer:(UIPanGestureRecognizer *)recognizer;
- (id)initWithDict:(NSDictionary *)dict parent:(UIViewController *)parent;
- (id)initWithDict:(NSDictionary *)dict;	
- (void)removeChildObjects:(NSDictionary *)parent;
- (CGRect)setAutoResize:(NSDictionary *)subobjects;
- (void)addObject:(NSObject *)object forKey:(NSString *)key;
@end

@interface XView : UIView{
}
- (id)initWithFrame:(CGRect) fr;	
@end


@interface XBase : XVirtualView{
}
- (CGPoint) calcCGPoint:(CGPoint)rect;
- (CGRect) calcRect:(CGRect)rect;
@end


@interface XShape : UIView{
	NSDictionary *parameter;
	NSArray *plotData;
    id parent;
    SEL selector;
	float centerX;
	float centerY;
    UIColor *normalFillColor;
    UIColor *normalPathColor;
    double normalPathThick;
    UIColor *highlightFillColor;
    UIColor *highlightPathColor;
    double highlightPathThick;
}
@property (nonatomic, retain)  UIColor *normalFillColor;
@property (nonatomic, retain)  UIColor *normalPathColor;
@property double normalPathThick;
@property (nonatomic, retain)  UIColor *highlightFillColor;
@property (nonatomic, retain)  UIColor *highlightPathColor;
@property double highlightPathThick;
@property (nonatomic, retain) id parent;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSArray *plotData;
@property SEL selector;

- (id)initDict:(NSDictionary *)dict;
- (id)initWithDict:(NSDictionary *)dict;	
-(void) setShapeLayer:(CALayer *)layer;
@end


@interface XShapeLayer : CAShapeLayer{
	NSDictionary *record;
    id parent;
    SEL selector;
}
@property (nonatomic, retain) id parent;
@property (nonatomic, retain) NSDictionary *record;
@property SEL selector;
@end


@interface XImageView : UIView {
    NSURLConnection* connection;
    NSMutableData* data;
}
@end

