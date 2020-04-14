//
//  FSCalendarScopeHandle.h
//  FSCalendar
//

#import <UIKit/UIKit.h>

@class FSCalendar;

@interface FSCalendarScopeHandle : UIView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) FSCalendar *calendar;

- (void)handlePan:(id)sender;

@end