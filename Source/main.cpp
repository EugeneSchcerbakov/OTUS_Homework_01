#include <iostream>

#include "lib.h"

int main()
{
	std::cout << "Hello, World" << std::endl;
	std::cout << "version  " << GetVersionOTUS_Homework() << std::endl;

#ifdef _WIN32
	std::cin.get();
#endif

	return 0;
}
