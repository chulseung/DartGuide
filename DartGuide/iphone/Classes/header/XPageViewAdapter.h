//
//  XLocationAdapter.h
//  PROTO
//
//  Created by BADA HONG on 12. 6. 25..
//  Copyright (c) 2012년 ASG Korea. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "XAdapter.h"
#import "XFORM.h"

@interface XPageViewAdapter : XAdapter <UIPageViewControllerDataSource,UIPageViewControllerDelegate>{
    UIPageViewController *pageViewController;
    NSString *contentTemplate;
    NSArray *viewDatas;
}
@property (nonatomic, retain) UIPageViewController *pageViewController;
@property (nonatomic, retain) NSString *contentTemplate;
@property (nonatomic, retain) NSArray *viewDatas;
-(XFORM *)viewControllerAtIndex:(int)index;
- (NSUInteger)indexOfViewController:(XFORM *)viewController;
@end
