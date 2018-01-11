/*
 * Queue.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Queue.h"
using namespace std;
namespace Models {


Queue::Queue() {
	// TODO Auto-generated constructor stub




}
void Queue::shuffle() {
		std::random_shuffle(stack.begin(), stack.end());
	}
Card* Queue::show(){
    return  stack.front();
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
	this->stack.push_back(card);

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

std::vector<Card *> Queue::getCards(){
		std::vector<Card*> result;
		for (int i = stack.size()-1; i >= 0; --i) {
				result.push_back(stack.at(i));
		}
		return result;
	}

    Queue::~Queue() {

    }
} /* namespace Models */
