/*
 * ConsoleView.h
 *
 *  Created on: 18 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_CONSOLE_CONSOLEVIEW_H_
#define VIEWS_CONSOLE_CONSOLEVIEW_H_
#include "../View.h"
#include "../../Controllers/OperationControllerVisitor.h"
#include "StartView.h"
#include "GameView.h"
#include "EndView.h"
#include "CelebrateView.h"


namespace Views {
namespace Console{

class ConsoleView: public Views::View, public Controllers::OperationControllerVisitor {
private:
	StartView startView;
	GameView gameView;
	EndView endView;
	CelebrateView celebrateView;

public:
	ConsoleView();
	virtual ~ConsoleView() = default;

	void interact(Controllers::OperationController &operationController);
	void visit(Controllers::StartController &startController);
	void visit(Controllers::GameController &gameController);
	void visit(Controllers::EndController &endController);
	void visit(Controllers::CelebrateController &celebrateController);


};



}
} /* namespace Views */

#endif /* VIEWS_CONSOLE_CONSOLEVIEW_H_ */
