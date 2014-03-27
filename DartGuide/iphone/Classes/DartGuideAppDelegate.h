

#import <UIKit/UIKit.h>
#import "PROTOAppDelegate.h"

@interface DartGuideAppDelegate :NSObject <UIApplicationDelegate> {
    PROTOAppDelegate *dunamisDelegate;
}
@property (nonatomic, retain) PROTOAppDelegate *dunamisDelegate;

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

