@protocol ModalManager
- (void)setModalManager:(id<ModalManager>)controller;
- (void)setDone:(NSDictionary *)dict;
- (void)dismissModal:(NSDictionary *)dict;
- (UINavigationController *)getNavigator:(NSString *)path;
@end

@protocol PopoverManager
- (void)setPopoverManager:(id<ModalManager>)controller;
- (void)setDone:(NSDictionary *)dict;
- (void)dismissPopover:(NSDictionary *)dict;
@end
