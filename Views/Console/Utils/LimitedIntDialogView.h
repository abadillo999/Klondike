/*
 * LimitedIntDialogView.h
 *
 *  Created on: Dec 28, 2017
 *      Author: alejandro
 */

#ifndef LIMITEDINTDIALOGVIEW_H_
#define LIMITEDINTDIALOGVIEW_H_
#include <string>
#include "../../../Utils/IO.h"

namespace Views {
namespace Console {

class LimitedIntDialogView {
private:
	int min;
	int max;
	std::string title;
public:
	LimitedIntDialogView(std::string title, int min, int max);
	virtual ~LimitedIntDialogView() = default;
	void write();
	int read();
};

} /* namespace Views */
}
#endif /* LIMITEDINTDIALOGVIEW_H_ */
