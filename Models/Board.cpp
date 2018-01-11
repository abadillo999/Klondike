//
// Created by alejandro badillo on 29/12/2017.
//

#include "Board.h"
#include "../Utils/IO.h"

namespace Models {

    Board::Board(int maxNum) : deck(maxNum), MAX_NUM_CARDS(maxNum) {
        Utils::IO &io = Utils::IO::getInstance();
        deck.init();
        stacks = std::vector<Stack*>(12);

        Card* card;
        Models::Waste* waste = new Waste();
        stacks[0] = waste;

        for( int a = 1; a <= NUM_PILES; a++ ) {
            Pile* pile = new Pile(MAX_NUM_CARDS);
            stacks[a] = pile;

            for (int b = 1 ;b <= a; b++){
                card = this->deck.getCard();
                if(a == b){
                    card->see(true);
                }else{
                    card->see(false);}
                stacks[a]->setCard(card);
            }

        }
        for(int i = NUM_PILES+1 ; i <= (NUM_PILES + NUM_FOUNDATIONS); i++){
            Foundation* foundation = new Foundation(MAX_NUM_CARDS);
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

    int Board::getNumStacks() {
        return stacks.size();
    }

    void Board::flip() {

        stacks[0]->setCards(deck.getCards());

    }

    void Board::unflip() {

        deck.setCards(stacks[0]->getCards());

    }


}