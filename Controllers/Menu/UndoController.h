/*
 * UndoController.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef UNDOCONTROLLER_H_
#define UNDOCONTROLLER_H_
#include "CommandController.h"
#include "../Command/CommandBroker.h"
#include "../../Models/Game.h"

namespace Controllers {

class UndoController:public CommandController {
public:
	UndoController(Models::Game& game, std::string title);
	virtual ~UndoController();

	UndoController* clone();

	void accept(MenuControllerVisitor* menuControllerVisitor);

	void visitBroker(Controllers::CommandBroker& broker);

	void execute();
	void undo();

};

} /* namespace Controllers */

#endif /* UNDOCONTROLLER_H_ */
