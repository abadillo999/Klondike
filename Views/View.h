/*
 * View.h
 *
 *  Created on: 15 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef VIEWS_VIEW_H_
#define VIEWS_VIEW_H_

#include "../Controllers/OperationController.h"


namespace Views{

class View{
public:

	virtual void interact(Controllers::OperationController &operationController) = 0;

};





}


#endif /* VIEWS_VIEW_H_ */
