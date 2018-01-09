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
    private:
        int MAX_NUM_CARDS;
        Queue* queue;
    public:
        Foundation(int maxNum);
        virtual ~Foundation();
        bool isFull();

        bool canSetCard(Card* card);
        bool canGetCard();

        void setCard(Card* card);
        Card* getTopCard();
        Card* getCardValue();
        std::list<Card *> getCards();

    };

} /* namespace Models */

#endif