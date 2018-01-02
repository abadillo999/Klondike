/*
 * MoveController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "MoveController.h"

namespace Controllers {

MoveController::MoveController(std::string title){
	this->title = title;
}
MoveController::~MoveController(){

}

MoveController* MoveController::clone(){
	return new MoveController(this->getTitle());
}


void MoveController::accept(MenuControllerVisitor& menuControllerVisitor) {
	menuControllerVisitor.visit(*this);
}

void MoveController::visitBroker(Controllers::CommandBroker& broker){
	broker.setCommand(this);
}

bool MoveController::canTakeCard(int position){

}

bool MoveController::canMoveCardTo(int Origin, int destination){

}
void MoveController::setMove(int Origin, int destination){

}

void MoveController::execute(){
  //controller.moveCard(origin, destination);
}

void MoveController::undo(){
  //controller.moveCard(destination, origin);
}


} /* namespace Controllers */
