/*
 * gameEntityManager.hpp
 *
 *  Created on: Dec 29, 2015
 *      Author: alexander
 */

#ifndef GAMEENTITYMANAGER_HPP_
#define GAMEENTITYMANAGER_HPP_

#include"stdAfx.hpp"
#include"gameEntity.hpp"
#include<map>

class gameEntityManager{
public:
	gameEntityManager();
	~gameEntityManager();

	static void addEntity(std::string name, gameEntity* gameObject);
	static void removeEntity(std::string name);
	static int getEntityCount();

	static gameEntity* getEntity(std::string name);


	static void onRender(sf::RenderWindow& mainWindow);
	static void onLoop();

	static void onCleanup();

private:
	static std::map<std::string, gameEntity*> _gameObjects;


	//Handle pointers cleanup
	struct gameEntityDeallocator{
		void operator()(const std::pair<std::string,gameEntity*> & p) const{
			delete p.second;
		}
	};
};



#endif /* GAMEENTITYMANAGER_HPP_ */
