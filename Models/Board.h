//
// Created by alejandro badillo on 29/12/2017.
//


#ifndef MODELS_BOARD_H_
#define MODELS_BOARD_H_
#include "Deck.h"
#include "Foundation.h"
#include "Pile.h"
#include "Queue.h"
#include "Waste.h"
#include <map>


namespace Models {

    class Board {
    public:
        Board(Deck* deck, int numCards);
        virtual ~Board();
        bool checkKlondike();
        Stack* getStack(int position);;
        void move(int origin, int destination);

    private:
        Deck* deck;
        std::vector<Stack*> stacks;
        int MAX_NUM_CARDS;
        int NUM_FOUNDATIONS = 4;
        int NUM_PILES = 7;

    };

} /* namespace Models */

#endif /* MODELS_BOARD_H_ */
