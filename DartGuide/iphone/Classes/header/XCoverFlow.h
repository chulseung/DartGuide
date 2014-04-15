#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XEventReceiver.h"
#import "AFOpenFlowView.h"
#import "ImageHelpers.h"
#import "PROTO.h"
#import "iCarousel.h"

@interface XCoverFlow : AFOpenFlowView <XEventReceiver,AFOpenFlowViewDataSource,AFOpenFlowViewDelegate> {
	NSDictionary *parameter;
	id parent;
	NSMutableArray *images;
	int selectedIndex;
	int ready;
    NSString *contentTemplate;
}
- (id)initWithFrame:(CGRect)frame param:(NSDictionary *)param parent:(id)pa;
@property (nonatomic, retain) NSString *contentTemplate;
@property (nonatomic, retain) NSMutableArray *images;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) id parent;
@end



@interface XCoverFlow2 : iCarousel <XEventReceiver,iCarouselDataSource, iCarouselDelegate> {
	NSDictionary *parameter;
	id parent;
	NSMutableArray *images;
	int selectedIndex;
    int visibleItems;
    int itemSpacing;
	int ready;
        NSString *contentTemplate;
    BOOL wrap;
}
- (id)initWithFrame:(CGRect)frame param:(NSDictionary *)param parent:(id)pa;
@property (nonatomic, retain) NSString *contentTemplate;
@property (nonatomic, assign) BOOL wrap;
@property (nonatomic, retain) NSMutableArray *images;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) id parent;
@end
