/*
 * OperationControllerVisitor.h
 *
 *  Created on: 18 Dec 2017
 *      Author: alejandrobadillo
 */

#ifndef CONTROLLERS_OPERATIONCONTROLLERVISITOR_H_
#define CONTROLLERS_OPERATIONCONTROLLERVISITOR_H_



namespace Controllers{
class StartController;
class GameController;
class CelebrateController;
class EndController;


class OperationControllerVisitor {
public:

	virtual void visit(Controllers::StartController &startController) = 0;
	virtual void visit(Controllers::GameController &gameController) = 0;
	virtual void visit(Controllers::CelebrateController &celebrateController) = 0;
	virtual void visit(Controllers::EndController &endController) = 0;
};

}

#endif /* CONTROLLERS_OPERATIONCONTROLLERVISITOR_H_ */
