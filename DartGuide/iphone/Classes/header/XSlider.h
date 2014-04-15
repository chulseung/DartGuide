//
//  XSlider.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 13..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XEventReceiver.h"
#import <MediaPlayer/MPVolumeView.h>

@interface XSlider : UISlider <XEventReceiver>{
	NSDictionary *parameter;
	id sliderTarget;
	SEL sliderSelector;
	
}

- (id)initWithDict:(NSDictionary *)dict  target:(id)target selector:(SEL)selector;
- (void)slideraction:(id)sender;
- (NSString *)getSliderValue;
- (void)setSliderValue:(NSString *)val;

@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) id sliderTarget;
@property (nonatomic) SEL sliderSelector;
@end



@interface XVolumeSlider : MPVolumeView <XEventReceiver>{
	NSDictionary *parameter;
	id sliderTarget;
	SEL sliderSelector;
    float minimumValue;
    float maximumValue;
    NSTimer *repeatedTimer;
    NSDictionary *onIdleAction;
    NSDictionary *slideAction;
	
}

- (id)initWithDict:(NSDictionary *)dict  target:(id)target selector:(SEL)selector;
- (void)slideraction:(id)sender;
- (NSString *)getSliderValue;
- (void)setSliderValue:(NSString *)val;
@property (nonatomic, retain) NSTimer *repeatedTimer;

@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) id sliderTarget;
@property (nonatomic) SEL sliderSelector;
@end
