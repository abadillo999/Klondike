/*
 * MoveView.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef MOVEVIEW_H_
#define MOVEVIEW_H_

#include "../../../Controllers/Menu/MoveController.h"
#include "../../../Utils/IO.h"
#include "../../../Views/Console/Utils/LimitedIntDialogView.h"


namespace Views {
namespace Console{

class MoveView{
private:
    Controllers::MoveController *moveController;
public:
	MoveView();
	virtual ~MoveView() = default;

	void interact(Controllers::MoveController& moveController);

};

} /* namespace Views */
}
#endif /* MOVEVIEW_H_ */
