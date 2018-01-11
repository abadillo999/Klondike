/*
 * Logic.h
 *
 *  Created on: 15 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_LOGIC_H_
#define CONTROLLERS_LOGIC_H_
#include "OperationController.h"
#include <map>
#include "../Models/States.h"
#include "../Models/Game.h"
#include "StartController.h"
#include "GameController.h"
#include "CelebrateController.h"
#include "EndController.h"



namespace Controllers {

class Logic {
private:
	Models::Game game;
	std::map<Models::States, Controllers::OperationController*> gameControllers;

public:
	Logic();
	virtual ~Logic() = default;
	Controllers::OperationController&  getOperationController();


};

} /* namespace Controllers */

#endif /* CONTROLLERS_LOGIC_H_ */
