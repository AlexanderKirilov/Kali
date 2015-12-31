#include "Game.hpp"

void Game::onRender(){

	mainWindow.clear(sf::Color::Black);

	appStateManager::onRender(mainWindow);

	mainWindow.display();

	/*
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    mainWindow.clear();
    mainWindow.draw(shape);
    mainWindow.display(); */
}
