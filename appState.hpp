/*
 * appState.hpp
 *
 *  Created on: Dec 27, 2015
 *      Author: alexander
 */

#ifndef APPSTATE_HPP_
#define APPSTATE_HPP_

#include "stdAfx.hpp"

class appState{
    public:
        appState();

    public:
        virtual void onActivate() = 0;

        virtual void onDeactivate() = 0;

        virtual void onLoop() = 0;

        virtual void onEvent(sf::Event& event) = 0;

        virtual void onRender(sf::RenderWindow& mainWindow) = 0;
};


#endif /* APPSTATE_HPP_ */
