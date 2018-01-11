/*
 * Pile.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Pile.h"
#include "Stack.h"

namespace Models {

	Pile::Pile(int maxNum){
        Stack::MAX_NUM_CARDS = maxNum;
		Stack::queue = new Models::Queue();
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



	bool Pile::canGetCard(){
		return queue->show();
	}



} /* namespace Models */
