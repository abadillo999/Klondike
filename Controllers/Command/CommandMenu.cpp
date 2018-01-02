/*
 * CommandMenu.cpp
 *
 *  Created on: Dec 22, 2017
 *      Author: alejandro
 */

#include "CommandMenu.h"

namespace Controllers{

CommandMenu::CommandMenu(Controllers::CommandBroker& broker): broker(broker) {
	moveCommand = new Controllers::MoveController("Move");
	flipCommand = new Controllers::FlipController("Flip");
	redoCommand = new Controllers::RedoController("Redo");
	undoCommand = new Controllers::UndoController("Undo");
	exitCommand = new Controllers::ExitController("Exit");



}

void CommandMenu::updateCommands(){
	availableCommandList.clear();
	int i = 0;
	availableCommandList[i]= moveCommand;
	i++;
	availableCommandList[i]= flipCommand;
	i++;
	if(broker.canUndo()){
	availableCommandList[i]= undoCommand;
	i++;
	}
	if(broker.canDo()){
	availableCommandList[i]= redoCommand;
	i++;
	}
	availableCommandList[i]= exitCommand;

}


int CommandMenu::writeMenu(){
	Utils::IO &io = Utils::IO::getInstance();

	this->updateCommands();
	for (int i= 0; i < availableCommandList.size(); i++){
		io.write(i+"-"+availableCommandList[i]->getTitle());
	}


	return availableCommandList.size();
}

Controllers::CommandController* CommandMenu::get(int option){
	return availableCommandList[option]->clone();

}






} /* namespace Controllers */




