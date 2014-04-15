//
//  GradientView.h
//  Groupware
//
//  Created by blue on 10. 4. 8..
//  Copyright 2010 ASIA SOFT GROUP KOREA. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface GradientView : UIView {
	NSMutableArray *gColors;
	UIColor *bColor;
}
- (id)initWithDict:(NSDictionary*)dict;
@property (nonatomic, retain) NSArray *gColors;
@property (nonatomic, retain) UIColor *bColor;
@end
