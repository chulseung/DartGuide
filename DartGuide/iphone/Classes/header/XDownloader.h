//
//  XActionSheet.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 17..
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XEventReceiver.h"

@interface XDownloader : UIProgressView <XEventReceiver>{
	NSDictionary *parameter;
	NSURLConnection *theConnection;
	NSURLRequest *theRequest;
	NSFileHandle *fileHandle;
	unsigned long long expectedFileSize;
	unsigned long long downloadingFileSize;
	NSString *newFileUUID;
	NSString *newFileName;
	NSString *newFilePath;
	NSString *documentsDirectory;
	BOOL cancelFlag;
}

@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) NSURLConnection *theConnection;
@property (nonatomic, retain) NSURLRequest *theRequest;
@property (nonatomic, retain) NSString *newFileUUID;
@property (nonatomic, retain) NSString *newFileName;
@property (nonatomic, retain) NSString *newFilePath;
@property (nonatomic, retain) NSString *documentsDirectory;
- (void)startRequest;
- (void)setProgressbar:(float)aValue;
- (BOOL)isPDF:(NSURLRequest *)request;
- (void)dismissProgressSheet;
- (void)downloadDidEnd;
- (void)deleteDownloadFailed;

@end


