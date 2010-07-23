//
//  NearBiAppDelegate.h
//  NearBi
//
//  Created by Chris Chan on 24/07/2010.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface NearBiAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;

    UITabBarController *tabBarController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;


@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end

