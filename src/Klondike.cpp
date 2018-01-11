/*
 * Klondike.cpp
 *
 *  Created on: 15 Dec 2017
 *      Author: alejandrobadillo
 */

#include "Klondike.h"

Klondike::Klondike(Views::View& view, Controllers::Logic& logic) : view(view), logic(logic) {


}





void Klondike::start(){
	Controllers::OperationController *controller;
				do {
					controller = &(this->logic.getOperationController());
					if (controller != nullptr){
					  this->view.interact(*controller);
					}
				} while (controller != nullptr);
}
