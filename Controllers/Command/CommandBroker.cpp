#include "CommandBroker.h"
#include "../../Utils/IO.h"

namespace Controllers {

CommandBroker::CommandBroker() {
	pointer = 0;
    doneCommandList = std::vector<Controllers::CommandController*>();
}

bool CommandBroker::canUndo(){
	return (pointer > 0);
}

bool CommandBroker::canDo(){
	return (doneCommandList.size() > pointer);
}


void CommandBroker::setCommand(Controllers::MoveController* command){

	command->execute();
	doneCommandList[pointer] = command;
	pointer++;


}
void CommandBroker::setCommand(Controllers::FlipController* command){

	command->execute();
	doneCommandList.push_back(command);
	pointer++;

}
void CommandBroker::setCommand(Controllers::RedoController* command){
	doneCommandList[pointer]->execute();
	pointer++;

}
void CommandBroker::setCommand(Controllers::UndoController* command){
    pointer--;
    doneCommandList[pointer]->undo();

}
}
