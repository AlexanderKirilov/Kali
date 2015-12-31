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
	virtual void onLoad(std::string filename);

	virtual void onRender(sf::RenderWindow& mainWindow);
	virtual void onLoop();
	virtual void onCleanup();

	virtual void setPosition(float x, float y);
	virtual sf::Vector2f getPosition() const;

	virtual bool IsLoaded() const;

protected:
	sf::Sprite& getSprite();


	sf::Texture entityTexture;
	sf::Sprite entitySprite;

	std::string fileName;
	bool isLoaded;

	sf::Vector2f pos;

};



#endif /* GAMEENTITY_HPP_ */
