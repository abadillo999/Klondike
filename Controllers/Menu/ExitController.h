/*
 * ExitController.h
 *
 *  Created on: Dec 28, 2017
 *      Author: alejandro
 */

#ifndef EXITCONTROLLER_H_
#define EXITCONTROLLER_H_
#include "CommandController.h"
#include "../../Models/Game.h"
#include "../Command/CommandBroker.h"

namespace Controllers{

class ExitController: public CommandController {
public:

	ExitController(Models::Game& game, std::string title);
	virtual ~ExitController();

	ExitController* clone();

	void accept(MenuControllerVisitor* menuControllerVisitor);

	void visitBroker(Controllers::CommandBroker& broker);

	void execute();
	void undo();
};

} /* namespace Controller */

#endif /* EXITCONTROLLER_H_ */
