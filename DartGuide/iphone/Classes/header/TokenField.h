#import <UIKit/UIKit.h>
#import "TITokenFieldView.h"

@interface TokenField : NSObject <TITokenFieldViewDelegate, UITextViewDelegate>{
    TITokenFieldView * tokenFieldView;
    NSDictionary *parameter;
    NSObject *parent;
    
}
@property (nonatomic, retain) TITokenFieldView * tokenFieldView;
@property (nonatomic, retain) NSDictionary *parameter;
- (id)initWithDict:(NSDictionary *)dict  parent:(NSObject *)p;

@end


