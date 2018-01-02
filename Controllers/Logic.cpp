/*
 * Logic.cpp
 *
 *  Created on: 15 Dec 2017
 *      Author: alejandrobadillo
 */

#include "Logic.h"

namespace Controllers {

Logic::Logic() {
	   this->gameControllers[Models::States::START] = new Controllers::StartController(game);
	   this->gameControllers[Models::States::IN_GAME] = new Controllers::GameController(game);
	   this->gameControllers[Models::States::END] = new Controllers::EndController(game);
	   this->gameControllers[Models::States::VICTORY] = new Controllers::CelebrateController(game);
}



Controllers::OperationController &Logic::getOperationController(){
	return *this->gameControllers.at(game.getState());

}

} /* namespace Controllers */
