
#ifndef CONTROLLERS_ENDCONTROLLER_H_
#define CONTROLLERS_ENDCONTROLLER_H_
#include "OperationController.h"
#include "../Models/Game.h"

namespace Controllers {
class OperationController;

class EndController: public Controllers::OperationController {
public:
	EndController(Models::Game& game);
	virtual ~EndController();
	void accept(OperationControllerVisitor& operationControllerVisitor);

};

} /* namespace Controllers */

#endif /* CONTROLLERS_ENDCONTROLLER_H_ */
