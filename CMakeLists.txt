cmake_minimum_required(VERSION 3.31)

project(easy_yyjson
    VERSION 1.0
    DESCRIPTION "My C++ Library using yyjson"
    LANGUAGES CXX
)

# Library type option
option(BUILD_SHARED_LIBS "Build shared (DLL) library" OFF)

# Examples option
option(BUILD_EXAMPLES "Build example programs" ON)

# C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Fetch yyjson
include(FetchContent)

FetchContent_Declare(
    yyjson
    GIT_REPOSITORY https://github.com/ibireme/yyjson.git
    GIT_TAG        master  # you can pin a commit or release if you want
)

FetchContent_MakeAvailable(yyjson)

# Create the library
add_library(${PROJECT_NAME}
    src/easy_yyjson.cpp
    include/easy_yyjson.hpp
)

# Include directories
target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Link yyjson
target_link_libraries(${PROJECT_NAME} PUBLIC yyjson)

# Define EXPORT if building DLL on Windows
if(WIN32 AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE MYCPPLIBRARY_EXPORTS)
endif()

# Build examples if requested
if(BUILD_EXAMPLES)
    add_executable(example1 examples/example_read.cpp)
    target_link_libraries(example1 PRIVATE MyCppLibrary)
endif()
