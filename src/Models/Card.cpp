//
// Created by alejandro badillo on 29/12/2017.
//

#include "Card.h"

namespace Models {


    Card::Card() {
        this->visible = true;
        this->movable = true;
        this->suit = Models::Suit::UNDEFINED;
        this->number = -1;
    }

    Card::~Card() {

    }

    Card::Card(Models::Suit suit , int num){
        this->suit = suit;
        this->number = num;
        this->visible = true;
        this->movable = true;
    }


    void Card::set(Models::Suit suit , int num){
        this->suit = suit;
        this->number = num;
    }

    int Card::getNumber() {
        return this->number;
    }

    char Card::getColor() {

        if ((this->suit == Models::Suit::SPADE) || (this->suit == Models::Suit::CLUB)){
            return 'b';
        }else {
            return 'r';
        }
    }

    Models::Suit Card::getSuit() {
        return this->suit;
    }

    void Card::see(bool boolean) {
        this->visible = boolean;
    }

    bool Card::isVisible() {
        return this->visible;
    }

    void Card::allow(bool boolean) {
        this->movable = boolean;
    }

    bool Card::canMove() {
        return this->movable;
    }



}