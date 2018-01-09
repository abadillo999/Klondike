/*
 * IO.cpp
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#include "IO.h"

namespace Utils {

IO::IO() {

}

IO* IO::instance = new IO();

IO& IO::getInstance(){
	return *instance;
}

    int IO::readInt(){
        int value ;

        while (!(std::cin >> value)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            this->write("Please write an Integer.");
        }
        return value;
    }

    std::string IO::readString(){
        std::string input;
        while (!(std::cin >> input)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            this->write("Please write a String.");
        }
	return input;
    }

    void IO::write(std::string string){
        std::cout << string << std::endl;
    }

	void IO::writeInt(int num) {
		std::cout<<num	;
	}


} /* namespace Utils */
