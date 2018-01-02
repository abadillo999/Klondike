/*
 * GameView.cpp
 *
 *  Created on: 19 Dec 2017
 *      Author: alejandrobadillo
 */

#include "GameView.h"

namespace Views {
namespace Console{
GameView::GameView() {
	// TODO Auto-generated constructor stub

}

GameView::~GameView() {
	// TODO Auto-generated destructor stub
}
void GameView::interact(Controllers::GameController& gameController){

	menuView->interact(*gameController.getMenuController());



	//do you want to save??


}

}
} /* namespace Views */
