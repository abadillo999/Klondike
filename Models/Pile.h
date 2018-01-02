/*
 * Pile.h
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_PILE_H_
#define MODELS_PILE_H_
#include "Queue.h"
#include "Card.h"


namespace Models{

class Pile: public Stack {
private:
	int MAX_NUM_CARDS;
	Queue* queue;
public:
	Pile(int maxNum);
    virtual ~Pile();
	bool canSetCard(Card& card);
	void setCard(Card& card);
	Card& getTopCard();
	Card& getCardValue();

	bool canTakeCard();
	std::list<Card &> getVisibleCards();
    bool isFull();

};

} /* namespace Models */

#endif /* MODELS_PILE_H_ */
