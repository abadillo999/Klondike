//
// Created by alejandro badillo on 04/01/2018.
//

#include "BoardView.h"
#include "StackView.h"

namespace Views {
    namespace Console{

        BoardView::BoardView(Models::Board &board): board(board) {
        }

        BoardView::~BoardView() {

        }

        void BoardView::write() {

            Utils::IO &io = Utils::IO::getInstance();

            int i = board.getNumStacks();


            io.writeBreak("Waste:");
            io.write("0--");
            (new StackView(board.getStack(0)))->write();

            io.writeBreak("Foundations:");
            for(int i = 1; i < board.getNumStacks(); i++){
                io.write(std::to_string(i)+"--");
                Views::Console::StackView stackView(board.getStack(i));
                stackView.write();
            };

        }
    }
}
