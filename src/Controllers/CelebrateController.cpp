/*
 * CelebrateController.cpp
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#include "CelebrateController.h"

namespace Controllers {

CelebrateController::CelebrateController(Models::Game& game): Controllers::OperationController(game) {
	// TODO Auto-generated constructor stub

}

CelebrateController::~CelebrateController() {
	// TODO Auto-generated destructor stub
}
void CelebrateController::accept(OperationControllerVisitor& operationControllerVisitor){
	  operationControllerVisitor.visit(*this);

}


} /* namespace Controllers */
