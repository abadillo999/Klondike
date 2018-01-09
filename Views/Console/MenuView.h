/*
 * MenuView.h
 *
 *  Created on: Dec 22, 2017
 *      Author: alejandro
 */

#ifndef MENUVIEW_H_
#define MENUVIEW_H_
#include "../../Controllers/Menu/MenuControllerVisitor.h"
#include "../../Controllers/Menu/MenuController.h"
#include "../../Controllers/Menu/CommandController.h"
#include "../../Views/Console/Utils/LimitedIntDialogView.h"
#include "Command/MoveView.h"
#include "Command/FlipView.h"
#include "Command/UndoView.h"
#include "Command/RedoView.h"
#include "../../Utils/IO.h"


namespace Views {
namespace Console{

class MenuView: public Controllers::MenuControllerVisitor {
private:

	Views::Console::MoveView moveView;
	Views::Console::FlipView flipView;
	Views::Console::UndoView undoView;
	Views::Console::RedoView redoView;

public:
	MenuView();
	virtual ~MenuView();

	void interact(Controllers::MenuController& menuController);


	void visit(Controllers::MoveController* controller);
	void visit(Controllers::FlipController* flipController);
	void visit(Controllers::UndoController* undoController);
	void visit(Controllers::RedoController* redoController);
};

} /* namespace Views */
}
#endif /* MENUVIEW_H_ */
