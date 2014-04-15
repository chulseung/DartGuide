#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ECSlidingViewController.h"

@interface XNavigationController : UINavigationController
- (UIViewController *)popViewControllerAnimatedSuper:(BOOL)animated;
- (void)rotateView;
@end