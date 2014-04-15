
#import <Foundation/Foundation.h>

@interface NSMutableData (AES256)
- (BOOL) decryptWithKey: (NSString *) key;
- (BOOL) encryptWithKey: (NSString *) key;
@end
