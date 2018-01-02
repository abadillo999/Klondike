/*
 * IO.h
 *
 *  Created on: Dec 27, 2017
 *      Author: alejandro
 */

#ifndef IO_H_
#define IO_H_
#include <iostream>
#include <limits>
#include <cstdlib>

namespace Utils {

class IO {
private:
	IO();
	static IO* instance;

public:
	static IO& getInstance();

	virtual ~IO() = default;

	int readInt();
	std::string readString();
	void write(std::string output);
};

} /* namespace Utils */

#endif /* IO_H_ */
