//
//  XLocationAdapter.h
//  PROTO
//
//  Created by BADA HONG on 12. 6. 25..
//  Copyright (c) 2012년 ASG Korea. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "XAdapter.h"
#import <AVFoundation/AVFoundation.h>

@interface XMVPlayerAdapter : XAdapter {
    MPMoviePlayerController *moviePlayer;
    NSMutableDictionary *onVideoEnd;
    NSTimer *repeatedTimer;
    NSMutableDictionary *meterAction;
}
@property (nonatomic, retain) NSMutableDictionary *meterAction;
@property (nonatomic, retain) NSTimer *repeatedTimer;
@property (nonatomic, retain) NSMutableDictionary *onVideoEnd;
@property (nonatomic, strong) MPMoviePlayerController *moviePlayer;
- (void)viewWillEnterForeground;
- (void)playMovieFile:(NSURL *)movieFileURL;
- (void)playMovieStream:(NSURL *)movieFileURL;
- (void)stop;
@end
