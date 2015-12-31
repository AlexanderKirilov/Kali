/*
 * gameStateGame.cpp
 *
 *  Created on: Dec 28, 2015
 *      Author: alexander
 */
#include "stdAfx.hpp"
#include "gameStateGame.hpp"
#include "appStateManager.hpp"

gameStateGame gameStateGame::Instance;

gameStateGame::gameStateGame(){

}

void gameStateGame::onRender(sf::RenderWindow& mainWindow){

}

void gameStateGame::onLoop(){
}

void gameStateGame::onActivate(){
	std::cout<<"Activating Game state"<<std::endl;

	clock.restart();
}

void gameStateGame::onDeactivate(){

}

void gameStateGame::onEvent(sf::Event& event){

}

gameStateGame* gameStateGame::getInstance() {
    return &Instance;
}


