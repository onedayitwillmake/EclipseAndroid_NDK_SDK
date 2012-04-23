/*
 * BaseEntity.h
 * Simple object that contains a Cocos2D node
 *
 *  Created on: Apr 18, 2012
 *      Author: mariogonzalez
 */

#ifndef BASEENTITY_H_
#define BASEENTITY_H_

#include "cocos2d.h"

namespace entity {
	class BaseEntity {
public:
		BaseEntity();

		static BaseEntity* Create();
		virtual ~BaseEntity();

		///// ACCESSORS
		void setView( cocos2d::CCNode* aView ) { _view = aView; };
		cocos2d::CCNode* getView() { return _view; };
protected:
		cocos2d::CCNode* _view;
		bool _isMarkedForDeletion; // When true - these will be deleted the the after the closest update loop
	//	std::vector< components::BaseComponent* > _components;
	};
}
#endif /* BASEENTITY_H_ */
