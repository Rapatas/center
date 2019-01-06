cmake_minimum_required(VERSION 3.0)

# Required for YCM to work
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(
	center
	VERSION 0.0.0
	LANGUAGES CXX
)

add_library(
	${PROJECT_NAME}
	INTERFACE
)

set(
	${PROJECT_NAME}_headers
	./include/center.h
)
