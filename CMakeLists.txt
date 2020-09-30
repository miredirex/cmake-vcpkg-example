cmake_minimum_required(VERSION 3.15)

# Setup vcpkg script with CMake (note: should be placed before project() call)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake CACHE STRING "Vcpkg toolchain file")

project(Example)

set(CMAKE_CXX_STANDARD 17)

# vcpkg dependencies
find_package(fmt CONFIG REQUIRED)
find_package(Catch2 CONFIG REQUIRED)

add_subdirectory(lib)
add_subdirectory(app)