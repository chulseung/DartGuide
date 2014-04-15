//
//  NSDictionary+helpers.h
//  PROTO
//
//  Created by 바다 홍 on 10. 4. 5..
//  Copyright 2010 ASG Korea. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDictionary (helpers) 
	+ (NSDictionary *)dictionaryWithContentsOfData:(NSData *)data;

@end

@interface NSDictionaryHelper:NSDictionary
+ (NSDictionary *)dictionaryWithContentsOfData:(NSData *)data;

@end
