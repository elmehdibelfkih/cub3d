# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ebelfkih/Desktop/MLX42

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ebelfkih/Desktop/MLX42/build

# Include any dependencies generated for this target.
include tests/CMakeFiles/unit_tests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/unit_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/unit_tests.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/unit_tests.dir/flags.make

tests/CMakeFiles/unit_tests.dir/tests.cpp.o: tests/CMakeFiles/unit_tests.dir/flags.make
tests/CMakeFiles/unit_tests.dir/tests.cpp.o: ../tests/tests.cpp
tests/CMakeFiles/unit_tests.dir/tests.cpp.o: tests/CMakeFiles/unit_tests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/unit_tests.dir/tests.cpp.o"
	cd /home/ebelfkih/Desktop/MLX42/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/unit_tests.dir/tests.cpp.o -MF CMakeFiles/unit_tests.dir/tests.cpp.o.d -o CMakeFiles/unit_tests.dir/tests.cpp.o -c /home/ebelfkih/Desktop/MLX42/tests/tests.cpp

tests/CMakeFiles/unit_tests.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unit_tests.dir/tests.cpp.i"
	cd /home/ebelfkih/Desktop/MLX42/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ebelfkih/Desktop/MLX42/tests/tests.cpp > CMakeFiles/unit_tests.dir/tests.cpp.i

tests/CMakeFiles/unit_tests.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unit_tests.dir/tests.cpp.s"
	cd /home/ebelfkih/Desktop/MLX42/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ebelfkih/Desktop/MLX42/tests/tests.cpp -o CMakeFiles/unit_tests.dir/tests.cpp.s

# Object files for target unit_tests
unit_tests_OBJECTS = \
"CMakeFiles/unit_tests.dir/tests.cpp.o"

# External object files for target unit_tests
unit_tests_EXTERNAL_OBJECTS =

unit_tests: tests/CMakeFiles/unit_tests.dir/tests.cpp.o
unit_tests: tests/CMakeFiles/unit_tests.dir/build.make
unit_tests: lib/libgtest_main.a
unit_tests: libmlx42.a
unit_tests: lib/libgtest.a
unit_tests: /usr/lib/x86_64-linux-gnu/libGLX.so
unit_tests: /usr/lib/x86_64-linux-gnu/libOpenGL.so
unit_tests: /usr/lib/x86_64-linux-gnu/libglfw.so
unit_tests: tests/CMakeFiles/unit_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../unit_tests"
	cd /home/ebelfkih/Desktop/MLX42/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unit_tests.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ebelfkih/Desktop/MLX42/build/tests && /usr/bin/cmake -D TEST_TARGET=unit_tests -D TEST_EXECUTABLE=/home/ebelfkih/Desktop/MLX42/build/unit_tests -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/ebelfkih/Desktop/MLX42/tests -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX=MLX42. -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=unit_tests_TESTS -D CTEST_FILE=/home/ebelfkih/Desktop/MLX42/build/tests/unit_tests[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /usr/share/cmake-3.22/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
tests/CMakeFiles/unit_tests.dir/build: unit_tests
.PHONY : tests/CMakeFiles/unit_tests.dir/build

tests/CMakeFiles/unit_tests.dir/clean:
	cd /home/ebelfkih/Desktop/MLX42/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/unit_tests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/unit_tests.dir/clean

tests/CMakeFiles/unit_tests.dir/depend:
	cd /home/ebelfkih/Desktop/MLX42/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ebelfkih/Desktop/MLX42 /home/ebelfkih/Desktop/MLX42/tests /home/ebelfkih/Desktop/MLX42/build /home/ebelfkih/Desktop/MLX42/build/tests /home/ebelfkih/Desktop/MLX42/build/tests/CMakeFiles/unit_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/unit_tests.dir/depend

