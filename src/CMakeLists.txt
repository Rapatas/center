
set(
  ${CENTER_LIB_NAME}-cpp
  center.cpp
)

add_library(
  ${CENTER_LIB_NAME}
  SHARED
  ${${CENTER_LIB_NAME}-cpp}
  ${${CENTER_LIB_NAME}-hpp}
)

set_target_properties(
  ${CENTER_LIB_NAME}
  PROPERTIES
    OUTPUT_NAME ${CENTER_OUTPUT_NAME}
)

target_include_directories(
  ${CENTER_LIB_NAME}
  PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)
