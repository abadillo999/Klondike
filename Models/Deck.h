//
// Created by alejandro badillo on 29/12/2017.
//

#ifndef MODELS_DECK_DECK_H_
#define MODELS_DECK_DECK_H_


#include "Suits.h"
#include "Card.h"
#include "Queue.h"
#include <string>

namespace Models {

    class Deck {

    protected:
        int MAX_NUM_CARDS = 0;
        int NUM_TO_DRAW = 3;
        std::string maString= "fd";
        Queue* queue;



    public:

        Deck(int maxNum);
        void init();
        void shuffle();
        Card* getCard();
        Queue* getCards();
        int getSize() const;
        bool isEmpty();
        bool fullfill(Queue* queue);
    };

}
#endif
