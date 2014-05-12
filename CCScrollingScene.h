//
//  ScrollingScene.h
//  This class can make a scrolling background for any iphone game.
//  Simply set the sprite image and the speeds, then call start scroller (DONE)
//
//  -- USAGE --

//  ScrollingScene *scroller = [ScrollingScene scene];
//  [scroller initBackgroundWithSpriteName:@"background.png" verticalPosition:ccp(0, 0)];
//  [self addChild:scroller];
//  [scroller startScroller];

//  Created by Mason, Darren J on 5/12/14.
//  Copyright 2014 Darren Mason. All rights reserved.
//  darren@mypocket-technologies.com
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "cocos2d-ui.h"


/**
 * Add these default values to your .pch file
 */
//#define ORIENTATION_PORTRAIT 0
//#define ORIENTATION_LANDSCAPE 1
//#define SCROLL_SPEED 1.5
//#define INTERVAL 0.007


@interface CCScrollingScene : CCScene {

}

// --------------------------------------------------- //
//            OVERRIDE THE DEFAULT SPEEDS              //
// --------------------------------------------------- //

// This is the amount of movement the sprite will move during each interval.
@property(nonatomic, readwrite) CGFloat scrollSpeed;

// This is the speed in which the background loop is called.
@property(nonatomic,readwrite) CGFloat intervalSpeed;

// --------------------------------------------------- //

/**
 * Inits a background by using a sprite and a width
 * @param background
 * @param orientation
 */
-(void)initBackgroundWithSpriteName:(NSString*)background verticalPosition:(CGPoint)pos;
/**
 * Start scrolling background with delay Interval set as constant
 */
-(void)startScroller;
/**
 * Static init object
 */
+ (CCScrollingScene *)scene;
/**
 * Called by static scene
 */
- (id)init;

@end