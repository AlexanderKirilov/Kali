/*
 * Game.hpp
 *
 *  Created on: Dec 26, 2015
 *      Author: alexander
 */

#ifndef GAME_HPP_
#define GAME_HPP_

#include "stdAfx.hpp"
#include "appStateManager.hpp"

class Game{
public:

	Game(); //onInit
	~Game(); //onClean

	static int onExecute();

	static bool isRun;

	bool static onInit();
	void static onLoop();
	void static onEvent();
	void static onRender();
	void static onCleanup();

	enum gameState { UNINITIALIZED, SHOWING_SPLASH, PAUSED, SHOWING_MENU, PLAYING, EXITING };

private:

	static sf::RenderWindow mainWindow;
	static sf::Event mainEvent;
};



#endif /* GAME_HPP_ */
