/*
 * StartView.cpp
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#include "StartView.h"

namespace Views {
namespace Console{


StartView::StartView() {
	// TODO Auto-generated constructor stub

}

StartView::~StartView() {
	// TODO Auto-generated destructor stub
}
void StartView::interact(Controllers::StartController& startController){
    Utils::IO &io = Utils::IO::getInstance();
    io.write("Loading...");
    startController.init();
    io.write("Loaded");


}

}
} /* namespace Views */
