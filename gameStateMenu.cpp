#include "gameStateMenu.hpp"

#include "stdAfx.hpp"
#include "appStateManager.hpp"

gameStateMenu gameStateMenu::Instance;
std::list<gameStateMenu::menuItem> gameStateMenu::_menuItems;
gameStateMenu::gameStateMenu(){

}

void gameStateMenu::menuItem::handleInput(int x,int y){
	std::list<menuItem>::iterator it;

	for ( it = _menuItems.begin(); it != _menuItems.end(); it++){
		sf::Rect<float> menuItemRect = (*it).rect.getGlobalBounds();

		if(menuItemRect.contains(x,y)){
			appStateManager::setActiveAppState(APPSTATE_GAME);
		}
	}
}

void gameStateMenu::onRender(sf::RenderWindow& mainWindow){



	std::list<menuItem>::iterator it;

	for ( it = _menuItems.begin(); it != _menuItems.end(); it++){
		sf::RectangleShape menuItemRect = (*it).rect ;
		//std::cout<<menuItemRect.getPosition().x<<"  = x menuItemRect"<<std::endl;
		mainWindow.draw(menuItemRect);
	}
}

void gameStateMenu::onLoop(){

}

void gameStateMenu::onActivate(){
	std::cout<<"Activating menu state"<<std::endl;



	menuItem playButton;
	if(playButton.textT.loadFromFile("images/playMenuItem.png") != true){
				return;
	}

	playButton.rect.setSize(sf::Vector2f(240,150));
	playButton.rect.setTexture(&playButton.textT);
	playButton.rect.setOutlineThickness(2);
	playButton.rect.setOutlineColor(sf::Color(250, 150, 100));

	playButton.rect.setOrigin(sf::Vector2f(120,75));
	playButton.rect.setPosition(sf::Vector2f(512,384));
	playButton.action = PLAY;

	_menuItems.push_back(playButton);

	clock.restart();
}

void gameStateMenu::onDeactivate(){
	_menuItems.clear();
}

void gameStateMenu::onEvent(sf::Event& incEvent){
	if(incEvent.type == sf::Event::MouseButtonPressed && incEvent.mouseButton.button == sf::Mouse::Left){

			gameStateMenu::menuItem menuItem = _menuItems.front();
			menuItem.rect.getGlobalBounds();
			menuItem.handleInput(incEvent.mouseButton.x,incEvent.mouseButton.y);
	}
}

gameStateMenu* gameStateMenu::getInstance() {
    return &Instance;
}
