#include "HelloCocos2dx.h"
#include <algorithm>
#include <string>
#include <map>

#include "game/model/KeyCodeMap.h"
#include "game/util/OnedayLogger.h"
#include "game/util/OnedayMacro.h"
#include "game/model/KeyCodemap.h"

USING_NS_CC;

// on "init" you need to initialize your instance
bool HelloCocos2dx::init() {
	if ( !CCLayer::init() ) {
		return false;
	}

	setIsKeypadEnabled(true);

	// Add a sprite
	cocos2d::CCSprite* background = cocos2d::CCSprite::spriteWithFile("background.png");
	background->setAnchorPoint( ccp(0, 0) );
	background->setPosition( ccp(0,0) );
	addChild( background );

	// This can be used to log a single string - for simple 'I reached this point!' type of debugging
	ONEDAY_LOG_0("This can log a simple string");

	// This can be used to log 1 object that has a << operator
	ONEDAY_LOG_1("The value of X=", background->getPosition().x);

	// This can be used to log 2 objects
	ONEDAY_LOG_2("Background-position X=", background->getPosition().x, " Y=", background->getPosition().y);

	return true;
}


void HelloCocos2dx::onEnter() {
	initCloseButton();
	cocos2d::CCLayer::onEnter();
}

void HelloCocos2dx::onExit() {
	cocos2d::CCLayer::onExit();
}

void HelloCocos2dx::visit() {
	cocos2d::CCLayer::visit();
}

void HelloCocos2dx::onSimpleKeyPress( int keyCode ) {
	// Convert the integer into a char, which we can then convert to regular std::string easily
	const char* mappedKeyCode = model::keycodes::MAP[keyCode];

	// This is an example of checking if delete was pressed
	if( mappedKeyCode == model::keycodes::MAP[model::keycodes::KEYCODE_DEL] ) {
		ONEDAY_LOG_0("DELETE PRESSED!");
	}

	// Convert to lowercase
	std::string keycodeAsString( mappedKeyCode );
}

/***********************************
 *  MENU METHODS
 ***********************************/
void HelloCocos2dx::menuCloseCallback(CCObject* pSender) {
	CCDirector::sharedDirector()->end();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}


void HelloCocos2dx::initCloseButton() {
	//Add a menu item with "X" image, which is clicked to quit the program you may modify it.
	// add a "close" icon to exit the progress. it's an autorelease object
	CCMenuItemImage *pCloseItem = CCMenuItemImage::itemFromNormalImage( "CloseNormal.png", "CloseSelected.png", this, menu_selector(HelloCocos2dx::menuCloseCallback) );
	pCloseItem->setPosition( ccp(CCDirector::sharedDirector()->getWinSize().width - 20, 20) );

	// create and add menu
	CCMenu* pMenu = CCMenu::menuWithItems(pCloseItem, NULL);
	pMenu->setPosition( CCPointZero );
	this->addChild(pMenu, 1);
}
