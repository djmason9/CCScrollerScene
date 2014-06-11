/*
ScrollingScene.h
 
Created by Mason, Darren J on 5/12/14.
Copyright 2014 Darren Mason. All rights reserved.
darren@mypocket-technologies.com
 
 
This class can make a scrolling background for any iphone game.
Simply set the sprite image and the speeds, then call start scroller (DONE)

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.


  -- USAGE --

  ScrollingScene *scroller = [ScrollingScene scene];
  [scroller initBackgroundWithSpriteName:@"background.png" verticalPosition:ccp(0, 0) usingScale:0.5];
  [self addChild:scroller];
  [scroller startScroller];


****************************************************************************/
#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "cocos2d-ui.h"


/**
 * Add these default values to your .pch file
 */
#define ORIENTATION_PORTRAIT 0
#define ORIENTATION_LANDSCAPE 1
#define SCROLL_SPEED 1.5
#define INTERVAL 0.007


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
 * @param scale
 */
-(void)initBackgroundWithSpriteName:(NSString*)background verticalPosition:(CGPoint)pos usingScale:(CGFloat)scale;
/**
 * Start scrolling background with delay Interval set as constant
 */
-(void)startScroller;
/**
 * Stop scrolling background
 */
-(void)stopScroller;
/**
 * Static init object
 */
+ (CCScrollingScene *)scene;
/**
 * Called by static scene or directly
 */
- (id)init;

@end
