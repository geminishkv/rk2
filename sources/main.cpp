#include <iostream>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[]) {
	
        std::cout << "Вы ввели: " << *(argv + 1) << std::endl;
	std::string name = std::getenv("rk2");
	std::cout << name << std::endl;

	return 0;
}
