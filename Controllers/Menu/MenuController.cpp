/*
 * MenuController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "MenuController.h"

namespace Controllers {

MenuController::MenuController() {
		broker = Controllers::CommandBroker();
		menu = new Controllers::CommandMenu(broker);

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
	controller->visitBroker(broker);
}
} /* namespace Controllers */
