/*
 * FlipController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "FlipController.h"

namespace Controllers {

FlipController::FlipController(std::string title){
	this->title = title;

}
FlipController::~FlipController(){

}
FlipController* FlipController::clone(){
 return new FlipController(this->getTitle());
}
void FlipController::accept(MenuControllerVisitor& menuControllerVisitor){
	menuControllerVisitor.visit(*this);
}

void FlipController::visitBroker(Controllers::CommandBroker& broker){
	broker.setCommand(this);

}


void FlipController::execute(){
	//controller.flip();
}

void FlipController::undo(){
	//controller.flipBack();
}

} /* namespace Controllers */
