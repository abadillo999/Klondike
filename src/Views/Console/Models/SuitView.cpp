//
// Created by alejandro badillo on 09/01/2018.
//

#include "SuitView.h"
namespace Views {
    namespace Console {

        Views::Console::SuitView::SuitView(Models::Suit suit): suit(suit) {

        }

        SuitView::~SuitView() {

        }

        void SuitView::write() {
            Utils::IO &io = Utils::IO::getInstance();
            switch (this->suit) {
                case Models::Suit::SPADE:
                    io.write("♠");
                    break;
                case Models::Suit::HEART:
                    io.write("♡");
                    break;
                case Models::Suit::CLUB:
                    io.write("♣");
                    break;
                case Models::Suit::DIAMOND:
                    io.write("♢");
                    break;
                default:
                    io.write("");
            }

        }
    }
}