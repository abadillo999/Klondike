/*
 * UndoController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "UndoController.h"

namespace Controllers {

UndoController::UndoController(std::string title){
	this->title = title;
}

UndoController::~UndoController(){

}

UndoController* UndoController::clone(){
	return new UndoController(title);
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
