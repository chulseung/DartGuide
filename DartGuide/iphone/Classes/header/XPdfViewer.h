//
//  XPdfViewer.h
//  PROTO
//
//  Created by 바다 홍 on 10. 5. 28..
//  Copyright 2010 ASG Korea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XPdfView.h"
@interface XPdfViewer : UIViewController <UIScrollViewDelegate>{
	UIScrollView *scrollView;
	XPdfView *pdfView;
	NSDictionary *parameter;
}
-(id)initWithFrame:(CGRect)frame url:(NSString *)url;
@property (nonatomic, retain) NSDictionary *parameter;
@property (nonatomic, retain) UIView *pdfView;
@property (nonatomic, retain) UIScrollView *scrollView;
@end
