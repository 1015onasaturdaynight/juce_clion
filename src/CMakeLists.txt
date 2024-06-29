cmake_minimum_required(VERSION 3.22)

project(juce_clion VERSION 0.0.2)

set(CMAKE_CXX_STANDARD 20)

set(target_name ${PROJECT_NAME})

# change this to the path for JUCE
#add_subdirectory($ENV{HOME}/SDK/JUCE cmake-build-debug)

include(FetchContent)

fetchcontent_declare(
  juce
  GIT_REPOSITORY https://github.com/juce-framework/JUCE.git
  GIT_TAG        7.0.12
  GIT_SHALLOW    TRUE
)

fetchcontent_makeavailable(juce)

# if the VST3 SDK is installed, uncomment and
# change this to the path for the VST3 SDK
#juce_set_vst3_sdk_path($ENV{HOME}/SDK/VST_SDK)

#add_executable(juce_clion main.cpp)
juce_add_console_app(${target_name})

target_sources(${target_name} PRIVATE main.cpp)

# JUCE_USE_CURL is set here to prevent the juce_core package
# used in the sample program from requiring libcurl
target_compile_definitions(${target_name} PRIVATE
  JUCE_STANDALONE_APPLICATION=1
  JUCE_USE_CURL=0
  JUCE_WEB_BROWSER=0
)

target_link_libraries(${target_name} PRIVATE
  juce::juce_recommended_config_flags
  juce::juce_recommended_lto_flags
  juce::juce_recommended_warning_flags
  juce::juce_core
)
