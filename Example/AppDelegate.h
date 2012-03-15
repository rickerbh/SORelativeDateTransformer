//
//  SORelativeDateTransformerTester
//
//  Created by StdOrbit on 12/6/10.
//  Copyright 2010 Standard Orbit Software, LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TesterViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    TesterViewController *viewController;
}

@property (nonatomic) IBOutlet UIWindow *window;
@property (nonatomic) IBOutlet TesterViewController *viewController;

@end

