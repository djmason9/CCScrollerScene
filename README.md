CCScrollerScene
===============

CCScrollerScene for Cocos2d Games

This class can easily make a scrolling background for any iphone game.
Simply set the sprite image and the speeds, then call start scroller (DONE)

<b>-- USAGE --</b><p>
<pre>
ScrollingScene *scroller = [ScrollingScene scene];</pre>
<p/>//set background image name, screen pos and scale <br/>
<pre>
[scroller initBackgroundWithSpriteName:@"background.png" verticalPosition:ccp(0, 0) usingScale:1];

[self addChild:scroller];

[scroller startScroller];</pre>
<p/>
To stop scroller call<br/>
<pre>
[self unscheduleAllSelectors];
</pre>
<p>
<b>Optional:</b>
<br/>
//change the speed of the interval
<br/>
<pre>[scroller setIntervalSpeed:0.002];</pre>


