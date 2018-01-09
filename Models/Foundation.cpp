//
// Created by alejandro badillo on 29/12/2017.
//

#include "Foundation.h"

namespace Models {

    Foundation::Foundation(int maxNum) :MAX_NUM_CARDS(maxNum){
        queue = new Models::Queue();
    }

    Foundation::~Foundation() {

    }

    bool Foundation::canSetCard(Card* card) {
        if(queue->isEmpty() && card->getNumber() == 1) {
            return true;
        }else if (queue->getCardFront()->getSuit() == card->getSuit()){
            if (queue->getCardFront()->getNumber() == card->getNumber() +1){
                return true;
            }else{
                return false;
            }
        }else {
            return false;
        }
    }
    void Foundation::setCard(Card* card){
        queue->setCardFront(card);
    }

    Card* Foundation::getCardValue(){
        return queue->show();
    }

    bool Foundation::isFull(){
        if(	queue->getSize()==MAX_NUM_CARDS){
            return true;
        }else{
            return false;
        }
    }

    bool Foundation::canGetCard(){
        return false;
    }

    Card* Foundation::getTopCard() {
        return queue->getCardFront();
    }

    std::list<Card *> Foundation::getCards(){
        return queue->getCards();

    }




}