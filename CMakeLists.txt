cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# set project name and the programming language to use
project(demo LANGUAGES CXX C)

#if (NOT CMAKE_SYSTEM_NAME STREQUAL "Linux")
#    MESSAGE(FATAL_ERROR  "Only for Linux")
#endif()

add_executable(main main.cpp)

if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    message(STATUS "Configuring on/for Linux")
    target_compile_definitions(main PUBLIC "IS_LINUX")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    message(STATUS "Configuring on/for macOS")
    target_compile_definitions(main PUBLIC "IS_MACOS")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    message(STATUS "Configuring on/for Windows")
    target_compile_definitions(main PUBLIC "IS_WINDOWS")
elseif(CMAKE_SYSTEM_NAME STREQUAL "AIX")
    message(STATUS "Configuring on/for IBM AIX")
else()
    message(STATUS "Configuring on/for ${CMAKE_SYSTEM_NAME}")
endif()
