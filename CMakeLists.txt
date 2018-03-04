cmake_minimum_required(VERSION 3.10)

project("OTUS_Homework_01")

add_executable(helloworld_ci Source/main.cpp)

set_target_properties(helloworld_ci PROPERTIES
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED ON
  COMPILE_OPTIONS -Wpedantic -Wall -Wextra
)

install(TARGETS helloworld_ci RUNTIME DESTINATION bin)

set(CPACK_PACKAGE_CONTACT vvz.otus@gmail.com)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "0")

set(CPACK_PACKAGE_CONTACT evgeniyshb@gmail.com)
