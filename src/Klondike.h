
#ifndef KLONDIKE_H_
#define KLONDIKE_H_
#include "Controllers/Logic.h"
#include "Views/View.h"

class Klondike {
private:
	Controllers::Logic& logic;
    Views::View& view;


public:
	Klondike(Views::View &view, Controllers::Logic &logic);
	virtual ~Klondike() = default;

	void start();
};

#endif /* KLONDIKE_H_ */
