#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XEventReceiver.h"
@interface XLabel : UILabel <XEventReceiver> {
	NSDictionary *parameter;
	BOOL autoResize;
	CGRect initialFrame;
	NSString *align;
	NSString *valign;
    NSTimer *stopWatchTimer;
    NSDate *startDate;
    NSTimeInterval timeValue;
}
@property NSTimeInterval timeValue;
@property (nonatomic, retain) NSTimer *stopWatchTimer;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSString *align;
@property (nonatomic, retain) NSString *valign;
@property CGRect initialFrame;
-(NSString *) getText;
-(NSString *) setText:(NSString *)text;
-(void) rotateText:(NSArray *)texts interval:(float)interval rotate:(int)rotate;
-(void) loopText:(NSDictionary *)dummy;
-(void) setAutoResize;
-(void)updateTimer;
-(void)startStopWatch:(long)interval;
-(void)addTime:(long)time;
-(void)stopTimer;
-(long)getTime;
@end
