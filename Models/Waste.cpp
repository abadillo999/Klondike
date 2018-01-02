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
	// TODO Auto-generated constructor stub
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

    bool Waste::canTakeCard(){
        return !queue->isEmpty();
    }

    std::list<Card &> Waste::getVisibleCards(){
        return queue->getVisibleCards();
    }

	Card &Waste::getCardValue() {
        return queue->show();
	};

    bool Waste::canSetCard(Card& card){
        return false;
    }

    void Waste::setCard(Card &card) {
        queue->setCardFront(card);

    }

    Card &Waste::getTopCard() {
        return queue->getCardFront();
    }

    bool Waste::isFull() {
        return false;
    }


} /* namespace Models */




