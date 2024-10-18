cmake_minimum_required(VERSION 3.29)
project(c_restrict VERSION 1.0.0 LANGUAGES C)
add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE include)
