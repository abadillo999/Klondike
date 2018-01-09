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
	Utils::IO &io = Utils::IO::getInstance();

	Controllers::CommandController* controller;
	int options;
	int option = 0;

	do {

        options = menuController.writeMenu();
        Views::Console::LimitedIntDialogView limitedInt("Chose an option :", 1, options);

        option = limitedInt.read();
		controller = menuController.getCommandController(option);

        if (controller != nullptr){

            controller->accept(this);

			menuController.setCommandController(controller);

		}


		} while (controller != nullptr );
	io.write("Exit Menu!");

}


void MenuView::visit(Controllers::MoveController* moveController){
    Utils::IO &io = Utils::IO::getInstance();
    io.write("movement");

	//this->moveView.interact(moveController);
}

void MenuView::visit(Controllers::FlipController* flipController){
    Utils::IO &io = Utils::IO::getInstance();
    io.write("flipment");
	//this->flipView.interact(flipController);
}

void MenuView::visit(Controllers::UndoController* undoController){
	//this->undoView.interact(undoController);
}

void MenuView::visit(Controllers::RedoController* redoController){
	//this->redoView.interact(redoController);
}

} /* n1
 * amespace Views */
}
