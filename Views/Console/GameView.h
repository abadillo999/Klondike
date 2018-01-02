/*
 * GameView.h
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_CONSOLE_GAMEVIEW_H_
#define VIEWS_CONSOLE_GAMEVIEW_H_
#include "../../Controllers/GameController.h"
#include "MenuView.h"

namespace Views {
namespace Console{

class GameView {
private:
	Views::Console::MenuView *menuView;

public:
	GameView();
	virtual ~GameView();

	void interact(Controllers::GameController& gameController);

};
}
} /* namespace Views */

#endif /* VIEWS_CONSOLE_GAMEVIEW_H_ */
