/*
 * MenuControllerVisitor.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef MENUCONTROLLERVISITOR_H_
#define MENUCONTROLLERVISITOR_H_

namespace Controllers {
class FlipController;
class MoveController;
class UndoController;
class RedoController;
class ExitController;


class MenuControllerVisitor {
public:
	virtual void visit(Controllers::MoveController &moveController) = 0;
	virtual void visit(Controllers::FlipController &flipController) = 0;
	virtual void visit(Controllers::UndoController &undoController) = 0;
	virtual void visit(Controllers::RedoController &redoController) = 0;
	virtual void visit(Controllers::ExitController &endController) = 0;
};

} /* namespace Controllers */



#endif /* MENUCONTROLLERVISITOR_H_ */
