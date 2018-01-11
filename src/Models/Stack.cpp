/*
 * Stacks.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Stack.h"

namespace Models {

Stack::Stack() {
	// TODO Auto-generated constructor stub

}

Stack::~Stack() {
	// TODO Auto-generated destructor stub
}

    bool Stack::isFull(){
        if(	queue->getSize()==MAX_NUM_CARDS){
            return true;
        }else{
            return false;
        }
    }

    void Stack::setCard(Card* card) {
        queue->setCardFront(card);

    }

    void Stack::setCards(Queue queue) {
        do {
            this->queue->setCardFront(queue.getCardFront());
        }while(!queue.isEmpty());

    }

    Card* Stack::getCardValue(){
        return queue->show();
    }
    std::vector<Card *> Stack::getCardValues(){
        return queue->getCards();
    }

    Card* Stack::getTopCard() {
        return queue->getCardFront();
    }

    Queue Stack::getCards() {
        Queue cards;
        for(int i=0; i<NUM_TO_DRAW ; i++){
            cards.setCardBack(queue->getCardFront());
        }
        return cards;
    }

    Queue Stack::empty(){
        Queue aux;
        do {
            aux.setCardFront(this->queue->getCardFront());
        }while(!queue->isEmpty());

        return aux;
    }


} /* namespace Models */
