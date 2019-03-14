include_directories(${CMAKE_SOURCE_DIR}/include)
add_library(Calculator Calculator.cpp)
add_executable(main main.cpp)
target_link_libraries(main Calculator)
