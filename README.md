# JUCE CLion

A simple CLion/CMake project using JUCE on macOS and Linux.

Prerequisites:
1. CLion
2. JUCE in the user's home directory (~/SDK/JUCE)

Once cloned, in CLion:
1. File -> Open
2. highlight the top-level directory this project was cloned to

The enclosed CLion project should automatically load.

Two CLion Run Configurations will load (Debug and Release). Execution of either will trigger a build of main and output the JUCE version to stdout.

For Linux dependency details, see: ~/SDK/JUCE/docs/Linux Dependencies.md

License: Anything in this repo is free to use for any purpose. Note that JUCE has its own license.
