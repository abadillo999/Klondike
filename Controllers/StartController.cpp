/*
 * StartController.cpp
 *
 *  Created on: 18 Dec 2017
 *      Author: alejandrobadillo
 */

#include "StartController.h"

namespace Controllers {

StartController::StartController(Models::Game& game): Controllers::OperationController(game) {
	// TODO Auto-generated constructor stub

}


void StartController::accept(OperationControllerVisitor &operationControllerVisitor){
	//assert(&operationControllerVisitor);
	operationControllerVisitor.visit(*this);

}
} /* namespace Controllers */
