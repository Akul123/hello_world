cmake_minimum_required(VERSION 3.10)

project(hello_world)

add_executable(hello_world hello_world.c)

install (TARGETS hello_world DESTINATION ${CMAKE_INSTALL_BINDIR})
