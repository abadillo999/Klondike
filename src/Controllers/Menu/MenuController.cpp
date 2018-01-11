/*
 * MenuController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "MenuController.h"

namespace Controllers {
	MenuController::MenuController(Models::Game& game): game(game){
		broker = Controllers::CommandBroker();
		menu = new Controllers::CommandMenu(game, broker);

}

MenuController:: ~MenuController(){

}


int MenuController::writeMenu(){
	return menu->writeMenu();
}

Controllers::CommandController* MenuController::getCommandController(int option){
	return menu->get(option);
}

void MenuController::setCommandController(Controllers::CommandController* controller){
    Utils::IO &io = Utils::IO::getInstance();


    controller->visitBroker(broker);
}

    Models::Board &MenuController::getBoard() {
        return game.getBoard();
    }
} /* namespace Controllers */
