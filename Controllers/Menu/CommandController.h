/*
 * CommandController.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef COMMANDCONTROLLER_H_
#define COMMANDCONTROLLER_H_
#include "MenuControllerVisitor.h"
#include "../Controller.h"
#include "../../Models/Game.h"
#include <string>
#include "../../Models/States.h"

namespace Controllers {
class CommandBroker;

class CommandController: public Controller {
protected:
	std::string title;

public:
	CommandController(Models::Game& game);
	virtual ~CommandController();

	virtual CommandController* clone()=0;

	virtual void accept(MenuControllerVisitor* menuControllerVisitor)=0;

	std::string getTitle();

	virtual void visitBroker(Controllers::CommandBroker& broker)=0;
	virtual void execute()=0;
	virtual void undo()=0;
};

} /* namespace Utils */

#endif /* COMMANDCONTROLLER_H_ */
