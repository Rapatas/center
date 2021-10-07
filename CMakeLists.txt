cmake_minimum_required(VERSION 3.0)

project(center)

set(PROGRAM_DESCRIPTION "Center text horizontally in C++.")

set(CENTER_OUTPUT_NAME ${PROJECT_NAME})
set(CENTER_LIB_NAME    ${PROJECT_NAME}-lib)
set(CENTER_BIN_NAME    ${PROJECT_NAME}-bin)
set(CENTER_TEST_NAME   ${PROJECT_NAME}-test)

set(CENTER_VERSION_MAJOR 0)
set(CENTER_VERSION_MINOR 0)
set(CENTER_VERSION_PATCH 0)
set(CENTER_VERSION_POSTFIX "")

string(CONCAT CENTER_VERSION
  ${CENTER_VERSION_MAJOR}
  "."
  ${CENTER_VERSION_MINOR}
  "."
  ${CENTER_VERSION_PATCH}
  ${CENTER_VERSION_POSTFIX}
)
set(PROJECT_VERSION ${CENTER_VERSION})

include(GNUInstallDirs)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)

include(cmake/cpack.cmake)
