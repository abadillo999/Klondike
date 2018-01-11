/*
 * CommandMenu.cpp
 *
 *  Created on: Dec 22, 2017
 *      Author: alejandro
 */

#include "CommandMenu.h"

namespace Controllers{

CommandMenu::CommandMenu(Models::Game& game, Controllers::CommandBroker& broker): broker(broker) {
	moveCommand = new Controllers::MoveController(game, "Move");
	flipCommand = new Controllers::FlipController(game, "Flip");
	redoCommand = new Controllers::RedoController(game, "Redo");
	undoCommand = new Controllers::UndoController(game, "Undo");
	exitCommand = new Controllers::ExitController(game, "Exit");



}

void CommandMenu::updateCommands(){

	availableCommandList = 	std::vector<Controllers::CommandController*>();

	availableCommandList.push_back(moveCommand);

	availableCommandList.push_back(flipCommand);
	if(broker.canUndo()){
	availableCommandList.push_back(undoCommand);
	}
	if(broker.canDo()){
	availableCommandList.push_back(redoCommand);
	}
	availableCommandList.push_back(exitCommand);

}


int CommandMenu::writeMenu(){
	Utils::IO &io = Utils::IO::getInstance();

	this->updateCommands();
	for (int i= 0; i < availableCommandList.size(); i++){
		io.writeBreak(std::to_string(i+1)+" - "+availableCommandList[i]->getTitle());
	}


	return availableCommandList.size();
}

Controllers::CommandController* CommandMenu::get(int option){
	return availableCommandList[option-1]->clone();

}






} /* namespace Controllers */




