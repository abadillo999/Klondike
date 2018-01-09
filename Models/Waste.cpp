/*
 * Waste.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Waste.h"
#include "Stack.h"

namespace Models {

    Waste::Waste() {
        queue = new Models::Queue();
    }

    Waste::~Waste() {
	// TODO Auto-generated destructor stub
    }

    void Waste::fill(Queue* input){
        do{
            queue->setCardFront(input->getCardBack());
        }while(!input->isEmpty());
    }

	Card* Waste::getFromBack(){
		return queue->getCardBack();
	}


    Queue* Waste::empty(){
        Queue* aux = queue;
        queue = nullptr;
        return aux;
    }

    bool Waste::canGetCard(){
        return !queue->isEmpty();
    }

    std::list<Card *> Waste::getCards(){
        return queue->getCards();
    }

	Card *Waste::getCardValue() {
        return queue->show();
	};

    bool Waste::canSetCard(Card* card){
        return false;
    }

    void Waste::setCard(Card* card) {
        queue->setCardFront(card);

    }

    Card *Waste::getTopCard() {
        return queue->getCardFront();
    }

    bool Waste::isFull() {
        return false;
    }


} /* namespace Models */




