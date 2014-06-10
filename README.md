CCScrollerScene
===============

CCScrollerScene for Cocos2d Games

This class can easily make a scrolling background for any iphone game.
Simply set the sprite image and the speeds, then call start scroller (DONE)

-- USAGE --

ScrollingScene *scroller = [ScrollingScene scene];

//set background image name, screen pos and scale 
[scroller initBackgroundWithSpriteName:@"background.png" verticalPosition:ccp(0, 0) usingScale:1];

[self addChild:scroller];

[scroller startScroller];


To stop scroller call

[self unscheduleAllSelectors];


Optional:

//change the speed of the interval

[scroller setIntervalSpeed:0.002];


