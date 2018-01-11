//
// Created by alejandro badillo on 29/12/2017.
//
#ifndef MODELS_CARD_H_
#define MODELS_CARD_H_

#include "Suits.h"

namespace Models {

    class Card {
    public:

        Card();
        Card(Models::Suit suit , int num);

        virtual ~Card();

        void set(Models::Suit suit , int num);
        int getNumber();
        Models::Suit getSuit() ;
        char getColor();
        void see(bool boolean);
        bool isVisible();
        void allow(bool boolean);
        bool canMove();



    private:
        int number;
        bool visible;
        bool movable;
        Models::Suit suit;


    };

} /* namespace Models */

#endif