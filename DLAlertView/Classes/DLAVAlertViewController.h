//
//  DLAVAlertView.h
//  DLAVAlertView
//
//  Created by Vincent Esche on 31/10/13.
//  Copyright (c) 2013 Vincent Esche. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DLAVAlertView ()

- (void)updateFrameWithAnimationOfDuration:(NSTimeInterval)duration;
- (void)hideWithCompletion:(void (^)(void))completion;
- (void)unhideWithCompletion:(void (^)(void))completion;
- (void)dismissWithBackdropTap;

@end

@interface DLAVAlertViewController : UIViewController <UITextFieldDelegate>
+ (instancetype)sharedController;
+ (void)dismissAllAlertViews;

@property (readwrite, strong, nonatomic) DLAVAlertView *currentAlertView;

@end
