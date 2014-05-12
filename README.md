CCScrollerScene
===============

CCScrollerScene for Cocos2d Games

This class can easily make a scrolling background for any iphone game.
Simply set the sprite image and the speeds, then call start scroller (DONE)

-- USAGE --

ScrollingScene *scroller = [ScrollingScene scene];

[scroller initBackgroundWithSpriteName:@"background.png" verticalPosition:ccp(0, 0)];

[self addChild:scroller];

[scroller startScroller];


To stop scroller call

[self unscheduleAllSelectors];


