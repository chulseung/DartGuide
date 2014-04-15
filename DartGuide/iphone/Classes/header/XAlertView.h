//
//  XAlertView.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 17..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@interface XAlertView : UIAlertView <UITextFieldDelegate,UIAlertViewDelegate>{
	NSDictionary *parameter;
	NSString *inputText;
	UITextField *textField;
	SEL alertAction;
	id parent;
}
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSString *inputText;
@property (nonatomic, retain) UITextField *textField;
@property SEL alertAction;
@property (nonatomic, retain)id parent;
@end
