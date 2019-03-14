find_package(GTest REQUIRED)
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(calculator_test
    TestCalculator.cpp
    test_calculator.cpp
)
target_link_libraries(calculator_test ${GTEST_LIBRARIES} pthread Calculator)
