/*
 * RedoController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "RedoController.h"

namespace Controllers {

RedoController::RedoController(Models::Game& game, std::string title): CommandController(game){
	this->title = title;
}
RedoController::~RedoController(){

}

RedoController* RedoController::clone(){
	return new RedoController(Controllers::Controller::game, this->getTitle());
}

void RedoController::accept(MenuControllerVisitor* menuControllerVisitor){
	menuControllerVisitor->visit(this);
}

void RedoController::visitBroker(Controllers::CommandBroker& broker){
	broker.setCommand(this);

}

void RedoController::execute(){

}

void RedoController::undo(){

}
} /* namespace Controllers */
