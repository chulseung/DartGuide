#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XEventReceiver.h"
@interface XSearchBar : UISearchBar <XEventReceiver> {
	NSDictionary *parameter;
}
@property (nonatomic, retain) NSDictionary *parameter;
@end
