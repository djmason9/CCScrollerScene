CCScrollerScene
===============

CCScrollerScene for Cocos2d Games

This class can easily make a scrolling background for any iphone game.
Simply set the sprite image and the speeds, then call start scroller (DONE)

<b>Usage:</b><p>
<pre>
<code>ScrollingScene *scroller = [ScrollingScene scene];</code>
<var>//set background image name, screen pos and scale</var>
<code>[scroller initBackgroundWithSpriteName:@"background.png" position:ccp(0, 0) usingScale:1];</code>
<code>//[scroller setIsVertical:YES]; //option for vertical scrolling</code>
<code>[self addChild:scroller];

<var>//start the scrolling</var>
[scroller startScroller];
// [scroller scrollIncrement:ccp(0,100)]; //optional for incremental scrolling</code>

<var>//To stop scroller call</var>
<code>[self unscheduleAllSelectors];</code>
</pre>
<p>
<b>Optional:</b>
<pre>
<var>//change the speed of the interval</var>
<code>[scroller setIntervalSpeed:0.002];
[scroller setScrollSpeed:2];
<var>//stop scrolling
[scroller stopScroller]</code></pre>

