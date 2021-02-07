cmake_minimum_required(VERSION 3.17)
project(AlgorithmsRobertSadgewick)

set(CMAKE_CXX_STANDARD 17)

FILE(COPY Pairs DESTINATION "${CMAKE_BINARY_DIR}")

add_executable(AlgorithmsRobertSadgewick main.cpp)