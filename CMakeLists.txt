cmake_minimum_required(VERSION 3.5)

project(Stack LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Stack main.cpp element.h element.cpp stack.h stack.cpp )

install(TARGETS Stack
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
