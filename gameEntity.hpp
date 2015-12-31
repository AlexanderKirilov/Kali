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
	virtual void onRender(sf::RenderWindow& mainWindow)= 0;
	virtual void onLoop();
	virtual void onCleanup();
protected:
	sf::Texture entityTextur;
	sf::Vector2 pos;

};



#endif /* GAMEENTITY_HPP_ */
