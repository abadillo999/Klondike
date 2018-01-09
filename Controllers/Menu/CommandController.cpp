/*
 * CommandController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "CommandController.h"

namespace Controllers {

CommandController::CommandController(Models::Game& game): Controllers::Controller(game) {

}
CommandController::~CommandController(){

}

std::string CommandController::getTitle(){
	return this->title;
}


} /* namespace Utils */
