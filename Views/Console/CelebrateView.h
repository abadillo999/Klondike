/*
 * CelebrateView.h
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_CONSOLE_CELEBRATEVIEW_H_
#define VIEWS_CONSOLE_CELEBRATEVIEW_H_
#include "../../Controllers/CelebrateController.h"
namespace Views {
namespace Console{

class CelebrateView {
public:
	CelebrateView();
	virtual ~CelebrateView();

	void interact(Controllers::CelebrateController& celebrateController);

};
}
} /* namespace Views */

#endif /* VIEWS_CONSOLE_CELEBRATEVIEW_H_ */
