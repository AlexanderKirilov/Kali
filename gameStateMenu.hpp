/*
 * gameStateMenu.h
 *
 *  Created on: Dec 26, 2015
 *      Author: alexander
 */

#ifndef GAMESTATEMENU_H_
#define GAMESTATEMENU_H_

#include "appState.hpp"
#include <list>

class gameStateMenu : public appState {
public:
	enum menuResult { NONE, EXIT, PLAY };
	struct menuItem{
		sf::Texture textT;
		sf::RectangleShape rect;
		menuResult action;

		void handleInput(int x,int y);
	};

private:
	static gameStateMenu Instance;
	static std::list<menuItem> _menuItems;

	sf::Clock clock;

private:
	gameStateMenu();

public:
    void onActivate();
    void onDeactivate();

    void onLoop();
	void onRender(sf::RenderWindow& mainWindow);
	void onEvent(sf::Event& event);


public:

	static gameStateMenu* getInstance();
};

#endif /* SPLASHSCREEN_H_ */
