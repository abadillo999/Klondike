/*
 * LimitedIntDialogView.cpp
 *
 *  Created on: Dec 28, 2017
 *      Author: alejandro
 */

#include "LimitedIntDialogView.h"

namespace Views {
namespace Console {

LimitedIntDialogView::LimitedIntDialogView(std::string title, int min, int max): min(min), max(max), title(title) {
	// TODO Auto-generated constructor stub

}

void LimitedIntDialogView::write(){
	Utils::IO &io = Utils::IO::getInstance();

	io.write(title);
}

int LimitedIntDialogView::read(){
	Utils::IO &io = Utils::IO::getInstance();
	int result;
	do{
		result = io.readInt();

	}while(result >= min && result <=max);

	return result;


}
} /* namespace Views */
}