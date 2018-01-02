//
// Created by alejandro badillo on 29/12/2017.
//

#include "Board.h"

namespace Models {

    Board::Board(Deck* deck, int maxNum) : deck(deck), MAX_NUM_CARDS(maxNum) {
        Card* card;
        Waste* waste;
        stacks[0] = waste;
        for( int a = 1; a <= NUM_PILES; a++ ) {
            Pile* pile = new Pile(MAX_NUM_CARDS);
            stacks[a] = pile;
            for (int b =0 ;b <= a; b++){
                card = this->deck->getCard();
                if(a == b){
                    card->see(true);
                }else{
                    card->see(false);}
                stacks[a]->setCard(*card);
            }
        }
        Foundation* foundation = new Foundation(MAX_NUM_CARDS);
        for(int i = NUM_PILES+1 ; i <= (NUM_PILES + NUM_FOUNDATIONS); i++){
            stacks[i] = foundation;
        }
    }

    Board::~Board() {
        // TODO Auto-generated destructor stub
    }
    bool Board::checkKlondike(){
        for(int i = NUM_PILES+1 ; i <= (NUM_PILES + NUM_FOUNDATIONS); i++){
            if (not stacks[i]->isFull()){
                return false;
            }
        }
        return true;

    }
    void Board::move(int origin, int destination){
        stacks[destination]->setCard(stacks[origin]->getTopCard());



    }

    Stack* Board::getStack(int position){
        return stacks[position];
    }






}