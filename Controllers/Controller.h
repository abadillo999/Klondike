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
private:
	Models::Game& game;
public:
	Controller(Models::Game& game);
	virtual ~Controller() ;


	void init();
	bool checkKlondike() const;
	void setState(Models::States);
	void moveCard(int Origin, int Destination);
	Models::Stack* getStack(int position);
	Models::States getState();


};

} /* namespace Controllers */

#endif /* CONTROLLERS_CONTROLLER_H_ */
