/*
 * UndoView.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef UNDOVIEW_H_
#define UNDOVIEW_H_
#include "../../../Controllers/Menu/UndoController.h"

namespace Views {
namespace Console{

class UndoView{
public:
	UndoView();
	virtual ~UndoView() = default;

	void interact(Controllers::UndoController& controller);
};

} /* namespace Views */
}
#endif /* UNDOVIEW_H_ */
