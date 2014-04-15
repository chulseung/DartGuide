//
//  XButton.h
//  PROTO
//
//  Created by 바다 홍 on 10. 2. 25..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XStateButton.h"
#import "XEventReceiver.h"
#import "GradientButton.h"
@interface XButton : GradientButton <XStateButton,XEventReceiver> {
	NSString *url;
    UIViewController *parentController;
    NSDictionary *onTouchAction;
    NSDictionary *onTouchBegin;
    NSDictionary *onTouchMove;
    NSDictionary *onTouchEnd;    
    NSDictionary *draggable;    
    NSDictionary *droppable;    
	NSString *actionType;
	NSDictionary *parameter;
	NSDictionary *unselectAction;
	NSString *align;
	NSDictionary *record;
	NSString *_btnstate;
	CGRect initialFrame;
	NSString *normalStateTitle;
	NSString *selectedStateTitle;
	NSString *group;
	UIImage *normalStateImage;
	UIImage *normalStateBackgroundImage;
	UIImage *selectedStateImage;
	NSNumber *fontSize;
    CGPoint originalPosition;
	BOOL autoResize;
	id actiontarget;
	SEL actionselector;
    CGPoint touchStart;
    BOOL isResizing;    
}

@property CGPoint originalPosition;
@property CGRect initialFrame;
@property (nonatomic, retain) UIViewController *parentController;
@property (nonatomic, retain) NSDictionary *draggable;
@property (nonatomic, retain) NSDictionary *droppable;
@property (nonatomic, retain) NSDictionary *onTouchAction;
@property (nonatomic, retain) NSDictionary *onTouchBegin;
@property (nonatomic, retain) NSDictionary *onTouchMove;
@property (nonatomic, retain) NSDictionary *onTouchEnd;
@property (nonatomic, retain) NSNumber *fontSize;
@property (nonatomic, retain) NSString * group;
@property (nonatomic, retain) NSString * normalStateTitle;
@property (nonatomic, retain) NSString * selectedStateTitle;
@property (nonatomic, retain) UIImage *normalStateImage;
@property (nonatomic, retain) UIImage *selectedStateImage;
@property (nonatomic, retain) NSString *_btnstate;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *actionType;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSDictionary *unselectAction;
@property (nonatomic, retain) NSString *align;
@property (nonatomic, retain) NSDictionary *record;
-(void) setImageWithURL:(NSString *)turl;
-(void)setActive:(NSString *)text;
-(void)setBtnImage:(NSString *)normal pressed:(NSString *)pressed;
-(void) setBtnImagePressed:(UIImage *)image;
-(void)setAutoResize;
-(id)initWithDict:(NSDictionary *)dict parent:(UIViewController *)parent;
-(void)setAction:(id)target selector:(SEL)selector dict:(NSDictionary *)dict;
-(NSString *)getBtnState;
-(void)setBtnImage:(UIImage *)image;
-(void)setBtnTitle:(NSString *)title;
-(void)setBtnPressed:(BOOL)flag;
@end
