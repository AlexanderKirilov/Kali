/*
 * gameEntity.hpp
 *
 *  Created on: Dec 29, 2015
 *      Author: alexander
 */

#ifndef GAMEENTITY_HPP_
#define GAMEENTITY_HPP_

#include "stdAfx.hpp"

class gameEntity{
public:
	gameEntity();
	~gameEntity();

public:
	virtual void onRender(sf::RenderWindow& mainWindow);
	virtual void onLoop();
	virtual void onCleanup();
};



#endif /* GAMEENTITY_HPP_ */
