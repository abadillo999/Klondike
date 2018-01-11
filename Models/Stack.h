/*
 * Stacks.h
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_STACK_H_
#define MODELS_STACK_H_

#include <vector>
#include "Card.h"
#include "Queue.h"

namespace Models {

class Stack{
protected:
    int MAX_NUM_CARDS;
    int NUM_TO_DRAW = 3;

    Queue* queue;

public:
	Stack();
	virtual ~Stack() = 0;
	void setCard(Card* card);
    bool isFull();
    void setCards(Queue queue);
    Card* getTopCard();
    Card* getCardValue();
    std::vector<Card *> getCardValues();
    Queue getCards();
    Queue empty();


    virtual bool canSetCard(Card* card) = 0;
	virtual bool canGetCard() = 0;


};

} /* namespace Models */

#endif /* MODELS_STACK_H_ */
