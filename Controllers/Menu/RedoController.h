/*
 * RedoController.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef REDOCONTROLLER_H_
#define REDOCONTROLLER_H_
#include "MenuControllerVisitor.h"
#include "CommandController.h"
#include "../Command/CommandBroker.h"

namespace Controllers {

class RedoController: public CommandController {
public:
	RedoController(std::string title);
	virtual ~RedoController();

	RedoController* clone();

	void accept(MenuControllerVisitor& menuControllerVisitor);

	void visitBroker(Controllers::CommandBroker& broker);

	void execute();
	void undo();

};

} /* namespace Controllers */

#endif /* REDOCONTROLLER_H_ */
