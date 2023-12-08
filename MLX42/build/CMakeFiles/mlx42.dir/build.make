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
include CMakeFiles/mlx42.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mlx42.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mlx42.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mlx42.dir/flags.make

mlx_vert_shader.c: ../shaders/default.vert
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building vertex shader"
	../tools/compile_shader.sh /home/ebelfkih/Desktop/MLX42/shaders/default.vert > mlx_vert_shader.c

mlx_frag_shader.c: ../shaders/default.frag
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building fragment shader"
	../tools/compile_shader.sh /home/ebelfkih/Desktop/MLX42/shaders/default.frag > mlx_frag_shader.c

CMakeFiles/mlx42.dir/src/mlx_cursor.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_cursor.c.o: ../src/mlx_cursor.c
CMakeFiles/mlx42.dir/src/mlx_cursor.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/mlx42.dir/src/mlx_cursor.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_cursor.c.o -MF CMakeFiles/mlx42.dir/src/mlx_cursor.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_cursor.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_cursor.c

CMakeFiles/mlx42.dir/src/mlx_cursor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_cursor.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_cursor.c > CMakeFiles/mlx42.dir/src/mlx_cursor.c.i

CMakeFiles/mlx42.dir/src/mlx_cursor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_cursor.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_cursor.c -o CMakeFiles/mlx42.dir/src/mlx_cursor.c.s

CMakeFiles/mlx42.dir/src/mlx_exit.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_exit.c.o: ../src/mlx_exit.c
CMakeFiles/mlx42.dir/src/mlx_exit.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/mlx42.dir/src/mlx_exit.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_exit.c.o -MF CMakeFiles/mlx42.dir/src/mlx_exit.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_exit.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_exit.c

CMakeFiles/mlx42.dir/src/mlx_exit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_exit.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_exit.c > CMakeFiles/mlx42.dir/src/mlx_exit.c.i

CMakeFiles/mlx42.dir/src/mlx_exit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_exit.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_exit.c -o CMakeFiles/mlx42.dir/src/mlx_exit.c.s

CMakeFiles/mlx42.dir/src/mlx_images.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_images.c.o: ../src/mlx_images.c
CMakeFiles/mlx42.dir/src/mlx_images.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/mlx42.dir/src/mlx_images.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_images.c.o -MF CMakeFiles/mlx42.dir/src/mlx_images.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_images.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_images.c

CMakeFiles/mlx42.dir/src/mlx_images.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_images.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_images.c > CMakeFiles/mlx42.dir/src/mlx_images.c.i

CMakeFiles/mlx42.dir/src/mlx_images.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_images.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_images.c -o CMakeFiles/mlx42.dir/src/mlx_images.c.s

CMakeFiles/mlx42.dir/src/mlx_init.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_init.c.o: ../src/mlx_init.c
CMakeFiles/mlx42.dir/src/mlx_init.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/mlx42.dir/src/mlx_init.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_init.c.o -MF CMakeFiles/mlx42.dir/src/mlx_init.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_init.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_init.c

CMakeFiles/mlx42.dir/src/mlx_init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_init.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_init.c > CMakeFiles/mlx42.dir/src/mlx_init.c.i

CMakeFiles/mlx42.dir/src/mlx_init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_init.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_init.c -o CMakeFiles/mlx42.dir/src/mlx_init.c.s

CMakeFiles/mlx42.dir/src/mlx_keys.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_keys.c.o: ../src/mlx_keys.c
CMakeFiles/mlx42.dir/src/mlx_keys.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/mlx42.dir/src/mlx_keys.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_keys.c.o -MF CMakeFiles/mlx42.dir/src/mlx_keys.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_keys.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_keys.c

CMakeFiles/mlx42.dir/src/mlx_keys.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_keys.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_keys.c > CMakeFiles/mlx42.dir/src/mlx_keys.c.i

CMakeFiles/mlx42.dir/src/mlx_keys.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_keys.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_keys.c -o CMakeFiles/mlx42.dir/src/mlx_keys.c.s

CMakeFiles/mlx42.dir/src/mlx_loop.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_loop.c.o: ../src/mlx_loop.c
CMakeFiles/mlx42.dir/src/mlx_loop.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/mlx42.dir/src/mlx_loop.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_loop.c.o -MF CMakeFiles/mlx42.dir/src/mlx_loop.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_loop.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_loop.c

CMakeFiles/mlx42.dir/src/mlx_loop.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_loop.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_loop.c > CMakeFiles/mlx42.dir/src/mlx_loop.c.i

CMakeFiles/mlx42.dir/src/mlx_loop.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_loop.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_loop.c -o CMakeFiles/mlx42.dir/src/mlx_loop.c.s

CMakeFiles/mlx42.dir/src/mlx_monitor.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_monitor.c.o: ../src/mlx_monitor.c
CMakeFiles/mlx42.dir/src/mlx_monitor.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/mlx42.dir/src/mlx_monitor.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_monitor.c.o -MF CMakeFiles/mlx42.dir/src/mlx_monitor.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_monitor.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_monitor.c

CMakeFiles/mlx42.dir/src/mlx_monitor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_monitor.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_monitor.c > CMakeFiles/mlx42.dir/src/mlx_monitor.c.i

CMakeFiles/mlx42.dir/src/mlx_monitor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_monitor.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_monitor.c -o CMakeFiles/mlx42.dir/src/mlx_monitor.c.s

CMakeFiles/mlx42.dir/src/mlx_mouse.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_mouse.c.o: ../src/mlx_mouse.c
CMakeFiles/mlx42.dir/src/mlx_mouse.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/mlx42.dir/src/mlx_mouse.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_mouse.c.o -MF CMakeFiles/mlx42.dir/src/mlx_mouse.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_mouse.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_mouse.c

CMakeFiles/mlx42.dir/src/mlx_mouse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_mouse.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_mouse.c > CMakeFiles/mlx42.dir/src/mlx_mouse.c.i

CMakeFiles/mlx42.dir/src/mlx_mouse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_mouse.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_mouse.c -o CMakeFiles/mlx42.dir/src/mlx_mouse.c.s

CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o: ../src/mlx_put_pixel.c
CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o -MF CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_put_pixel.c

CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_put_pixel.c > CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.i

CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_put_pixel.c -o CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.s

CMakeFiles/mlx42.dir/src/mlx_window.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/mlx_window.c.o: ../src/mlx_window.c
CMakeFiles/mlx42.dir/src/mlx_window.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/mlx42.dir/src/mlx_window.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/mlx_window.c.o -MF CMakeFiles/mlx42.dir/src/mlx_window.c.o.d -o CMakeFiles/mlx42.dir/src/mlx_window.c.o -c /home/ebelfkih/Desktop/MLX42/src/mlx_window.c

CMakeFiles/mlx42.dir/src/mlx_window.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/mlx_window.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/mlx_window.c > CMakeFiles/mlx42.dir/src/mlx_window.c.i

CMakeFiles/mlx42.dir/src/mlx_window.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/mlx_window.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/mlx_window.c -o CMakeFiles/mlx42.dir/src/mlx_window.c.s

CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o: ../src/utils/mlx_error.c
CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o -MF CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o.d -o CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o -c /home/ebelfkih/Desktop/MLX42/src/utils/mlx_error.c

CMakeFiles/mlx42.dir/src/utils/mlx_error.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/utils/mlx_error.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/utils/mlx_error.c > CMakeFiles/mlx42.dir/src/utils/mlx_error.c.i

CMakeFiles/mlx42.dir/src/utils/mlx_error.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/utils/mlx_error.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/utils/mlx_error.c -o CMakeFiles/mlx42.dir/src/utils/mlx_error.c.s

CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o: ../src/utils/mlx_list.c
CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o -MF CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o.d -o CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o -c /home/ebelfkih/Desktop/MLX42/src/utils/mlx_list.c

CMakeFiles/mlx42.dir/src/utils/mlx_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/utils/mlx_list.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/utils/mlx_list.c > CMakeFiles/mlx42.dir/src/utils/mlx_list.c.i

CMakeFiles/mlx42.dir/src/utils/mlx_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/utils/mlx_list.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/utils/mlx_list.c -o CMakeFiles/mlx42.dir/src/utils/mlx_list.c.s

CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o: ../src/utils/mlx_utils.c
CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o -MF CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o.d -o CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o -c /home/ebelfkih/Desktop/MLX42/src/utils/mlx_utils.c

CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/utils/mlx_utils.c > CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.i

CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/utils/mlx_utils.c -o CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.s

CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o: ../src/utils/mlx_compare.c
CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o -MF CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o.d -o CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o -c /home/ebelfkih/Desktop/MLX42/src/utils/mlx_compare.c

CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/utils/mlx_compare.c > CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.i

CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/utils/mlx_compare.c -o CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.s

CMakeFiles/mlx42.dir/src/font/mlx_font.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/font/mlx_font.c.o: ../src/font/mlx_font.c
CMakeFiles/mlx42.dir/src/font/mlx_font.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/mlx42.dir/src/font/mlx_font.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/font/mlx_font.c.o -MF CMakeFiles/mlx42.dir/src/font/mlx_font.c.o.d -o CMakeFiles/mlx42.dir/src/font/mlx_font.c.o -c /home/ebelfkih/Desktop/MLX42/src/font/mlx_font.c

CMakeFiles/mlx42.dir/src/font/mlx_font.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/font/mlx_font.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/font/mlx_font.c > CMakeFiles/mlx42.dir/src/font/mlx_font.c.i

CMakeFiles/mlx42.dir/src/font/mlx_font.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/font/mlx_font.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/font/mlx_font.c -o CMakeFiles/mlx42.dir/src/font/mlx_font.c.s

CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o: ../src/textures/mlx_png.c
CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o -MF CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o.d -o CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o -c /home/ebelfkih/Desktop/MLX42/src/textures/mlx_png.c

CMakeFiles/mlx42.dir/src/textures/mlx_png.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/textures/mlx_png.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/textures/mlx_png.c > CMakeFiles/mlx42.dir/src/textures/mlx_png.c.i

CMakeFiles/mlx42.dir/src/textures/mlx_png.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/textures/mlx_png.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/textures/mlx_png.c -o CMakeFiles/mlx42.dir/src/textures/mlx_png.c.s

CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o: ../src/textures/mlx_texture.c
CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o -MF CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o.d -o CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o -c /home/ebelfkih/Desktop/MLX42/src/textures/mlx_texture.c

CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/textures/mlx_texture.c > CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.i

CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/textures/mlx_texture.c -o CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.s

CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o: ../src/textures/mlx_xpm42.c
CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o -MF CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o.d -o CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o -c /home/ebelfkih/Desktop/MLX42/src/textures/mlx_xpm42.c

CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/src/textures/mlx_xpm42.c > CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.i

CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/src/textures/mlx_xpm42.c -o CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.s

CMakeFiles/mlx42.dir/lib/png/lodepng.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/lib/png/lodepng.c.o: ../lib/png/lodepng.c
CMakeFiles/mlx42.dir/lib/png/lodepng.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building C object CMakeFiles/mlx42.dir/lib/png/lodepng.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/lib/png/lodepng.c.o -MF CMakeFiles/mlx42.dir/lib/png/lodepng.c.o.d -o CMakeFiles/mlx42.dir/lib/png/lodepng.c.o -c /home/ebelfkih/Desktop/MLX42/lib/png/lodepng.c

CMakeFiles/mlx42.dir/lib/png/lodepng.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/lib/png/lodepng.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/lib/png/lodepng.c > CMakeFiles/mlx42.dir/lib/png/lodepng.c.i

CMakeFiles/mlx42.dir/lib/png/lodepng.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/lib/png/lodepng.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/lib/png/lodepng.c -o CMakeFiles/mlx42.dir/lib/png/lodepng.c.s

CMakeFiles/mlx42.dir/lib/glad/glad.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/lib/glad/glad.c.o: ../lib/glad/glad.c
CMakeFiles/mlx42.dir/lib/glad/glad.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building C object CMakeFiles/mlx42.dir/lib/glad/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/lib/glad/glad.c.o -MF CMakeFiles/mlx42.dir/lib/glad/glad.c.o.d -o CMakeFiles/mlx42.dir/lib/glad/glad.c.o -c /home/ebelfkih/Desktop/MLX42/lib/glad/glad.c

CMakeFiles/mlx42.dir/lib/glad/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/lib/glad/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/lib/glad/glad.c > CMakeFiles/mlx42.dir/lib/glad/glad.c.i

CMakeFiles/mlx42.dir/lib/glad/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/lib/glad/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/lib/glad/glad.c -o CMakeFiles/mlx42.dir/lib/glad/glad.c.s

CMakeFiles/mlx42.dir/mlx_vert_shader.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/mlx_vert_shader.c.o: mlx_vert_shader.c
CMakeFiles/mlx42.dir/mlx_vert_shader.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Building C object CMakeFiles/mlx42.dir/mlx_vert_shader.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/mlx_vert_shader.c.o -MF CMakeFiles/mlx42.dir/mlx_vert_shader.c.o.d -o CMakeFiles/mlx42.dir/mlx_vert_shader.c.o -c /home/ebelfkih/Desktop/MLX42/build/mlx_vert_shader.c

CMakeFiles/mlx42.dir/mlx_vert_shader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/mlx_vert_shader.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/build/mlx_vert_shader.c > CMakeFiles/mlx42.dir/mlx_vert_shader.c.i

CMakeFiles/mlx42.dir/mlx_vert_shader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/mlx_vert_shader.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/build/mlx_vert_shader.c -o CMakeFiles/mlx42.dir/mlx_vert_shader.c.s

CMakeFiles/mlx42.dir/mlx_frag_shader.c.o: CMakeFiles/mlx42.dir/flags.make
CMakeFiles/mlx42.dir/mlx_frag_shader.c.o: mlx_frag_shader.c
CMakeFiles/mlx42.dir/mlx_frag_shader.c.o: CMakeFiles/mlx42.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_24) "Building C object CMakeFiles/mlx42.dir/mlx_frag_shader.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/mlx42.dir/mlx_frag_shader.c.o -MF CMakeFiles/mlx42.dir/mlx_frag_shader.c.o.d -o CMakeFiles/mlx42.dir/mlx_frag_shader.c.o -c /home/ebelfkih/Desktop/MLX42/build/mlx_frag_shader.c

CMakeFiles/mlx42.dir/mlx_frag_shader.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mlx42.dir/mlx_frag_shader.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ebelfkih/Desktop/MLX42/build/mlx_frag_shader.c > CMakeFiles/mlx42.dir/mlx_frag_shader.c.i

CMakeFiles/mlx42.dir/mlx_frag_shader.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mlx42.dir/mlx_frag_shader.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ebelfkih/Desktop/MLX42/build/mlx_frag_shader.c -o CMakeFiles/mlx42.dir/mlx_frag_shader.c.s

# Object files for target mlx42
mlx42_OBJECTS = \
"CMakeFiles/mlx42.dir/src/mlx_cursor.c.o" \
"CMakeFiles/mlx42.dir/src/mlx_exit.c.o" \
"CMakeFiles/mlx42.dir/src/mlx_images.c.o" \
"CMakeFiles/mlx42.dir/src/mlx_init.c.o" \
"CMakeFiles/mlx42.dir/src/mlx_keys.c.o" \
"CMakeFiles/mlx42.dir/src/mlx_loop.c.o" \
"CMakeFiles/mlx42.dir/src/mlx_monitor.c.o" \
"CMakeFiles/mlx42.dir/src/mlx_mouse.c.o" \
"CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o" \
"CMakeFiles/mlx42.dir/src/mlx_window.c.o" \
"CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o" \
"CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o" \
"CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o" \
"CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o" \
"CMakeFiles/mlx42.dir/src/font/mlx_font.c.o" \
"CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o" \
"CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o" \
"CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o" \
"CMakeFiles/mlx42.dir/lib/png/lodepng.c.o" \
"CMakeFiles/mlx42.dir/lib/glad/glad.c.o" \
"CMakeFiles/mlx42.dir/mlx_vert_shader.c.o" \
"CMakeFiles/mlx42.dir/mlx_frag_shader.c.o"

# External object files for target mlx42
mlx42_EXTERNAL_OBJECTS =

libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_cursor.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_exit.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_images.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_init.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_keys.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_loop.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_monitor.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_mouse.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_put_pixel.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/mlx_window.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/utils/mlx_error.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/utils/mlx_list.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/utils/mlx_utils.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/utils/mlx_compare.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/font/mlx_font.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/textures/mlx_png.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/textures/mlx_texture.c.o
libmlx42.a: CMakeFiles/mlx42.dir/src/textures/mlx_xpm42.c.o
libmlx42.a: CMakeFiles/mlx42.dir/lib/png/lodepng.c.o
libmlx42.a: CMakeFiles/mlx42.dir/lib/glad/glad.c.o
libmlx42.a: CMakeFiles/mlx42.dir/mlx_vert_shader.c.o
libmlx42.a: CMakeFiles/mlx42.dir/mlx_frag_shader.c.o
libmlx42.a: CMakeFiles/mlx42.dir/build.make
libmlx42.a: CMakeFiles/mlx42.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ebelfkih/Desktop/MLX42/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_25) "Linking C static library libmlx42.a"
	$(CMAKE_COMMAND) -P CMakeFiles/mlx42.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mlx42.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mlx42.dir/build: libmlx42.a
.PHONY : CMakeFiles/mlx42.dir/build

CMakeFiles/mlx42.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mlx42.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mlx42.dir/clean

CMakeFiles/mlx42.dir/depend: mlx_frag_shader.c
CMakeFiles/mlx42.dir/depend: mlx_vert_shader.c
	cd /home/ebelfkih/Desktop/MLX42/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ebelfkih/Desktop/MLX42 /home/ebelfkih/Desktop/MLX42 /home/ebelfkih/Desktop/MLX42/build /home/ebelfkih/Desktop/MLX42/build /home/ebelfkih/Desktop/MLX42/build/CMakeFiles/mlx42.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mlx42.dir/depend

