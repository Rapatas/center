cmake_minimum_required(VERSION 3.0)

project(center)

set(CENTER_OUTPUT_NAME ${PROJECT_NAME})
set(CENTER_LIB_NAME    ${PROJECT_NAME}-lib)
set(CENTER_BIN_NAME    ${PROJECT_NAME}-bin)
set(CENTER_TEST_NAME   ${PROJECT_NAME}-test)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(tests)
