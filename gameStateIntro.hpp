/*
 * splashScreen.h
 *
 *  Created on: Dec 26, 2015
 *      Author: alexander
 */

#ifndef SPLASHSCREEN_H_
#define SPLASHSCREEN_H_

#include "appState.hpp"

class gameStateIntro : public appState {
private:
	static gameStateIntro Instance;

	sf::Clock clock;

private:
	gameStateIntro();
    sf::Texture texture;
	sf::Sprite sprite;

public:
    void onActivate();
    void onDeactivate();

    void onLoop();
	void onRender(sf::RenderWindow& mainWindow);
	void onEvent(sf::Event& event);
public:
	static gameStateIntro* getInstance();
};

#endif /* SPLASHSCREEN_H_ */
