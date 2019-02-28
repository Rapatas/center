cmake_minimum_required(VERSION 3.0)

project(
	center
	VERSION 0.0.0
	LANGUAGES CXX
)

# Definitions {{{

# libcenter.so {{{

set(
	${PROJECT_NAME}-lib_src
	./src/center.cpp
)

set(
	${PROJECT_NAME}-lib_headers
	./include/center.h
)

add_library(
	${PROJECT_NAME}-lib
	SHARED
	${${PROJECT_NAME}-lib_src}
)

SET_TARGET_PROPERTIES(
	${PROJECT_NAME}-lib
	PROPERTIES
		OUTPUT_NAME ${PROJECT_NAME}
)

# }}}

# center {{{

set(
	${PROJECT_NAME}-bin_src
	./src/main.cpp
	./src/center.cpp
)

add_executable(
	${PROJECT_NAME}-bin
	${${PROJECT_NAME}-bin_src}
)

SET_TARGET_PROPERTIES(
	${PROJECT_NAME}-bin
	PROPERTIES
		OUTPUT_NAME ${PROJECT_NAME}
)

target_link_libraries(
	${PROJECT_NAME}-bin
	PRIVATE
	${PROJECT_NAME}-lib
)

# }}}

# }}}

# Install {{{

set(destination lib/cmake/${PROJECT_NAME})

# Packaging {{{

include(CMakePackageConfigHelpers)

write_basic_package_version_file(
	"${PROJECT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
	VERSION ${PROJECT_VERSION}
	COMPATIBILITY AnyNewerVersion
)

install(
	FILES "${PROJECT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
	DESTINATION ${destination}
)

configure_package_config_file(
	"${PROJECT_SOURCE_DIR}/cmake/configs/${PROJECT_NAME}Config.cmake.in"
	"${PROJECT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
	INSTALL_DESTINATION ${destination}
)

install(
	FILES "${PROJECT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
	DESTINATION ${destination}
)

# }}}

install(
	FILES ${${PROJECT_NAME}-lib_headers}
	DESTINATION include/${PROJECT_NAME}
)

install(
	TARGETS
		${PROJECT_NAME}-lib
		${PROJECT_NAME}-bin
	EXPORT  ${PROJECT_NAME}Targets
	LIBRARY DESTINATION lib COMPONENT Development
	RUNTIME DESTINATION bin COMPONENT Runtime
)

install(
	EXPORT      ${PROJECT_NAME}Targets
	FILE        ${PROJECT_NAME}Targets.cmake
	NAMESPACE   ${PROJECT_NAME}::
	DESTINATION ${destination}
)
# }}}
