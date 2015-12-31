#include "Game.hpp"

void Game::onEvent(){

	if(mainEvent.type == sf::Event::Closed){
		appStateManager::setActiveAppState(APPSTATE_EXITING);
		std::cout<<isRun<<std::endl;
		std::cout<<appStateManager::checkActiveAppState()<<std::endl;
	}

	appStateManager::onEvent(mainEvent);
}
