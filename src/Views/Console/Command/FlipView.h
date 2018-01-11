/*
 * FlipView.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef FLIPVIEW_H_
#define FLIPVIEW_H_

#include "../../../Controllers/Menu/FlipController.h"

namespace Views {
namespace Console{

class FlipView{
public:
	FlipView();
	virtual ~FlipView() = default;

	void interact(Controllers::FlipController& flipController);

};

} /* namespace Views */
}
#endif /* FLIPVIEW_H_ */
