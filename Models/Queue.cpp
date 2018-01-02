/*
 * Queue.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Queue.h"

namespace Models {


Queue::Queue() {
	// TODO Auto-generated constructor stub

}
void Queue::shuffle() {
		std::random_shuffle(stack.begin(), stack.end());
	}
Card* Queue::show(){
           return stack.front();
}

Card* Queue::getCardFront() {
			Card *card = stack.front();
			stack.pop_front();
			return card;
		}

Card* Queue::getCardBack() {
			Card *card = stack.back();
			stack.pop_back();
			return card;
		}

void Queue::setCardBack(Card* card){
	stack.push_back(card);
}

void Queue::setCardFront(Card* card){
	stack.push_front(card);
}

int Queue::getSize() const {
			return (int) stack.size();
		}

bool Queue::isEmpty() {
			return stack.empty();
		}

std::list<Card *> Queue::getVisibleCards(){
		std::list<Card*> result;
		for (int i = 0; i < stack.size(); ++i) {
			if (stack.at(i)->isVisible()){
				result.push_back(stack.at(i));
			}
		}
		return result;
	}
} /* namespace Models */
