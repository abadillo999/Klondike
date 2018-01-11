/*
 * Game.cpp
 *
 *  Created on: 13 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Game.h"
#include "../Utils/IO.h"

namespace Models {

Game::Game():board(MAX_NUM_CARDS){

}

Game::~Game() {
	// TODO Auto-generated destructor stub
}
void Game::init(){
    Utils::IO &io = Utils::IO::getInstance();



    state = Models::States::IN_GAME;

}



    void Game::setNewState(Models::States NewState){
        this->state = NewState;
}

    bool Game::checkKlondike(){
        return board.checkKlondike();
}
    Models::States Game::getState(){
        return state;
}

    void Game::moveCard(int origin, int destination){
        board.move(origin, destination);
    }

    Stack* Game::getStack(int position) {
        return board.getStack(position);
    }

    int Game::getNumStacks() {
        return board.getNumStacks();

    }

    void Game::flip(){
        board.flip();
    }

    void Game::unflip() {
        board.unflip();

    }

    Models::Board &Game::getBoard() {
        return this->board;
    }




}

