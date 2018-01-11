//
// Created by alejandro badillo on 09/01/2018.
//

#ifndef KLONDIKE_SUITVIEW_H
#define KLONDIKE_SUITVIEW_H

#include "../../../Models/Suits.h"
#include "../../../Utils/IO.h"

namespace Views {
    namespace Console {
        class SuitView {
        private:
            Models::Suit suit;
        public:
            SuitView(Models::Suit suit);
            virtual ~SuitView();

            void write();

        };
    }
}

#endif //KLONDIKE_SUITVIEW_H
