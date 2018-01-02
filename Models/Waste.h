/*
 * Waste.h
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_WASTE_H_
#define MODELS_WASTE_H_
#include "Queue.h"
#include "Card.h"

namespace Models {

class Waste: public Stack {
private:
	Queue* queue;

public:
	Waste();
	virtual ~Waste();
	void fill(Queue* queue);
	Queue* empty();

	Card *getFromBack();

    bool canSetCard(Card& card);
	bool canTakeCard();

    void setCard(Card& card);
    Card& getTopCard();
	Card& getCardValue();
	std::list<Card &> getVisibleCards();
    bool isFull();
};

} /* namespace Models */

#endif /* MODELS_WASTE_H_ */
