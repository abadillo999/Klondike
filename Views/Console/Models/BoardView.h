//
// Created by alejandro badillo on 04/01/2018.
//

#ifndef KLONDIKE_BOARDVIEW_H
#define KLONDIKE_BOARDVIEW_H


#include "../../../Models/Board.h"
#include "../../../Utils/IO.h"

namespace Views {
    namespace Console {

        class BoardView {
        private:
            Models::Board &board;
        public:
            BoardView(Models::Board &board);

            virtual ~BoardView();

            void write();

        };
    }
}


#endif //KLONDIKE_BOARDVIEW_H
