
set(
  CENTER_LIB_SOURCES
  center.cpp
)

add_library(
  ${CENTER_LIB_NAME}
  SHARED
  ${CENTER_LIB_SOURCES}
  ${CENTER_LIB_HEADER}
)

set_target_properties(
  ${CENTER_LIB_NAME}
  PROPERTIES
    OUTPUT_NAME ${CENTER_OUTPUT_NAME}
)

target_include_directories(
  ${CENTER_LIB_NAME}
  PUBLIC
    ${CENTER_LIB_INCLUDE_DIR}
)
