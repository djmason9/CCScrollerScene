CCScrollerScene
===============

CCScrollerScene for Cocos2d Games

This class can easily make a scrolling background for any iphone game.
Simply set the sprite image and the speeds, then call start scroller (DONE)

<b>-- USAGE --</b><p>
<pre>
<code>ScrollingScene *scroller = [ScrollingScene scene];</code>
<p/>//set background image name, screen pos and scale
<code>[scroller initBackgroundWithSpriteName:@"background.png" verticalPosition:ccp(0, 0) usingScale:1];</code>

<code>[self addChild:scroller];

//start the scrolling
[scroller startScroller];</code>

//To stop scroller call
<code>[self unscheduleAllSelectors];</code>
</pre>
<p>
<b>Optional:</b>
<pre>
//change the speed of the interval
<code>[scroller setIntervalSpeed:0.002];</code></pre>


