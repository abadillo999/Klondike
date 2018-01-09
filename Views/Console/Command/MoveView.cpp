/*
 * MoveView.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "MoveView.h"

namespace Views {
namespace Console{

MoveView::MoveView() {
	// TODO Auto-generated constructor stub

}

void MoveView::interact(Controllers::MoveController& controller){
    Utils::IO &io = Utils::IO::getInstance();
    io.write("cabesa");
}
}
} /* namespace Views */
