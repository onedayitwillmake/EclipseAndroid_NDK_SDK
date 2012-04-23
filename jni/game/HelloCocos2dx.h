/*
 * HelloCocos2dxScene.h
 * This is a very simple empty scene to get your started
 * Contains an example of adding a sprite, listening for key press, and converting that to usuable info.
 *
 *  Created on: Apr 18, 2012
 *      Author: mariogonzalez (http://onedayitwillmake)
 */
#ifndef __HELLOCOCOS2DX_SCENE_H_
#define __HELLOCOCOS2DX_SCENE_H_

#include "cocos2d.h"
#include <map>

class HelloCocos2dx : public cocos2d::CCLayer, public cocos2d::CCIMEDelegate
{
public:
	virtual bool init();				// 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual void onEnter();				// Override onEnter to do our own initialization
	virtual void visit();
	virtual void onExit();				// Override onExit to do our own cleanup

	LAYER_NODE_FUNC(HelloCocos2dx);		// implement the "static node()" method manually
	
	// Events
	virtual void menuCloseCallback(CCObject* pSender);
	void onSimpleKeyPress( int keyCode );
private:
	void initCloseButton();
	void initCharacterToTextureMapping();
};

#endif // __HELLOCOCOS2DX_SCENE_H_
