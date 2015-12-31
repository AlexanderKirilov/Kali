/*
 * gameEntityManager.cpp
 *
 *  Created on: Dec 29, 2015
 *      Author: alexander
 */
#include "gameEntityManager.hpp"

std::map<std::string, gameEntity*> gameEntityManager::_gameObjects;

gameEntityManager::gameEntityManager(){

}

gameEntityManager::~gameEntityManager(){
	std::for_each(_gameObjects.begin(),_gameObjects.end(),gameEntityDeallocator());
}

void gameEntityManager::addEntity(std::string name, gameEntity* entity){
	_gameObjects.insert(std::pair<std::string,gameEntity*>(name, entity));
}

void gameEntityManager::removeEntity(std::string name){
	std::map<std::string, gameEntity*>::iterator results = _gameObjects.find(name);
	if(results != _gameObjects.end() ){
		delete results->second;
		_gameObjects.erase(results);
	}
}

int gameEntityManager::getEntityCount(){
	return _gameObjects.size();
}

gameEntity* gameEntityManager::getEntity(std::string name){
	std::map<std::string, gameEntity*>::const_iterator results = _gameObjects.find(name);
}

void gameEntityManager::onRender(sf::RenderWindow& mainWindow){
	if(!_gameObjects.empty()){
		std::map<std::string,gameEntity*>::const_iterator itr = _gameObjects.begin();

		while(itr != _gameObjects.end()){
			itr->second->onRender(mainWindow);
			itr++;
		}
	}
}

void gameEntityManager::onLoop(){
	if(!_gameObjects.empty()){
		std::map<std::string,gameEntity*>::const_iterator itr = _gameObjects.begin();

		while(itr != _gameObjects.end()){
			itr->second->onLoop();
			itr++;
		}
	}
}

void gameEntityManager::onCleanup(){
	if(!_gameObjects.empty()){
		std::map<std::string,gameEntity*>::const_iterator itr = _gameObjects.begin();

		while(itr != _gameObjects.end()){
			itr->second->onCleanup();
			itr++;
		}
	}
}
