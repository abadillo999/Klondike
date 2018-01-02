/*
 * FlipController.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef FLIPCONTROLLER_H_
#define FLIPCONTROLLER_H_
#include "MenuControllerVisitor.h"
#include "CommandController.h"
#include "../Command/CommandBroker.h"

namespace Controllers {

class FlipController: public CommandController {
public:
	FlipController(std::string title);
	virtual ~FlipController();

	FlipController* clone();

	void accept(MenuControllerVisitor& menuControllerVisitor);

	void visitBroker(Controllers::CommandBroker& broker);

	void execute();
	void undo();

};

} /* namespace Controllers */

#endif /* FLIPCONTROLLER_H_ */
