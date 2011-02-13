//
//  HelloBroAppDelegate.h
//  HelloBro
//
//  Created by Adam Rutkowski on 2/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloBroAppDelegate : NSObject <UIApplicationDelegate> {	
    UIWindow *window;
//	UILabel *label;
	UIWebView *browser;
	UIBarButtonItem *tehButton;
}
- (IBAction)clickButton:(id)sender;

@property (nonatomic, retain) IBOutlet UIWindow *window;
//@property (nonatomic, retain) IBOutlet UILabel *label;
@property (nonatomic, retain) IBOutlet UIWebView *browser;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *tehButton;

@end

