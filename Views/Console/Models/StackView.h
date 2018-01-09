//
// Created by alejandro badillo on 05/01/2018.
//

#ifndef KLONDIKE_STACKVIEW_H
#define KLONDIKE_STACKVIEW_H

#include "../../../Models/Stack.h"
#include <list>
#include "../../../Utils/IO.h"

class StackView {
private:
    Models::Stack* stack;
public:
    StackView(Models::Stack* stack);
    virtual ~StackView();
    void write();

};


#endif //KLONDIKE_STACKVIEW_H
