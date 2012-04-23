/*
 * GameEntity.cpp
 *
 *  Created on: Apr 18, 2012
 *      Author: mariogonzalez
 */

#include "BaseEntity.h"
#include "game/util/OnedayLogger.h"

namespace entity {
	BaseEntity::BaseEntity() {
	}

	BaseEntity* BaseEntity::Create() {
		return new BaseEntity();
	}

	BaseEntity::~BaseEntity() {
		ONEDAY_LOG_0("BaseEntity::~BaseEntity");

		if(_view) {
			if( _view->getParent() )
				_view->removeFromParentAndCleanup( true );
			else
				_view->cleanup();
		}
		_view = NULL;
	}
}

