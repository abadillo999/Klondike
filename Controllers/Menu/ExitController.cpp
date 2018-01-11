/*
 * ExitController.cpp
 *
 *  Created on: Dec 28, 2017
 *      Author: alejandro
 */

#include "ExitController.h"

namespace Controllers {

ExitController::ExitController(Models::Game& game, std::string title): CommandController(game){
	this->title = title;
}
ExitController::~ExitController(){

}

ExitController* ExitController::clone(){
 return nullptr;
}


void ExitController::accept(MenuControllerVisitor& menuControllerVisitor) {
}

void ExitController::visitBroker(Controllers::CommandBroker& broker){


}

void ExitController::execute(){
  //controller.moveCard(origin, destination);
}

void ExitController::undo(){
  //controller.moveCard(destination, origin);
}
} /* namespace Controller */
