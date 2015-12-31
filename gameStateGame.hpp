/*
 * gameStateGame.hpp
 *
 *  Created on: Dec 28, 2015
 *      Author: alexander
 */

#ifndef GAMESTATEGAME_HPP_
#define GAMESTATEGAME_HPP_

#include "appState.hpp"

class gameStateGame : public appState{
private:
	static gameStateGame Instance;

	sf::Clock clock;

private:
	gameStateGame();
    sf::Texture texture;
	sf::Sprite sprite;

public:
    void onActivate();
    void onDeactivate();

    void onLoop();
	void onRender(sf::RenderWindow& mainWindow);
	void onEvent(sf::Event& event);
public:
	static gameStateGame* getInstance();
};



#endif /* GAMESTATEGAME_HPP_ */
