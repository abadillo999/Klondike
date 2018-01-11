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
    io.writeBreak("Loading...");
    startController.init();
    io.writeBreak("Loaded");


}

}
} /* namespace Views */
