//
// Created by alejandro badillo on 29/12/2017.
//

#include "Foundation.h"

namespace Models {

    Foundation::Foundation(int maxNum){
        Stack::MAX_NUM_CARDS = maxNum;
        Stack::queue = new Models::Queue();
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
    bool Foundation::canGetCard(){
        return false;
    }








}