/*
 * CommandMenu.h
 *
 *  Created on: Dec 22, 2017
 *      Author: alejandro
 */

#ifndef COMMANDMENU_H_
#define COMMANDMENU_H_
#include <vector>
#include "../../Utils/IO.h"
#include "CommandBroker.h"
#include "../Menu/CommandController.h"
#include "../Menu/MoveController.h"
#include "../Menu/FlipController.h"
#include "../Menu/RedoController.h"
#include "../Menu/UndoController.h"
#include "../Menu/ExitController.h"



namespace Controllers{

class CommandMenu {
protected:
	Controllers::CommandBroker& broker;
	Controllers::MoveController* moveCommand;
	Controllers::FlipController* flipCommand;
	Controllers::RedoController* redoCommand;
	Controllers::UndoController* undoCommand;
	Controllers::ExitController* exitCommand;


	std::vector<Controllers::CommandController*> availableCommandList;
	void updateCommands();


public:
	CommandMenu(Controllers::CommandBroker& broker);
	virtual ~CommandMenu() = default;

	int writeMenu();
	Controllers::CommandController* get(int option);
};

} /* namespace Controllers */

#endif /* COMMANDMENU_H_ */
