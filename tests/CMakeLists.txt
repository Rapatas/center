
set(
  CENTER_TEST_SOURCES
  test.cpp
)

add_executable(
  ${CENTER_TEST_NAME}
  ${CENTER_TEST_SOURCES}
)

target_link_libraries(
  ${CENTER_TEST_NAME}
  PRIVATE
    ${CENTER_LIB_NAME}
)
