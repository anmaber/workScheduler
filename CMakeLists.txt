cmake_minimum_required (VERSION 3.8)

project (workScheduler)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall") # enables all compiler's warning messages
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra") # enables extra compiler's warning messages
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Woverloaded-virtual")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wnon-virtual-dtor")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${PROJECT_SOURCE_DIR}/src)

add_subdirectory(3rdparty/googletest/googletest)
add_subdirectory(src)
add_subdirectory(test)