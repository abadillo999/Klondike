/*
 * BooleanDialog.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef BOOLEANDIALOG_H_
#define BOOLEANDIALOG_H_
#include <string>

namespace Utils {

class BooleanDialog {
public:
	BooleanDialog();
	virtual ~BooleanDialog();
	bool read(std::string s);

};

} /* namespace Utils */

#endif /* BOOLEANDIALOG_H_ */
