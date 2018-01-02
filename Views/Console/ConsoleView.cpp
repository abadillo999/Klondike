/*
 * ConsoleView.cpp
 *
 *  Created on: 18 Dec 2017
 *      Author: alejandrobadillo
 */

#include "ConsoleView.h"

namespace Views {
namespace Console {

ConsoleView::ConsoleView() {
	// TODO Auto-generated constructor stub

}

void ConsoleView::interact(Controllers::OperationController &operationController){
	operationController.accept(*this);

};

void ConsoleView::visit(Controllers::StartController &startController){
	this->startView.interact(startController);
}

void ConsoleView::visit(Controllers::EndController &endController){
	this->endView.interact(endController);
}


void ConsoleView::visit(Controllers::GameController &gameController){
	this->gameView.interact(gameController);
}

void ConsoleView::visit(Controllers::CelebrateController &celebrateController){
	this->celebrateView.interact(celebrateController);
}
}
} /* namespace Views */
