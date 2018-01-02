/*
 * OperationController.h
 *
 *  Created on: 15 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_OPERATIONCONTROLLER_H_
#define CONTROLLERS_OPERATIONCONTROLLER_H_
#include "../Models/Game.h"
#include "Controller.h"
#include "OperationControllerVisitor.h"

namespace Controllers {

class OperationController: public Controllers::Controller{
public:
	OperationController(Models::Game& game);
	virtual ~OperationController() = default;

	virtual void accept(OperationControllerVisitor &operationControllerVisitor) = 0;
};

} /* namespace Controllers */

#endif /* CONTROLLERS_OPERATIONCONTROLLER_H_ */
