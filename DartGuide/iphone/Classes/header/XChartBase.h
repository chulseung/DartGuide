#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XEventReceiver.h"
#import "FTUtils+NSObject.h"
#import "FTAnimationManager.h"
#define   DEG2RAD(degrees)  ((M_PI * degrees)/ 180)
@interface XChartBase : UIView <XEventReceiver> {
	id parent;
	SEL parentSelector;
    NSMutableDictionary *parentObjects;
	NSDictionary *parameter;
	NSDictionary *chartInfo;
	NSMutableDictionary *objects;
	NSDictionary *onAnimationEnd;
	float viewPortX;
    float itemInterval;
	float viewPortY;
	float viewPortWidth;
	float viewPortHeight;
	float viewSpaceX;
	float viewSpaceY;
	float viewSpaceWidth;
	float viewSpaceHeight;
	float pathThick;
	float vGridGap;
	float hGridGap;
	int selectedIndex;
	NSMutableArray *colorTable;
	NSArray *plotData;
	NSArray *customHorizontalLabel;
	NSArray *customVerticalLabel;
	NSArray *pieLabel;
	
	
	UIColor *chartColor;
	UIColor *borderColor;
	UIColor *axColor;
	UIColor *pathColor;

	UIColor *fillColor;
	UIColor *gridColor;
	UIColor *gridLabelColor;
	
	UIView *chartPanel;
	BOOL drawBorder;
	BOOL drawAxis;
	BOOL drawHorizontalGrid;
	BOOL drawVerticalGrid;
	BOOL drawHorizontalLabel;
	BOOL drawVerticalLabel;
	BOOL animated;
	float horizontalLabelFontSize;
	float verticalLabelFontSize;
	float horizontalLabelAngle;
	float verticalLabelAngle;
	CGPoint translateHorizontalLabel;
	CGPoint translateVerticalLabel;
	CALayer *chartLayer;
	NSString *xLabelFormat;
	NSString *yLabelFormat;
	int chartType;
	int repeatNum;
}
@property (nonatomic, retain) NSMutableDictionary *parentObjects;
@property (nonatomic, retain) CALayer *chartLayer;
@property (nonatomic, retain) id parent;
@property (nonatomic, retain) NSString *xLabelFormat;
@property (nonatomic, retain) NSString *yLabelFormat;
@property (nonatomic, retain) NSMutableArray *colorTable;
@property (nonatomic, retain) NSArray *pieLabel;
@property (nonatomic, retain) NSArray *customHorizontalLabel;
@property (nonatomic, retain) NSArray *customVerticalLabel;
@property (nonatomic, retain) NSArray *plotData;
@property (nonatomic, retain) UIColor *gridColor;
@property (nonatomic, retain) UIColor *gridLabelColor;
@property (nonatomic, retain) UIColor *chartColor;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic, retain) UIColor *axColor;
@property (nonatomic, retain) UIColor *pathColor;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, retain) NSDictionary *chartInfo;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSDictionary *onAnimationEnd;
@property (nonatomic, retain) NSMutableDictionary *objects;
- (CGPoint) rotateRealPoint:(float)length angle:(float)angle center:(CGPoint)center;
- (float) calcLength:(float )l;
- (void)removeChildObjects:(NSDictionary *)parent;
- (void)addObject:(NSObject *)object forKey:(NSString *)key;
- (void) processAction:(NSDictionary *)action;
- (void) changeLabel:(NSDictionary*)dict label:(UIView *)mainLabel;
- (void) removeAllLayer;
- (void) drawAreaChart:(NSDictionary *)data;
- (void) drawLineChart:(NSDictionary *)data;
- (NSArray *) drawGrid:(NSDictionary *)cInfo;
- (void) drawNetChart:(NSNumber *)idx  data:(NSDictionary *)data;
- (void) drawNetItemLayout0:(NSDictionary *)data;
- (void) drawNetItemLayout:(NSNumber *)idx  data:(NSDictionary *)data;


- (CGPoint) rotatePoint:(float)length angle:(float)angle;
- (CGPoint) rotateRealPoint:(float)length angle:(float)angle;
- (CGPoint) rotatePoint:(float)length angle:(float)angle center:(CGPoint)center;


- (void) ReplaceObject:(NSArray *)nsdict selector:(SEL)selector target:(id)target record:(NSDictionary *)record num:(int)num;
- (void) DisplayObject:(NSArray *)nsdict selector:(SEL)selector target:(id)target record:(NSDictionary *)record num:(int)num;
- (void) changeItemLayout:(NSNumber *)idx  data:(NSDictionary *)data;
- (void) changeItemLayout0:(NSDictionary *)data;
- (void) action:(id)sender;
- (void) drawItemLayout0:(NSDictionary *)data;
- (void) drawItemLayout:(NSNumber *)idx data:(NSDictionary *)data;
- (void) needDisplay:(NSObject *)obj;
- (void) repeatRefresh:(NSObject *)obj;
- (void) drawDotChart:(NSNumber *)idx;
- (void) drawBarChart:(NSNumber *)idx;
- (void) removeAllObjects;
- (CGPoint) calcPointWithDirection:(NSObject *)obj direction:(NSString *)direction;
- (CGRect) calcRectWithDirection:(CGRect )rect direction:(NSString *)direction;
- (CGPoint) calcCGPoint:(CGPoint)rect;
- (CGRect) calcRect:(CGRect)rect;
- (void) drawPieChart;
- (void) addSubviewAt:(UIView *)view at:(UIView *)at;
- (id) initWithSelector:(NSDictionary *)dict target:(id)target selector:(SEL)selector;
- (CGPoint) calcPoint:(float )x y:(float)y;
- (CGPoint) calcPoint:(NSObject *)obj;

CGAffineTransform CGAffineTransformWithTouches(CGAffineTransform oldTransform, 
                                               UITouch *firstTouch, 
                                               UITouch *secondTouch);
CGPoint vectorBetweenPoints(CGPoint firstPoint, CGPoint secondPoint);
CGFloat distanceBetweenPoints(CGPoint firstPoint, CGPoint secondPoint);

@end


@interface AnimationDeleagte : NSObject{
    CAShapeLayer *shapeLayer;
    UIColor *fillColor;
}

@property (nonatomic, retain) CAShapeLayer *shapeLayer;
@property (nonatomic, retain) UIColor *fillColor;
- (void)animationDidStart:(CAAnimation *)theAnimation;
- (id)initWith:(CAShapeLayer *)layer fColor:(UIColor *)fColor ;	
- (void)animationDidStop:(CAAnimation *)theAnimation finished:(BOOL)flag;
@end



