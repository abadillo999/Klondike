//
// Created by alejandro badillo on 04/01/2018.
//

#include "BoardView.h"

BoardView::BoardView(Models::Game &game): game(game) {

}

BoardView::~BoardView() {

}

void BoardView::write() {
    Utils::IO &io = Utils::IO::getInstance();

    io.write("Waste:");
    io.writeInt(0);
    game.getStack(0)->getCards();

    for(int i = 1; i < game.getNumStacks(); i++){
        game.getStack(i)->getCards();
    };

}
