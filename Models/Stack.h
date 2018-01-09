/*
 * Stacks.h
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_STACK_H_
#define MODELS_STACK_H_

#include <list>
#include "Card.h"

namespace Models {

class Stack{
public:
	Stack();
	virtual ~Stack() = 0;
	virtual bool canSetCard(Card* card) = 0;
	virtual void setCard(Card* card) = 0;
	virtual bool canGetCard() = 0;
	virtual Card* getTopCard() = 0;
    virtual Card* getCardValue() = 0;
	virtual std::list<Card *> getCards() = 0;
    virtual bool isFull() = 0;

};

} /* namespace Models */

#endif /* MODELS_STACK_H_ */
