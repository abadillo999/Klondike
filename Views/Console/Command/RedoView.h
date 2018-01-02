/*
 * RedoView.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef REDOVIEW_H_
#define REDOVIEW_H_
#include "../../../Controllers/Menu/RedoController.h"

namespace Views {
namespace Console {

class RedoView {
public:
	RedoView();
	virtual ~RedoView() = default;

	void interact(Controllers::RedoController& redoController);

};

} /* namespace Views */
}
#endif /* REDOVIEW_H_ */
