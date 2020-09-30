set(ExampleLib_SourceFiles
        include/Document.h
        src/Document.cpp)

add_library(ExampleLib ${ExampleLib_SourceFiles})

target_include_directories(ExampleLib
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(ExampleLib PRIVATE fmt::fmt fmt::fmt-header-only)

add_subdirectory(test)