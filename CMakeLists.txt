# CMakeLists.txt

cmake_minimum_required(VERSION 3.22.1)
project(MyTaskManager)

# Add the source files from the src directory
file(GLOB SOURCE_FILES src/*.c)

# Specify the full path for the header files directory
include_directories(${CMAKE_SOURCE_DIR}/include)

# Create the executable
add_executable(a.out ${SOURCE_FILES})
