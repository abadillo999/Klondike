/*
 * Controller.cpp
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#include "Controller.h"

namespace Controllers {

    Controller::Controller(Models::Game& game): game(game) {
    }

    Controller::~Controller() {
        // TODO Auto-generated destructor stub
    }
    void Controller::init(){
        this->game.init();
    };
    bool Controller::checkKlondike() const{
        return this->game.checkKlondike();
    };

    void Controller::setState(Models::States newState){
        this->game.setNewState(newState);
    };

    void Controller::moveCard(int Origin, int Destination){
        this->game.moveCard(Origin, Destination);
        if(this->game.checkKlondike())
            this->game.setNewState(Models::States::VICTORY);
    };

    Models::Stack* Controller::getStack(int position){
        return this->game.getStack(position);
    };

    Models::States Controller::getState(){
        return this->game.getState();
    };

} /* namespace Controllers */