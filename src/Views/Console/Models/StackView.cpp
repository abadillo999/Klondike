//
// Created by alejandro badillo on 05/01/2018.
//

#include "StackView.h"
namespace Views {
    namespace Console{

        StackView::StackView(Models::Stack* stack): stack(stack) {

        }

        StackView::~StackView() {

        }

        void StackView::write() {
            Utils::IO &io = Utils::IO::getInstance();
            std::vector <Models::Card*> cards = stack->getCardValues();

            for (int i= 0; i < cards.size(); ++i){
                io.write("[");

                if (cards[i]->isVisible()){
                    io.writeInt(cards[i]->getNumber());
                    Views::Console::SuitView suitView(cards[i]->getSuit());
                    suitView.write();
                }
            }
            io.writeBreak("]");


        }
    }
}