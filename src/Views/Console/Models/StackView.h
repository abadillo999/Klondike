//
// Created by alejandro badillo on 05/01/2018.
//

#ifndef KLONDIKE_STACKVIEW_H
#define KLONDIKE_STACKVIEW_H

#include "../../../Models/Stack.h"
#include <list>
#include <vector>
#include "../../../Utils/IO.h"
#include "SuitView.h"

namespace Views {
    namespace Console {
        class StackView {
        private:
            Models::Stack *stack;
        public:
            StackView(Models::Stack *stack);

            virtual ~StackView();

            void write();

        };
    }
}


#endif //KLONDIKE_STACKVIEW_H
