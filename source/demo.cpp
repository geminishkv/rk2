/*!
	\brief Program that find your NAME.

	This program displays the value of the environment variable NAME if it exist
*/
#include <iostream>
#include "demo.hpp"
/*!
	Function that takes your NAME
*/
const char* getenv_var() {
	return std::getenv("NAME");
}

/*!
	Print function, that displayes your NAME
*/
void printenv_var() {
	if(const char* env_p = getenv_var()) {
        	std::cout << "Your NAME is: " << env_p << std::endl;
	}
	else{
		std::cerr << "NO EN.VAR: NAME\n";	
	}
}

