/*
 * EndController.cpp
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#include "EndController.h"

namespace Controllers {

EndController::EndController(Models::Game& game): Controllers::OperationController(game)  {
	// TODO Auto-generated constructor stub

}

EndController::~EndController() {
	// TODO Auto-generated destructor stub
}

void EndController::accept(OperationControllerVisitor &operationControllerVisitor){
  //assert(&operationControllerVisitor);

  operationControllerVisitor.visit(*this);

}
} /* namespace Controllers */
