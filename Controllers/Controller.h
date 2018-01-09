/*
 * Controller.h
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_CONTROLLER_H_
#define CONTROLLERS_CONTROLLER_H_
#include "../Models/Game.h"
#include "../Models/Stack.h"
#include "../Models/States.h"


namespace Controllers {

class Controller {
protected:
	Models::Game& game;
	void init();
	bool checkKlondike() const;
	void setState(Models::States);
	void moveCard(int Origin, int Destination);
	Models::Stack* getStack(int position);
	Models::States getState();

public:
	Controller(Models::Game& game);
	virtual ~Controller() ;





};

} /* namespace Controllers */

#endif /* CONTROLLERS_CONTROLLER_H_ */
