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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rubcap8/Documents/gitgood/linux-scripting/linux-program

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rubcap8/Documents/gitgood/linux-scripting/linux-program/build

# Include any dependencies generated for this target.
include CMakeFiles/processinfo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/processinfo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/processinfo.dir/flags.make

CMakeFiles/processinfo.dir/processinfo.cpp.o: CMakeFiles/processinfo.dir/flags.make
CMakeFiles/processinfo.dir/processinfo.cpp.o: ../processinfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rubcap8/Documents/gitgood/linux-scripting/linux-program/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/processinfo.dir/processinfo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/processinfo.dir/processinfo.cpp.o -c /home/rubcap8/Documents/gitgood/linux-scripting/linux-program/processinfo.cpp

CMakeFiles/processinfo.dir/processinfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/processinfo.dir/processinfo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/rubcap8/Documents/gitgood/linux-scripting/linux-program/processinfo.cpp > CMakeFiles/processinfo.dir/processinfo.cpp.i

CMakeFiles/processinfo.dir/processinfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/processinfo.dir/processinfo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/rubcap8/Documents/gitgood/linux-scripting/linux-program/processinfo.cpp -o CMakeFiles/processinfo.dir/processinfo.cpp.s

# Object files for target processinfo
processinfo_OBJECTS = \
"CMakeFiles/processinfo.dir/processinfo.cpp.o"

# External object files for target processinfo
processinfo_EXTERNAL_OBJECTS =

../bin/processinfo: CMakeFiles/processinfo.dir/processinfo.cpp.o
../bin/processinfo: CMakeFiles/processinfo.dir/build.make
../bin/processinfo: CMakeFiles/processinfo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rubcap8/Documents/gitgood/linux-scripting/linux-program/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/processinfo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/processinfo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/processinfo.dir/build: ../bin/processinfo

.PHONY : CMakeFiles/processinfo.dir/build

CMakeFiles/processinfo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/processinfo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/processinfo.dir/clean

CMakeFiles/processinfo.dir/depend:
	cd /home/rubcap8/Documents/gitgood/linux-scripting/linux-program/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rubcap8/Documents/gitgood/linux-scripting/linux-program /home/rubcap8/Documents/gitgood/linux-scripting/linux-program /home/rubcap8/Documents/gitgood/linux-scripting/linux-program/build /home/rubcap8/Documents/gitgood/linux-scripting/linux-program/build /home/rubcap8/Documents/gitgood/linux-scripting/linux-program/build/CMakeFiles/processinfo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/processinfo.dir/depend

