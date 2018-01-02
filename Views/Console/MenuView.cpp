/*
 * MenuView.cpp
 *
 *  Created on: Dec 22, 2017
 *      Author: alejandro
 */

#include "MenuView.h"

namespace Views {
namespace Console{


MenuView::MenuView() {


}

MenuView::~MenuView() {
	// TODO Auto-generated destructor stub
}
void MenuView::interact(Controllers::MenuController& menuController){

	Controllers::CommandController* controller;
	int options;
	int option = 0;

	do {
		options = menuController.writeMenu();
		Views::Console::LimitedIntDialogView limitedInt("Chose an option", 0, options--);
		limitedInt.write();
		option = limitedInt.read();
		controller = menuController.getCommandController(option);

		if (controller != nullptr){

			controller->accept(*this);

			menuController.setCommandController(controller);

		}
		} while (controller != nullptr );
	}


void MenuView::visit(Controllers::MoveController& moveController){

	this->moveView.interact(moveController);
}

void MenuView::visit(Controllers::FlipController& flipController){
	this->flipView.interact(flipController);
}

void MenuView::visit(Controllers::UndoController& undoController){
	this->undoView.interact(undoController);
}

void MenuView::visit(Controllers::RedoController& redoController){
	this->redoView.interact(redoController);
}

} /* namespace Views */
}
