/*
 * CommandBroker.h
 *
 *  Created on: Dec 26, 2017
 *      Author: alejandro
 */

#ifndef COMMANDBROKER_H_
#define COMMANDBROKER_H_
#include "../Menu/CommandController.h"
#include "../Menu/MoveController.h"
#include "../Menu/FlipController.h"
#include "../Menu/UndoController.h"
#include "../Menu/RedoController.h"

#include <vector>

namespace Controllers {

class CommandBroker {
private:
	std::vector<Controllers::CommandController*> doneCommandList;
	int pointer;


public:
	CommandBroker();
	virtual ~CommandBroker() = default;

	void setCommand(Controllers::MoveController* command);
	void setCommand(Controllers::FlipController* command);
	void setCommand(Controllers::UndoController* command);
	void setCommand(Controllers::RedoController* command);

	bool canDo();
	bool canUndo();
};

} /* namespace Command */

#endif
