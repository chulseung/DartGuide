//
//  XLocationAdapter.h
//  PROTO
//
//  Created by BADA HONG on 12. 6. 25..
//  Copyright (c) 2012년 ASG Korea. All rights reserved.
//

#import "XAdapter.h"
#import <AVFoundation/AVFoundation.h>


@interface XRecorderAdapter : XAdapter <AVAudioRecorderDelegate, AVAudioPlayerDelegate>{
    AVAudioRecorder *audioRecorder;
    AVAudioPlayer *audioPlayer;
    AVPlayer *soundPlayer;
    NSTimer *repeatedTimer;
    NSDictionary *meterAction;
    NSDictionary *onSoundEnd;
    NSString *tempFileName;
    NSMutableArray* soundList;
    NSMutableArray* voiceList;
    NSString* onSoundEndAction;
    int currentSound;
    int startTime;
    int endTime;
    int recordNo;
    float minimumMean;
    float lastPeak;
    float lastMean;
}
@property (nonatomic, retain) NSDictionary *meterAction;
@property (nonatomic, retain) NSDictionary *onSoundEnd;
@property (nonatomic, retain) NSTimer *repeatedTimer;
@property (nonatomic, retain) AVPlayer *soundPlayer;
@property (nonatomic, retain) AVAudioPlayer *audioPlayer;
@property (nonatomic, retain) AVAudioRecorder *audioRecorder;
@end
