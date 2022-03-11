# JUCE CLion

A simple CLion/CMake project using JUCE on macOS.*

Prerequisites:
1. CLion
2. JUCE in the user's home directory (~/JUCE)

Once cloned, in CLion:
1. File -> Open
2. highlight the top-level directory this project was cloned to

The enclosed CLion project should automatically load.

As the CMake project loads, JUCE will be built in ~/JUCE.

Two CLion Run Configurations will load (Debug and Release). Execution of either will trigger a build of main and output the JUCE version to stdout.

*This also works on Linux (Fedora) since we're only using juce_core and have JUCE_USE_CURL=0

For Linux dependency details, see: ~/JUCE/docs/Linux Dependencies.md

License: Anything in this repo is free to use for any purpose. Note that JUCE has its own license.
