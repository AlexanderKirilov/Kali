#include "stdAfx.hpp"
#include "gameStateIntro.hpp"
#include "appStateManager.hpp"

gameStateIntro gameStateIntro::Instance;

gameStateIntro::gameStateIntro(){

}

void gameStateIntro::onRender(sf::RenderWindow& mainWindow){

	mainWindow.draw(sprite);
}

void gameStateIntro::onLoop(){
	if(clock.getElapsedTime().asSeconds() >= 4){
		appStateManager::setActiveAppState(APPSTATE_MENU);
	}
}

void gameStateIntro::onActivate(){
	std::cout<<"Activating intro state"<<std::endl;

	if(texture.loadFromFile("images/splash_logo.png") != true){

		return;
	}

	sprite.setTexture(texture);
	sprite.setOrigin(sf::Vector2f(215,246));
	sprite.setPosition(sf::Vector2f(512,384));

	clock.restart();
}

void gameStateIntro::onDeactivate(){

}

void gameStateIntro::onEvent(sf::Event& event){

}

gameStateIntro* gameStateIntro::getInstance() {
    return &Instance;
}
