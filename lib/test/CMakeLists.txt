add_executable(ExampleTest Tests.cpp)

target_link_libraries(ExampleTest PRIVATE ExampleLib)
target_link_libraries(ExampleTest PRIVATE Catch2::Catch2)