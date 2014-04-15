//
//  XTextField.h
//  PROTO
//
//  Created by 바다 홍 on 10. 4. 30..
//  Copyright 2010 ASG Korea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XEventReceiver.h"
#import "NSMutableData+AES256.h"

@interface XTextField : UITextField <XEventReceiver> {
	NSDictionary *parameter;
    NSDictionary *onTouchAction;
    NSDictionary *onTouchBegin;
    NSDictionary *onTouchMove;
    NSDictionary *onTouchEnd;
    NSDictionary *droppable;
    id parent;
}
@property (nonatomic, retain) NSDictionary *droppable;
@property (nonatomic, retain) NSDictionary *onTouchAction;
@property (nonatomic, retain) NSDictionary *onTouchBegin;
@property (nonatomic, retain) NSDictionary *onTouchMove;
@property (nonatomic, retain) NSDictionary *onTouchEnd;
-(NSString *)getText;
-(NSString *)getPlainText;
-(void )setActive:(NSString *)text;
-(void)initWithDict:(NSDictionary *)dict parent:(id)parent;
@property (nonatomic, retain) id parent;
@property (nonatomic, retain) NSDictionary *parameter;
@end
