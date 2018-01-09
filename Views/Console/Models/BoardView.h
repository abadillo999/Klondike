//
// Created by alejandro badillo on 04/01/2018.
//

#ifndef KLONDIKE_BOARDVIEW_H
#define KLONDIKE_BOARDVIEW_H


#include "../../../Models/Game.h"
#include "../../../Utils/IO.h"

class BoardView {
private:
    Models::Game game;
public:
    BoardView(Models::Game& game);
    virtual ~BoardView();
    void write();

};


#endif //KLONDIKE_BOARDVIEW_H
