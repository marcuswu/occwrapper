cmake_minimum_required(VERSION 3.14...3.18)

project(
    OCCWrapper
    VERSION 0.1
    DESCRIPTION "A C wrapper for OpenCascade"
    LANGUAGES CXX)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set(CMAKE_CXX_EXTENSIONS OFF)
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
endif()

include(FetchContent)

find_package(OpenCASCADE REQUIRED)
include_directories(${OpenCASCADE_INCLUDE_DIR})

add_subdirectory(src)