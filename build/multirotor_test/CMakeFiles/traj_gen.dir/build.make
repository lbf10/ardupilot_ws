# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lbf10/ardupilot_ws/src/multirotor_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lbf10/ardupilot_ws/build/multirotor_test

# Include any dependencies generated for this target.
include CMakeFiles/traj_gen.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/traj_gen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/traj_gen.dir/flags.make

CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o: CMakeFiles/traj_gen.dir/flags.make
CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o: /home/lbf10/ardupilot_ws/src/multirotor_test/include/multirotor_test/traj_gen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lbf10/ardupilot_ws/build/multirotor_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o -c /home/lbf10/ardupilot_ws/src/multirotor_test/include/multirotor_test/traj_gen.cpp

CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lbf10/ardupilot_ws/src/multirotor_test/include/multirotor_test/traj_gen.cpp > CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.i

CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lbf10/ardupilot_ws/src/multirotor_test/include/multirotor_test/traj_gen.cpp -o CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.s

CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o.requires:

.PHONY : CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o.requires

CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o.provides: CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o.requires
	$(MAKE) -f CMakeFiles/traj_gen.dir/build.make CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o.provides.build
.PHONY : CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o.provides

CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o.provides.build: CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o


# Object files for target traj_gen
traj_gen_OBJECTS = \
"CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o"

# External object files for target traj_gen
traj_gen_EXTERNAL_OBJECTS =

/home/lbf10/ardupilot_ws/devel/.private/multirotor_test/lib/libtraj_gen.so: CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o
/home/lbf10/ardupilot_ws/devel/.private/multirotor_test/lib/libtraj_gen.so: CMakeFiles/traj_gen.dir/build.make
/home/lbf10/ardupilot_ws/devel/.private/multirotor_test/lib/libtraj_gen.so: CMakeFiles/traj_gen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lbf10/ardupilot_ws/build/multirotor_test/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/lbf10/ardupilot_ws/devel/.private/multirotor_test/lib/libtraj_gen.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/traj_gen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/traj_gen.dir/build: /home/lbf10/ardupilot_ws/devel/.private/multirotor_test/lib/libtraj_gen.so

.PHONY : CMakeFiles/traj_gen.dir/build

CMakeFiles/traj_gen.dir/requires: CMakeFiles/traj_gen.dir/include/multirotor_test/traj_gen.cpp.o.requires

.PHONY : CMakeFiles/traj_gen.dir/requires

CMakeFiles/traj_gen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/traj_gen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/traj_gen.dir/clean

CMakeFiles/traj_gen.dir/depend:
	cd /home/lbf10/ardupilot_ws/build/multirotor_test && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lbf10/ardupilot_ws/src/multirotor_test /home/lbf10/ardupilot_ws/src/multirotor_test /home/lbf10/ardupilot_ws/build/multirotor_test /home/lbf10/ardupilot_ws/build/multirotor_test /home/lbf10/ardupilot_ws/build/multirotor_test/CMakeFiles/traj_gen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/traj_gen.dir/depend

