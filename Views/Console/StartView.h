/*
 * StartView.h
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_CONSOLE_STARTVIEW_H_
#define VIEWS_CONSOLE_STARTVIEW_H_
#include "../../Controllers/StartController.h"

namespace Views {
namespace Console{

class StartView {
public:
	StartView();
	virtual ~StartView();

	void interact(Controllers::StartController& startController);
};
}
} /* namespace Views */

#endif /* VIEWS_CONSOLE_STARTVIEW_H_ */
