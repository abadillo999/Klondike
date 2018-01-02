//
// Created by alejandro badillo on 29/12/2017.
//

#include "Deck.h"

namespace Models {

    Deck::Deck(int maxNum): MAX_NUM_CARDS(maxNum) {
    }
    void Deck::init(){
            Models::Card aux = *new Card();
            for( int a = 1; a <= MAX_NUM_CARDS; a++ ) {
                aux.set(Models::Suit::HEART, a);
                queue->setCardBack(aux);
                aux.set(Models::Suit::DIAMOND, a);
                queue->setCardBack(aux);
                aux.set(Models::Suit::CLUB, a);
                queue->setCardBack(aux);
                aux.set(Models::Suit::SPADE, a);
                queue->setCardBack(aux);
            }
            queue->shuffle();
    }

    void Deck::shuffle() {
        queue->shuffle();
    }
    Card& Deck::getCard() {
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