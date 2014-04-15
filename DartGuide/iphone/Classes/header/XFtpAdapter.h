#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "XAdapter.h"
#import "iFtpClient.h"
#define FTP_SCHEME @"ftp://"

@interface XFtpAdapter : XAdapter <iFtpClientDelegate> {
    iFtpClient *_ftpClient;
	UIProgressView *progress;
	UILabel *progresslabel;
}

@property (nonatomic, retain) iFtpClient *_ftpClient;
@property (nonatomic, retain) UIProgressView *progress;
@property (nonatomic, retain) UILabel *progresslabel;

@end
