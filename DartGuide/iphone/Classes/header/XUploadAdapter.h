//
//  XLocationAdapter.h
//  PROTO
//
//  Created by BADA HONG on 12. 6. 25..
//  Copyright (c) 2012년 ASG Korea. All rights reserved.
//

#import "XAdapter.h"

@interface XUploadAdapter : XAdapter
-(void)uploadFile:(NSString *)fileName fileid:(NSString *)fileid host:(NSString *)host script:(NSString *)script;
@end
