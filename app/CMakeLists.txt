
set(
  CENTER_BIN_SOURCES
  main.cpp
)

add_executable(
  ${CENTER_BIN_NAME}
  ${CENTER_BIN_SOURCES}
)

set_target_properties(
  ${CENTER_BIN_NAME}
  PROPERTIES
    OUTPUT_NAME ${CENTER_OUTPUT_NAME}
)

target_link_libraries(
  ${CENTER_BIN_NAME}
  PRIVATE
    ${CENTER_LIB_NAME}
)

install(TARGETS
  ${CENTER_BIN_NAME}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
