cmake_minimum_required(VERSION 3.10)

# set the project name and the version
project(Tanks VERSION 0.1)

# specify C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED)

# set source files
file(GLOB_RECURSE sourceFiles "source/*.cpp")


# add the executable
add_executable(run ${sourceFiles})

# set include directories
target_include_directories(run PUBLIC "./header/")
target_include_directories(run PUBLIC "~/external-libs/SFML/SFML-2.5.1/include/")

target_link_libraries(run
	sfml-window
	sfml-graphics
	sfml-audio
	sfml-network
	sfml-system
	)
target_link_directories(run PUBLIC "~/external-libs/SFML/SFML-2.5.1/lib/")
