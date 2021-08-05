cmake_minimum_required(VERSION 3.19)

project(juce_clion)

set(CMAKE_CXX_STANDARD 14)

# this references JUCE in your home directory and will
# build it there using JUCE's CMakeLists.txt
add_subdirectory($ENV{HOME}/JUCE cmake-build-debug)

add_executable(juce_clion main.cpp)

target_sources(juce_clion PUBLIC main.cpp)

target_compile_definitions(juce_clion PRIVATE JUCE_STANDALONE_APPLICATION=1)

target_link_libraries(juce_clion PRIVATE juce::juce_core)