/*
 * Pile.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Pile.h"
#include "Stack.h"

namespace Models {

	Pile::Pile(int maxNum): MAX_NUM_CARDS(maxNum){
		queue = new Models::Queue();
	}

    Pile::~Pile() {

    }

	bool Pile::canSetCard(Card* card) {
			if(queue->isEmpty() && card->getNumber() == MAX_NUM_CARDS) {
				return true;
			}else if (queue->getCardFront()->getColor() != card->getColor()){
				if (queue->getCardFront()->getNumber() == card->getNumber()+1){
					return true;
				}else{
					return false;
				}
			}else {
				return false;
			}
		}

	void Pile::setCard(Card* card){
		queue->setCardFront(card);
	}


	bool Pile::canGetCard(){
		return true;
	}

	std::list<Card *> Pile::getCards(){
		return queue->getCards();
	}

	Card *Pile::getTopCard() {
		return queue->getCardFront();
	}

	Card *Pile::getCardValue() {
		return queue->show();
	}

	bool Pile::isFull() {
		return false;
	}



} /* namespace Models */
