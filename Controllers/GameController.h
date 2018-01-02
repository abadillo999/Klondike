/*
 * GameController.h
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_GAMECONTROLLER_H_
#define CONTROLLERS_GAMECONTROLLER_H_
#include "OperationController.h"
#include "Menu/MenuController.h"
#include "../Models/Game.h"


namespace Controllers {
class OperationController;

class GameController: public Controllers::OperationController {
private:
	Controllers::MenuController *menuController;
public:
	GameController(Models::Game& game);
	virtual ~GameController();
	void accept(OperationControllerVisitor &operationControllerVisitor);
	Controllers::MenuController* getMenuController();

};

} /* namespace Controllers */

#endif /* CONTROLLERS_GAMECONTROLLER_H_ */
