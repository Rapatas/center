
set(
  ${CENTER_TEST_NAME}-cpp
  test.cpp
)

add_executable(
  ${CENTER_TEST_NAME}
  ${${CENTER_TEST_NAME}-cpp}
)

target_link_libraries(
  ${CENTER_TEST_NAME}
  PRIVATE
    ${CENTER_LIB_NAME}
)
