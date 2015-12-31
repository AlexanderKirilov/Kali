/*
 * appStateManager.hpp
 *
 *  Created on: Dec 27, 2015
 *      Author: alexander
 */

#ifndef APPSTATEMANAGER_HPP_
#define APPSTATEMANAGER_HPP_

#include "appState.hpp"
#include <queue>

enum gameStates {
    // Add your Other App States Here
    APPSTATE_NONE,
    APPSTATE_INTRO,
    APPSTATE_MENU,
    APPSTATE_GAME,
    APPSTATE_EXITING
};

class appStateManager {
    private:
        static appState* activeAppState;
        static std::queue<appState*> pendStates;

    public:
        appStateManager();
        ~appStateManager();

        static void onEvent(sf::Event& event);

        static void onLoop();

        static void onRender(sf::RenderWindow& mainWindow);

    public:
        static void setActiveAppState(int AppStateID);

        static appState* getActiveAppState();

        static gameStates checkActiveAppState();

        static void surveQueue();
};

#endif /* APPSTATEMANAGER_HPP_ */
