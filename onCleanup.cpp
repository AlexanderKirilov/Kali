#include "Game.hpp"

void Game::onCleanup(){
	std::cout<<"calling onCleanup_main"<<std::endl;
	mainWindow.close();
}
