//
//  XPdfViewer.h
//  PROTO
//
//  Created by 바다 홍 on 10. 5. 28..
//  Copyright 2010 ASG Korea. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface XPdfView : UIView{
	CGPDFDocumentRef pdf;
}
-(id)initWithFrame:(CGRect)frame url:(NSString *)url;
-(void)drawInContext:(CGContextRef)context;
@end
