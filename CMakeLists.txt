cmake_minimum_required(VERSION 3.21)
project(lame_solver)

set(CMAKE_CXX_STANDARD 20)

add_executable(lame_solver main.cpp LameSolver.cpp lame.cpp)
target_include_directories(lame_solver PRIVATE '/usr/local/Cellar/swi-prolog/8.4.3_1/libexec/lib/swipl/include/')

