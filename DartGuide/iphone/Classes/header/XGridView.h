//
//  DTGridViewController.h
//  DTKit
//
//  Created by Daniel Tull on 19.04.2009.
//  Copyright 2009 Daniel Tull. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DTGridView.h"
#import "XFORM.h"

@interface XGridView : NSObject <DTGridViewDataSource, DTGridViewDelegate> {
	DTGridView *gridView;
    XFORM *parent;
    NSDictionary *dataSource;
    NSDictionary *parameter;
    NSArray *colours;
}

@property (nonatomic, retain) NSDictionary *dataSource;
@property (nonatomic, retain) DTGridView *gridView;
@property (nonatomic, retain) XFORM *parent;
@property (nonatomic, retain) NSDictionary *parameter;
- (id)initWithDict:(NSDictionary *)dict parent:pa ;
@end

