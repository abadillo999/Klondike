//
// Created by alejandro badillo on 29/12/2017.
//

#include "Deck.h"

namespace Models {

    Deck::Deck(int maxNum) {
        this->MAX_NUM_CARDS = maxNum;
        queue = new Queue();
    }

    void Deck::init(){

        for( int a = 1; a <= this->MAX_NUM_CARDS; a++ ) {
            queue->setCardBack(new Card(Models::Suit::HEART, a));
            queue->setCardBack(new Card(Models::Suit::DIAMOND, a));
            queue->setCardBack(new Card(Models::Suit::CLUB, a));
            queue->setCardBack(new Card(Models::Suit::SPADE, a));
            }
        queue->shuffle();
    }

    void Deck::shuffle() {
        queue->shuffle();
    }
    Card* Deck::getCard() {
        return queue->getCardBack();
    }

    Queue* Deck::getCards() {
        Queue* cards;
        for(int i=0; i<NUM_TO_DRAW ; i++){
            cards->setCardFront(queue->getCardBack());
        }
        return cards;
    }

    int Deck::getSize() const {
        return queue->getSize();
    }

    bool Deck::isEmpty() {
        return queue->isEmpty();
    }
    bool Deck::fullfill(Queue* value ){
        if (queue->isEmpty()){
            queue = value;
            return true;
        }else {
            return false;
        }

    }

}