//
// Created by alejandro badillo on 29/12/2017.
//

#ifndef MODELS_FOUNDATION_H_
#define MODELS_FOUNDATION_H_
#import "Queue.h"
#include "Card.h"
#include "Stack.h"


namespace Models {

    class Foundation: public Stack {

    public:
        Foundation(int maxNum);
        virtual ~Foundation();

        bool canSetCard(Card* card);
        bool canGetCard();



    };

} /* namespace Models */

#endif