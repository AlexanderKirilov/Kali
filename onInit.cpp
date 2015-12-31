#include "Game.hpp"

bool Game::onInit(){
	std::cout<<"onInit"<<std::endl;

	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	mainWindow.create(sf::VideoMode(1024,768,32),"Hold",sf::Style::Default, settings);
	mainWindow.setFramerateLimit(10);


	appStateManager::setActiveAppState(APPSTATE_INTRO);
	return true;
}
