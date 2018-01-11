/*
 * MoveView.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "MoveView.h"

namespace Views {
namespace Console{

MoveView::MoveView() {
	// TODO Auto-generated constructor stub

}

void MoveView::interact(Controllers::MoveController& moveController){
    Utils::IO &io = Utils::IO::getInstance();
    moveController.getNumStacks();

    int origin;
    int destination;

    do {
        Views::Console::LimitedIntDialogView limitedInt("Chose origin:", 1, moveController.getNumStacks());

        origin = limitedInt.read();

    } while (!moveController.canTakeCard(origin));

    do {
        Views::Console::LimitedIntDialogView limitedInt("Chose destination:", 1, moveController.getNumStacks());

        destination = limitedInt.read();

    } while (!moveController.canMoveCardTo(origin, destination));

    moveController.setMove(origin, destination);


    io.write("Exit Menu!");

}
}

} /* namespace Views */
