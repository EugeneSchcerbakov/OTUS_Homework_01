#include "lib.h"

#include <sstream>

std::string GetVersionOTUS_Homework()
{
	std::stringstream ss;
	ss << PROJECT_VERSION_MAJOR << "." << PROJECT_VERSION_MINOR << "." << PROJECT_VERSION_PATCH;
	return ss.str();
}