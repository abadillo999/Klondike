/*
 * MoveView.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef MOVEVIEW_H_
#define MOVEVIEW_H_

#include "../../../Controllers/Menu/MoveController.h"

namespace Views {
namespace Console{

class MoveView{
public:
	MoveView();
	virtual ~MoveView() = default;

	void interact(Controllers::MoveController& moveController);

};

} /* namespace Views */
}
#endif /* MOVEVIEW_H_ */
