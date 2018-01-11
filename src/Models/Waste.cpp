/*
 * Waste.cpp
 *
 *  Created on: 15 Nov 2017
 *      Author: alejandrobadillo
 */

#include "Waste.h"
#include "../Utils/IO.h"

namespace Models {

    Waste::Waste() {
        queue = new Models::Queue();
    }

    Waste::~Waste() {
	// TODO Auto-generated destructor stub
    }



    bool Waste::canGetCard(){
        Utils::IO &io = Utils::IO::getInstance();
        io.writeBreak("nnnooo");

        return !queue->isEmpty();
    }


    bool Waste::canSetCard(Card* card){
        return false;
    }





} /* namespace Models */




