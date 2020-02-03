cmake_minimum_required(VERSION 3.10)

# set the project name and the version
project(Tanks VERSION 0.1)

# specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED)

# set source files
file(GLOB sourceFiles "source/main.cpp")

# add the executable
add_executable(run ${sourceFiles})
