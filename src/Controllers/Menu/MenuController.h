/*
 * MenuController.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef MENUCONTROLLER_H_
#define MENUCONTROLLER_H_
#include "../OperationController.h"

#include "CommandController.h"
#include "../Command/CommandBroker.h"
#include "../Command/CommandMenu.h"

namespace Controllers {

class MenuController  {
private:
	Models::Game game;
	Controllers::CommandBroker broker;
	Controllers::CommandMenu *menu;

public:
	MenuController(Models::Game& game);
	virtual ~MenuController();

	int writeMenu();
	Controllers::CommandController* getCommandController(int option);
    void setCommandController(Controllers::CommandController* controller);
	Models::Board& getBoard();

};

} /* namespace Controllers */

#endif /* MENUCONTROLLER_H_ */
