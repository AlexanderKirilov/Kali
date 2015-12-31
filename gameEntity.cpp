/*
 * gameEntity.cpp
 *
 *  Created on: Dec 31, 2015
 *      Author: alexander
 */

#include "gameEntity.hpp"

gameEntity::gameEntity() : isLoaded(false){

}

gameEntity::~gameEntity(){

}

void gameEntity::onLoad(std::string filename){
	if( !(entityTexture.loadFromFile(filename)) ){
		fileName =  "";
		isLoaded = false;
	}else{
		fileName = filename;
		entitySprite.setTexture(entityTexture);
	}
}

void gameEntity::onLoop(){

}
void gameEntity::onRender(sf::RenderWindow& mainWindow){
	if(isLoaded){
		mainWindow.draw(entitySprite);
	}
}
void gameEntity::onCleanup(){

}

void gameEntity::setPosition(float x,float y){
	if(isLoaded){
		entitySprite.setPosition(x,y);
	}
}

sf::Vector2f gameEntity::getPosition() const
{
  if(isLoaded){
     entitySprite.getPosition();
  }
  return sf::Vector2f();
}

sf::Sprite& gameEntity::getSprite()
{
  return entitySprite;
}

bool gameEntity::IsLoaded() const
{
  return isLoaded;
}
