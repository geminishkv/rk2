#include <iostream>
#include <cstdlib>
#include <string>

int main() {

	std::string name = std::getenv("rk2");
	std::cout << name << std::endl;

	return 0;
}
