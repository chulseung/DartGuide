//
//  DunamisAppDelegate.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 26..
//  Copyright 2010 ASG Korea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PROTOAppDelegate.h"
#import "/usr/include/sqlite3.h"
#import "FBConnect.h"
@class PROTOAppDelegate;
@interface DunamisAppDelegate : UIResponder < NSURLConnectionDelegate,UIApplicationDelegate,FBSessionDelegate,FBDialogDelegate>  {
    PROTOAppDelegate *dunamisDelegate;
    UIWindow *window;
}
@property (nonatomic, retain) PROTOAppDelegate *dunamisDelegate;

@end 
