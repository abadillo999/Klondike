/*
 * FlipController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "FlipController.h"

namespace Controllers {

FlipController::FlipController(Models::Game& game, std::string title): CommandController(game){
	this->title = title;

}
FlipController::~FlipController(){

}
FlipController* FlipController::clone(){
 return new FlipController(Controllers::Controller::game, this->getTitle());
}
void FlipController::accept(MenuControllerVisitor* menuControllerVisitor){
	menuControllerVisitor->visit(this);
}

void FlipController::visitBroker(Controllers::CommandBroker& broker){
	broker.setCommand(this);

}


void FlipController::execute(){
	//Controllers::Controller::flip();
}

void FlipController::undo(){
	//controller.flipBack();
}

} /* namespace Controllers */
