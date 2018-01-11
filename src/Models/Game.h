/*
 * Game.h
 *
 *  Created on: 13 Nov 2017
 *      Author: alejandrobadillo
 */

#ifndef MODELS_GAME_H_
#define MODELS_GAME_H_
#include "States.h"
#include "Board.h"
#include "Stack.h"
#include "Deck.h"
#include "Foundation.h"
#include "Pile.h"
#include "Waste.h"

namespace Models {

class Game {
public:
	Game();
	virtual ~Game();
	void init();

	void setNewState(Models::States NewState);
	bool checkKlondike();
	Models::States  getState();

	void moveCard(int origin, int destination);
	Stack* getStack(int position);

    int getNumStacks();

	Models::Board &getBoard();
    void flip();
    void unflip();


private:
	Models::States state = Models::States::START;
	int MAX_NUM_CARDS = 13;
	Board board;
	Deck *deck;

};

} /* namespace Models */

#endif /* MODELS_GAME_H_ */
