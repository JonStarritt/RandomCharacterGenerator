#CMakeLists.txt

#set the minimum CMake version, not sure this actually *needs* to be 3.6, but it works. you can change this if you CMake is a lower version than 3.6
cmake_minimum_required(VERSION 3.6)

#this is the project name, it dictates what the final compiled executable will be
project(RandomCharacterGenerator)

#this is in case you decide to move your header files to a subdirectory, just uncomment and replace the path with the path for that folder.
#you can have more than one of this line for multiple header file directories
#include_directories("include/")

#this is the same as include directories, but for linking static libraries.  stick your .lib or .a files into lib or a different subdirectory and uncomment this
#link_directories("lib/")

#This is a line I like to have, basically when you run CMake to configure it for a Debug build, it defines "DEBUG" so you can check "#ifdef DEBUG" in your C or Header files
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")
#this is the same as above, but for release, so you can do certain things in release builds
#set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_RELEASE} -DRELEASE")


#Files are defined here, every time you add a new cpp or c file, add it to this list
file(GLOB SRC "main.cpp" "CharacterSheet.cpp")

#this says what files get build for what project.
add_executable(RandomCharacterGenerator ${SRC})

#This is where you add the linked libraries.  Uncomment and replace "LIB1" with the name of the library file you want to link with, with no extension
#ie to link against glfw3.lib, you just replace LIB1 with glfw3
#target_link_libraries(RandomCharacterGenerator LIB1)

#this is in case you want it to install the executable to a specific location.  I realized that this line isn't needed but I had it in my projects, I suspect its for if you do "make install" on Linux, it'll tell it where to put it.
#install(TARGETS RandomCharacterGenerator DESTINATION bin)

