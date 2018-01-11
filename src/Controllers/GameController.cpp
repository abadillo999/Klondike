/*
 * GameController.cpp
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#include "GameController.h"

namespace Controllers {

GameController::GameController(Models::Game& game): Controllers::OperationController(game) {
    menuController = new Controllers::MenuController(game);


}

GameController::~GameController() {
	// TODO Auto-generated destructor stub
}
void GameController::accept(OperationControllerVisitor& operationControllerVisitor){
  //assert(&operationControllerVisitor);

  operationControllerVisitor.visit(*this);

}

Controllers::MenuController* GameController::getMenuController(){
	return menuController;
}





} /* namespace Controllers */
