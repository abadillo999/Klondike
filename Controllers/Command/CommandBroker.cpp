#include "CommandBroker.h"
#include "../../Utils/IO.h"

namespace Controllers {

CommandBroker::CommandBroker() {
	pointer = 0;
}

bool CommandBroker::canUndo(){
	return (doneCommandList.size() != 0 || pointer != 0);
}

bool CommandBroker::canDo(){
	return (doneCommandList.size() > pointer);
}


void CommandBroker::setCommand(Controllers::MoveController* command){
	Utils::IO &io = Utils::IO::getInstance();
    io.write("broooker");
	command->execute();
	doneCommandList[pointer] = command;
	pointer++;


}
void CommandBroker::setCommand(Controllers::FlipController* command){
	command->execute();
	doneCommandList[pointer] = command;
	pointer++;

}
void CommandBroker::setCommand(Controllers::RedoController* command){
	doneCommandList[pointer]->execute();
	pointer++;

}
void CommandBroker::setCommand(Controllers::UndoController* command){
	doneCommandList[pointer]->undo();
	pointer--;

}
}
