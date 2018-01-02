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
	Controllers::CommandBroker broker;
	Controllers::CommandMenu *menu;

public:
	MenuController();
	virtual ~MenuController();

	int writeMenu();
	Controllers::CommandController* getCommandController(int option);
    void setCommandController(Controllers::CommandController* controller);


};

} /* namespace Controllers */

#endif /* MENUCONTROLLER_H_ */
