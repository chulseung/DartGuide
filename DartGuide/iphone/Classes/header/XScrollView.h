#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XEventReceiver.h"
@interface XScrollView : UIScrollView <XEventReceiver,UIScrollViewDelegate> {
	NSDictionary *parameter;
	NSDictionary *onSelected;
	NSDictionary *objects;
    NSMutableArray *viewDatas;
    NSMutableArray *viewControllers;
    NSString  *contentTemplate;
    SEL selector;
    id parent;
    int lastPage;
}
-(id)initWithDict:(NSDictionary *)dict  target:(id)target selector:(SEL)sel;	
@property (nonatomic, retain) NSMutableArray *viewControllers;
@property (nonatomic, retain) NSDictionary *onSelected;
@property  SEL selector;
@property (nonatomic, retain) id parent;
@property (nonatomic, retain) NSString  *contentTemplate;
@property (nonatomic, retain) NSMutableArray *viewDatas;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSDictionary *objects;
- (UIView *)getHitView:(CGPoint)point objs:(NSDictionary *)objs;
@end


@interface GScrollView : UIScrollView <XEventReceiver,UIScrollViewDelegate> {
	NSDictionary *parameter;
	NSDictionary *objects;
    NSMutableArray *viewDatas;
    NSMutableArray *viewControllers;
    SEL selector;
    id parent;
    int lastPage;
}
-(id)initWithDict:(NSDictionary *)dict  target:(id)target selector:(SEL)sel;	
@property (nonatomic, retain) NSMutableArray *viewControllers;
@property  SEL selector;
@property (nonatomic, retain) id parent;
@property (nonatomic, retain) NSMutableArray *viewDatas;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSDictionary *objects;
- (UIView *)getHitView:(CGPoint)point objs:(NSDictionary *)objs;
@end
