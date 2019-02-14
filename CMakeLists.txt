cmake_minimum_required(VERSION 3.0)

project(
	center
	VERSION 0.0.0
	LANGUAGES CXX
)

add_library(
	${PROJECT_NAME}
	SHARED
	./src/center.cpp
)

set(
	${PROJECT_NAME}_headers
	./include/center.h
)
