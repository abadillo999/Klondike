/*
 * StartController.h
 *
 *  Created on: 18 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_STARTCONTROLLER_H_
#define CONTROLLERS_STARTCONTROLLER_H_
#include "OperationController.h"
#include "../Models/Game.h"

namespace Controllers {
class OperationController;

class StartController: public Controllers::OperationController {
public:
	StartController(Models::Game& game);
	void accept(OperationControllerVisitor &operationControllerVisitor);

	void init();
};

} /* namespace Controllers */

#endif /* CONTROLLERS_STARTCONTROLLER_H_ */
