/*
 * CelebrateController.h
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_CELEBRATECONTROLLER_H_
#define CONTROLLERS_CELEBRATECONTROLLER_H_
#include "OperationController.h"
#include "../Models/Game.h"

namespace Controllers {
class OperationController;


class CelebrateController: public Controllers::OperationController  {
public:
	CelebrateController(Models::Game& game);
	virtual ~CelebrateController();
	void accept(OperationControllerVisitor& operationControllerVisitor);

};

} /* namespace Controllers */

#endif /* CONTROLLERS_CELEBRATECONTROLLER_H_ */
