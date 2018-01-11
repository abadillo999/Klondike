/*
 * EndView.h
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_CONSOLE_ENDVIEW_H_
#define VIEWS_CONSOLE_ENDVIEW_H_
#include "../../Controllers/EndController.h"
namespace Views {
namespace Console{

class EndView{
public:
	EndView();
	virtual ~EndView();
	void interact(Controllers::EndController& endController);

};

} /* namespace Views */
}
#endif /* VIEWS_CONSOLE_ENDVIEW_H_ */
