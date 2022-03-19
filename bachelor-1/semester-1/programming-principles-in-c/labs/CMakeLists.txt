cmake_minimum_required(VERSION 3.0.0)
project(labs VERSION 0.1.0)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

add_executable(modularity/factorial.c)
add_executable(modularity/fibonacci.c)
add_executable(modularity/gcd.c)
add_executable(modularity/converter.c)