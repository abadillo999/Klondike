/*
 * MoveController.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "MoveController.h"
#include "../../Utils/IO.h"
#include <assert.h>

namespace Controllers {

    MoveController::MoveController(Models::Game& game, std::string title): CommandController(game){
        this->title = title;
    }
    MoveController::~MoveController(){

    }

    MoveController* MoveController::clone(){
        return new MoveController(Controllers::Controller::game, this->getTitle());
    }


    void MoveController::accept(MenuControllerVisitor& menuControllerVisitor) {
        assert(&menuControllerVisitor);
        menuControllerVisitor.visit(*this);

    }

    void MoveController::visitBroker(Controllers::CommandBroker& broker){
        broker.setCommand(this);
    }


    bool MoveController::canTakeCard(int position){
        return game.getStack(position)->canGetCard();
    }

    bool MoveController::canMoveCardTo(int origin, int destination){
        return game.getStack(destination)->canSetCard(game.getStack(origin)->getCardValue());
    }

    void MoveController::setMove(int Origin, int Destination){
        this->origin = Origin;
        this->destination = Destination;
    }
    int MoveController::getNumStacks() {
        return game.getNumStacks();
    }

    void MoveController::execute(){
        game.moveCard(origin, destination);

    }

    void MoveController::undo(){
        game.moveCard(destination, origin);
    }




} /* namespace Controllers */
