
#import <UIKit/UIKit.h>
#import "XListParser.h"


@interface CocoaXMLParser : XListParser {
    NSMutableString *currentString;
    NSMutableDictionary *currentRecord;
    BOOL storingCharacters;
    NSDateFormatter *parseFormatter;
    NSMutableData *xmlData;
    BOOL done;
    NSURLConnection *rssConnection;
    NSUInteger countOfParsedRecords;
    NSAutoreleasePool *downloadAndParsePool;
	BOOL gatherData;
}

@property (nonatomic, retain) NSMutableString *currentString;
@property (nonatomic, retain) NSMutableDictionary *currentRecord;
@property (nonatomic, retain) NSDateFormatter *parseFormatter;
@property (nonatomic, retain) NSMutableData *xmlData;
@property (nonatomic, retain) NSURLConnection *rssConnection;
@property (nonatomic, assign) NSAutoreleasePool *downloadAndParsePool;
- (void)downloadAndParse:(NSURL *)url;
@end
