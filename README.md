CCScrollerScene
===============

CCScrollerScene for Cocos2d Games

This class can easily make a scrolling background for any iphone game.
Simply set the sprite image and the speeds, then call start scroller (DONE)

<b>-- USAGE --</b>
<code>
ScrollingScene *scroller = [ScrollingScene scene];
</code>
//set background image name, screen pos and scale 
<code>
[scroller initBackgroundWithSpriteName:@"background.png" verticalPosition:ccp(0, 0) usingScale:1];

[self addChild:scroller];

[scroller startScroller];

</code>
To stop scroller call
<code>
[self unscheduleAllSelectors];
</code>

Optional:
<br/>
//change the speed of the interval
<br/>
<code>[scroller setIntervalSpeed:0.002];</code>


