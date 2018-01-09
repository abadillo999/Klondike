//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "Klondike.h"
#include "Views/Console/ConsoleView.h"
#include <deque>






int main() {

	cout << "!!!Welcome to Klondike!!!" << endl;

	Klondike kondike(*new Views::Console::ConsoleView(), *new Controllers::Logic());
	kondike.start();
	return 0;
}
