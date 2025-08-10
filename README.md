# JUCE CLion

A simple CLion/CMake project using JUCE on RHEL8.

For Linux dependency details, see: [JUCE Dependencies on Linux](https://github.com/juce-framework/JUCE/blob/master/docs/Linux%20Dependencies.md)

Prerequisites:
1. CMake >= 3.22
2. gcc >= 13.2.1
3. CLion

Once cloned, in CLion:
1. File -> Open
2. highlight the top-level directory this project was cloned to

The enclosed CLion project should automatically load.

Two CLion Run Configurations will load (Debug and Release). Execution of either will trigger a build of main and output the JUCE version to stdout.

License: Anything in this repo is free to use for any purpose. Note that JUCE has its own license.
