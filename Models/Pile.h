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
#include "Stack.h"


namespace Models{

class Pile: public Stack {
public:
	Pile(int maxNum);
    virtual ~Pile();

	bool canSetCard(Card* card);
	bool canGetCard();


};

} /* namespace Models */

#endif /* MODELS_PILE_H_ */
