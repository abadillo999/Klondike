/*
 * MoveController.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef MOVECONTROLLER_H_
#define MOVECONTROLLER_H_
#include "CommandController.h"
#include "../Command/CommandBroker.h"
#include "../../Models/Game.h"

namespace Controllers {

class MoveController: public CommandController {
private:
	int origin;
	int destination;
public:
	MoveController(Models::Game& game, std::string title);
	virtual ~MoveController();

	MoveController* clone();

	void accept(MenuControllerVisitor& menuControllerVisitor);

	void visitBroker(Controllers::CommandBroker& broker);

	int getNumStacks();
	bool canTakeCard(int position);
	bool canMoveCardTo(int Origin, int destination);
	void setMove(int Origin, int Destination);

	void execute();
	void undo();

};

} /* namespace Controllers */

#endif /* MOVECONTROLLER_H_ */
