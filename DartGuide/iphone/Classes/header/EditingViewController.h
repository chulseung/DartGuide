#import "PROTO.h"

@protocol PropertyEditing
- (void)setValue:(id)newValue forEditedProperty:(NSString *)field;
@end

@interface EditingViewController : UIViewController {
	
	UITextField *textField;
	UIDatePicker *datePicker;
	UIPickerView *customPicker;
    id editedObject;
    NSString *editedPropertyKey;
    NSString *editedPropertyDisplayName;
    BOOL editingDate;
	id <PropertyEditing> sourceController;
}

@property (nonatomic, retain) IBOutlet UITextField *textField;
@property (nonatomic, retain) IBOutlet UIDatePicker *datePicker;
@property (nonatomic, retain) IBOutlet UIPickerView *customPicker;

/*
 Aspects of the object being edited:
 The object itself, the name of the property being edited, and the name to display to the user.
 */
@property (nonatomic, retain) id editedObject;
@property (nonatomic, retain) NSString *editedPropertyKey;
@property (nonatomic, retain) NSString *editedPropertyDisplayName;
@property (nonatomic, assign, getter=isEditingDate) BOOL editingDate;
@property (nonatomic, retain) id <PropertyEditing>  sourceController;
- (void)cancel;
- (void)save;
@end

