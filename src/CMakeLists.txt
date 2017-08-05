cmake_minimum_required(VERSION 3.0)
project(Affledore)#project name

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ../Maze/src ../Agent/src)
add_executable(affledore Main.cpp Maze/src/Maze.cpp Agent/src/Agent.cpp)