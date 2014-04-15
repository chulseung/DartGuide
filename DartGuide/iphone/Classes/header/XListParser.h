
#import <UIKit/UIKit.h>

@class XListParser;
typedef enum {
    XMLParserTypeAbstract = -1,
    XMLParserTypeNSXMLParser = 0,
    XMLParserTypeLibXMLParser
} XMLParserType;

@protocol XListParserDelegate <NSObject>

@optional
// Called by the parser when parsing is finished.
- (void)parserDidEndParsingData:(XListParser *)parser;
// Called by the parser in the case of an error.
- (void)parser:(XListParser *)parser didFailWithError:(NSError *)error;
// Called by the parser when one or more songs have been parsed. This method may be called multiple times.
- (void)parser:(XListParser *)parser didParseRecords:(NSArray *)parsedSongs;
@end


@interface XListParser : NSObject {
    id <XListParserDelegate> delegate;
    NSMutableArray *parsedRecords;
    // This time interval is used to measure the overall time the parser takes to download and parse XML.
    NSTimeInterval startTimeReference;
    NSTimeInterval downloadStartTimeReference;
    double parseDuration;
    double downloadDuration;
    double totalDuration;
}

@property (nonatomic, assign) id <XListParserDelegate> delegate;
@property (nonatomic, retain) NSMutableArray *parsedRecords;
@property NSTimeInterval startTimeReference;
@property NSTimeInterval downloadStartTimeReference;
@property double parseDuration;
@property double downloadDuration;
@property double totalDuration;

+ (NSString *)parserName;
+ (XMLParserType)parserType;

- (void)start:(NSString *)url;

// Subclasses must implement this method. It will be invoked on a secondary thread to keep the application responsive.
// Although NSURLConnection is inherently asynchronous, the parsing can be quite CPU intensive on the device, so
// the user interface can be kept responsive by moving that work off the main thread. This does create additional
// complexity, as any code which interacts with the UI must then do so in a thread-safe manner.
- (void)downloadAndParse:(NSURL *)url;

// Subclasses should invoke these methods and let the superclass manage communication with the delegate.
// Each of these methods must be invoked on the main thread.
- (void)downloadStarted;
- (void)downloadEnded;
- (void)parseEnded;
- (void)parseRecords:(NSMutableDictionary *)record;
- (void)parseError:(NSError *)error;
- (void)addToParseDuration:(NSNumber *)duration;
@end
