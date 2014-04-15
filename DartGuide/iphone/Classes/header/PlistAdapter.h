//
//  PlistAdapter.h
//  PROTO
//
//  Created by BADA HONG on 12. 6. 3..
//  Copyright (c) 2012년 ASG Korea. All rights reserved.
//

#import "XAdapter.h"
#import "ASIHTTPRequestDelegate.h"
#import "ASIProgressDelegate.h"
#import "XMLPROP.h"

@interface PlistAdapter : XAdapter<ASIHTTPRequestDelegate>{

}
-(void)downloadAndParse:(XMLPROP *) xmlProp;
@end
