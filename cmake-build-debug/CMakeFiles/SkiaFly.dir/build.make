# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.18.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.18.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Volumes/T5/Really/SkiaFly

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Volumes/T5/Really/SkiaFly/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SkiaFly.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SkiaFly.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SkiaFly.dir/flags.make

CMakeFiles/SkiaFly.dir/main.cpp.o: CMakeFiles/SkiaFly.dir/flags.make
CMakeFiles/SkiaFly.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Volumes/T5/Really/SkiaFly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SkiaFly.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SkiaFly.dir/main.cpp.o -c /Volumes/T5/Really/SkiaFly/main.cpp

CMakeFiles/SkiaFly.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SkiaFly.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Volumes/T5/Really/SkiaFly/main.cpp > CMakeFiles/SkiaFly.dir/main.cpp.i

CMakeFiles/SkiaFly.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SkiaFly.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Volumes/T5/Really/SkiaFly/main.cpp -o CMakeFiles/SkiaFly.dir/main.cpp.s

# Object files for target SkiaFly
SkiaFly_OBJECTS = \
"CMakeFiles/SkiaFly.dir/main.cpp.o"

# External object files for target SkiaFly
SkiaFly_EXTERNAL_OBJECTS =

SkiaFly: CMakeFiles/SkiaFly.dir/main.cpp.o
SkiaFly: CMakeFiles/SkiaFly.dir/build.make
SkiaFly: ../libs/libskia.so
SkiaFly: CMakeFiles/SkiaFly.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Volumes/T5/Really/SkiaFly/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SkiaFly"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SkiaFly.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SkiaFly.dir/build: SkiaFly

.PHONY : CMakeFiles/SkiaFly.dir/build

CMakeFiles/SkiaFly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SkiaFly.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SkiaFly.dir/clean

CMakeFiles/SkiaFly.dir/depend:
	cd /Volumes/T5/Really/SkiaFly/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Volumes/T5/Really/SkiaFly /Volumes/T5/Really/SkiaFly /Volumes/T5/Really/SkiaFly/cmake-build-debug /Volumes/T5/Really/SkiaFly/cmake-build-debug /Volumes/T5/Really/SkiaFly/cmake-build-debug/CMakeFiles/SkiaFly.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SkiaFly.dir/depend
