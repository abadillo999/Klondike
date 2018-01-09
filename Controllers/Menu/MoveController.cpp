/*
 * MoveController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "MoveController.h"
#include "../../Utils/IO.h"
#include <assert.h>

namespace Controllers {

MoveController::MoveController(Models::Game& game, std::string title): CommandController(game){
	this->title = title;
}
MoveController::~MoveController(){

}

MoveController* MoveController::clone(){
	return new MoveController(Controllers::Controller::game, this->getTitle());
}


void MoveController::accept(MenuControllerVisitor* menuControllerVisitor) {
    assert(&menuControllerVisitor);
    Utils::IO &io = Utils::IO::getInstance();
    io.write("move");
    menuControllerVisitor->visit(new MoveController(Controllers::Controller::game, this->getTitle()));
    io.write("moved");

}

void MoveController::visitBroker(Controllers::CommandBroker& broker){
    Utils::IO &io = Utils::IO::getInstance();
    io.write("move to broker");
	broker.setCommand(this);
}

bool MoveController::canTakeCard(int position){
    return true;
}

bool MoveController::canMoveCardTo(int Origin, int destination){
    return true;

}
void MoveController::setMove(int Origin, int Destination){
    this->origin = Origin;
    this->destination = Destination;
}

void MoveController::execute(){
  game.moveCard(origin, destination);
}

void MoveController::undo(){
  game.moveCard(destination, origin);
}


} /* namespace Controllers */
