#include "lib.h"

#include <sstream>

std::string GetVersionString()
{
	std::stringstream ss;
	ss << GetVersionMajor() << "." << GetVersionMinor() << "." << GetVersionPatch();
	return ss.str();
}

int GetVersionMajor()
{
	return PROJECT_VERSION_MAJOR;
}

int GetVersionMinor()
{
	return PROJECT_VERSION_MINOR;
}

int GetVersionPatch()
{
	return PROJECT_VERSION_PATCH;
}
