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
#include "Stack.h"

namespace Models {

class Waste: public Stack {
public:
	Waste();
	virtual ~Waste();

    bool canSetCard(Card* card);
	bool canGetCard();


};

} /* namespace Models */

#endif /* MODELS_WASTE_H_ */
