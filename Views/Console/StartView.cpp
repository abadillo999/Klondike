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
    startController.init();

}

}
} /* namespace Views */
