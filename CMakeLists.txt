cmake_minimum_required(VERSION 3.0)

project(
	center
	VERSION 0.0.0
	LANGUAGES CXX
)

# libcenter.so {{{

add_library(
	${PROJECT_NAME}-lib
	SHARED
	./src/center.cpp
)
SET_TARGET_PROPERTIES(
	${PROJECT_NAME}-lib
	PROPERTIES
		OUTPUT_NAME ${PROJECT_NAME}
)

# }}}

# center {{{

add_executable(
	${PROJECT_NAME}-bin
	./src/main.cpp
	./src/center.cpp
)
SET_TARGET_PROPERTIES(
	${PROJECT_NAME}-bin
	PROPERTIES
		OUTPUT_NAME ${PROJECT_NAME}
)
target_link_libraries(
	${PROJECT_NAME}-bin
	${PROJECT_NAME}-lib
)

# }}}
