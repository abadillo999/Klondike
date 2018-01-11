/*
 * UndoController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "UndoController.h"

namespace Controllers {

UndoController::UndoController(Models::Game& game, std::string title): CommandController(game){
	this->title = title;
}

UndoController::~UndoController(){

}

UndoController* UndoController::clone(){
	return new UndoController(Controllers::Controller::game, this->title);
}

void UndoController::accept(MenuControllerVisitor& menuControllerVisitor){
	menuControllerVisitor.visit(*this);
}


void UndoController::visitBroker(Controllers::CommandBroker& broker){
	broker.setCommand(this);

}

void UndoController::execute(){

}

void UndoController::undo(){

}


} /* namespace Controllers */
