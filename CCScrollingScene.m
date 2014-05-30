//
//  ScrollingScene.m
//  x-runner
//
//  Created by Mason, Darren J on 5/12/14.
//  Copyright 2014 Darren Mason. All rights reserved.
//

#import "CCScrollingScene.h"

@implementation CCScrollingScene{
    CCSprite * _scrollingBackground1;
    CCSprite * _scrollingBackground2;
    CGFloat _screenWidth;

}

-(void)initBackgroundWithSpriteName:(NSString*)background verticalPosition:(CGPoint)pos{

    
    _scrollingBackground1 = [CCSprite spriteWithImageNamed:background];
    _scrollingBackground1.anchorPoint = ccp(0,0);
    _scrollingBackground1.position = pos;
    [self addChild:_scrollingBackground1];
    
    //second background
    _scrollingBackground2 =  [CCSprite spriteWithImageNamed:background];
    _scrollingBackground2.anchorPoint = ccp(0,0);
    _scrollingBackground2.position = ccp([_scrollingBackground1 boundingBox].size.width,pos.y);
    [self addChild:_scrollingBackground2];
    
}

-(void)startScroller{
    
    [self schedule:@selector(scrollBackground:) interval:_intervalSpeed];
}

/**
 * Private method that is called by the scheduler repeatedly
 @param cctime
 */
-(void)scrollBackground:(CCTime)cctime{

    _scrollingBackground1.position = ccp(_scrollingBackground1.position.x - _scrollSpeed,_scrollingBackground1.position.y);
    _scrollingBackground2.position = ccp(_scrollingBackground2.position.x - _scrollSpeed,_scrollingBackground2.position.y);
    
    if(_scrollingBackground1.position.x < -_scrollingBackground1.boundingBox.size.width)
    {
        _scrollingBackground1.position = ccp(_scrollingBackground2.position.x + _scrollingBackground2.boundingBox.size.width, _scrollingBackground1.position.y);
    }
    
    if(_scrollingBackground2.position.x < -_scrollingBackground2.boundingBox.size.width)
    {
        _scrollingBackground2.position = ccp(_scrollingBackground1.position.x + _scrollingBackground1.boundingBox.size.width, _scrollingBackground2.position.y);
    }
}

+ (CCScrollingScene *)scene{
    return [[self alloc] init];
}

- (id)init{
    self = [super init];
    if (!self) return(nil);
    
    CGRect screenRect = [[UIScreen mainScreen] bounds];
    _screenWidth = screenRect.size.width;
    
    //set default speeds
    _scrollSpeed = SCROLL_SPEED;
    _intervalSpeed = INTERVAL;
    
    return self;
}

@end
