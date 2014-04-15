

#import <UIKit/UIKit.h>
#import "SBTableAlert.h"

@interface XListAlert : NSObject <SBTableAlertDelegate, SBTableAlertDataSource>{
    NSDictionary *parameter;
    NSObject *parent;
    NSArray *dataSource;
    NSString *dataName;
    NSString *titleName;
}
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSArray *dataSource;
@property (nonatomic, retain) NSString *dataName;
@property (nonatomic, retain) NSString *titleName;
- (id)initWithDict:(NSDictionary *)dict  parent:(NSObject *)p;

@end
