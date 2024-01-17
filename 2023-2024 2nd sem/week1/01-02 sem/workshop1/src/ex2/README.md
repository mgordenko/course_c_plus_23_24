# Notes for the directory

This folder plays role of a so-called “package”, which is a set of substantive components of a program or simply separate applications/libraries.
The `src` subdirectory contains all necessary sources including `CMakeLists.txt` file that is the an entry point to an application build system.
When you configure the output of your building system, consider to put it next to the `/src` directory. E.g. it can be `/build-debug` folder. Never put the outcome in the directory with sources, namely `/src`, because it this contradicts the “directory separating” approach of CMake.
