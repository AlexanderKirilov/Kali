#include "appStateManager.hpp"

// Refer to your Other App States Here
#include "gameStateIntro.hpp"
#include "gameStateMenu.hpp"
#include "gameStateGame.hpp"

appState* appStateManager::activeAppState = 0;
std::queue<appState*> appStateManager::pendStates;

appStateManager::appStateManager(){

}

void appStateManager::onEvent(sf::Event& event) {
    if(activeAppState) activeAppState->onEvent(event);
}

void appStateManager::onLoop() {
    if(activeAppState) activeAppState->onLoop();
}

void appStateManager::onRender(sf::RenderWindow& mainWindow) {
    if(activeAppState) activeAppState->onRender(mainWindow);
}

void appStateManager::setActiveAppState(int AppStateID) {

    // Also, add your App State Here so that the Manager can switch to it
    if(AppStateID == APPSTATE_NONE)     activeAppState = 0;
    if(AppStateID == APPSTATE_INTRO)    pendStates.push(gameStateIntro::getInstance());
    if(AppStateID == APPSTATE_MENU)		pendStates.push(gameStateMenu::getInstance());
    if(AppStateID == APPSTATE_GAME)		pendStates.push(gameStateGame::getInstance());

}

void appStateManager::surveQueue(){
	if(pendStates.empty()) return;

	appState* pendingState = pendStates.front();

	std::cout<<"changing appState from: "<< checkActiveAppState() <<" to "<<std::endl;

	if(activeAppState) activeAppState->onDeactivate();

	activeAppState = pendingState;

	if(activeAppState) activeAppState->onActivate();

	pendStates.pop();
}

appState* appStateManager::getActiveAppState() {
    return activeAppState;
}

gameStates appStateManager::checkActiveAppState(){
	if(activeAppState == gameStateIntro::getInstance()) return APPSTATE_INTRO;
	if(activeAppState == gameStateMenu::getInstance()) return APPSTATE_MENU;
	if(activeAppState == gameStateGame::getInstance()) return APPSTATE_GAME;
}
