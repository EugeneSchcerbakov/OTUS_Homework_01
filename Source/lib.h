#ifndef LIB_H
#define LIB_H

#include <string>

// version.h should be created via CMake build
#ifndef _WIN32
#include "version.h"
#endif

#ifndef PROJECT_VERSION_MAJOR
#define PROJECT_VERSION_MAJOR 0
#endif

#ifndef PROJECT_VERSION_MINOR
#define PROJECT_VERSION_MINOR 0
#endif

#ifndef PROJECT_VERSION_PATCH
#define PROJECT_VERSION_PATCH 0
#endif

std::string GetVersionOTUS_Homework();

#endif // !LIB_H
