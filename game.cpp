/*
 * game.cpp
 *
 *  Created on: Dec 26, 2015
 *      Author: alexander
 */

#include "Game.hpp"

sf::RenderWindow Game::mainWindow;
sf::Event Game::mainEvent;
bool Game::isRun;

Game::Game(){
	isRun = true;
	appStateManager::setActiveAppState(APPSTATE_NONE);
}

Game::~Game(){

}


int Game::onExecute(){
	if(onInit() == false){
		return -1;
	}

	std::cout<<"entering loop"<<std::endl;

    while(isRun){
    	appStateManager::surveQueue();

    	while (mainWindow.pollEvent(mainEvent)){
    		onEvent();
    	}

        onLoop();
        onRender();
    }

    onCleanup();

    return 0;
}

int main(){
    Game theGame;

    return theGame.onExecute();
}


