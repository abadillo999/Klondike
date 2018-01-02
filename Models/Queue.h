/*
 * Queue.h
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_QUEUE_H_
#define MODELS_QUEUE_H_
#include <list>
#include <deque>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include "Card.h"

namespace Models {

class Queue {
private:
	std::deque<Card*> stack;

public:
	Queue();
	virtual ~Queue();
	void shuffle();
	Card* show();
	Card* getCardFront();
	Card* getCardBack();
	void setCardBack(Card* card);
	void setCardFront(Card* card);
	int getSize() const;
	bool isEmpty();
	std::list<Card *> getVisibleCards();
};

} /* namespace Models */

#endif /* MODELS_QUEUE_H_ */
