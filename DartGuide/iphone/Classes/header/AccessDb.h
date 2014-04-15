//
//  AccessDb.h
//  PROTO
//
//  Created by 바다 홍 on 10. 3. 27..
//  Copyright 2010 ASG Korea. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "/usr/include/sqlite3.h"


@interface AccessDb : NSObject {
	sqlite3 *database;
}
-(void)openDataBase;
-(void)closeDataBase;
-(NSString *)dataFilePath;
-(NSDictionary *)createTable:(NSDictionary *)table;
-(NSMutableDictionary *)selectTable:(NSDictionary *)table params:(NSDictionary *)params;
-(NSMutableDictionary *)insertRecord:(NSDictionary *)table params:(NSDictionary *)params;
-(NSMutableDictionary *)selectRecord:(NSDictionary *)table params:(NSDictionary *)params;
-(NSMutableDictionary *)deleteRecord:(NSDictionary *)table params:(NSDictionary *)params;
@end
