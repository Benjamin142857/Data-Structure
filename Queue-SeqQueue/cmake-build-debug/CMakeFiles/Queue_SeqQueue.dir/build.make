# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Queue_SeqQueue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Queue_SeqQueue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Queue_SeqQueue.dir/flags.make

CMakeFiles/Queue_SeqQueue.dir/main.c.obj: CMakeFiles/Queue_SeqQueue.dir/flags.make
CMakeFiles/Queue_SeqQueue.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Queue_SeqQueue.dir/main.c.obj"
	D:\Clion\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Queue_SeqQueue.dir\main.c.obj   -c "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue\main.c"

CMakeFiles/Queue_SeqQueue.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Queue_SeqQueue.dir/main.c.i"
	D:\Clion\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue\main.c" > CMakeFiles\Queue_SeqQueue.dir\main.c.i

CMakeFiles/Queue_SeqQueue.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Queue_SeqQueue.dir/main.c.s"
	D:\Clion\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue\main.c" -o CMakeFiles\Queue_SeqQueue.dir\main.c.s

# Object files for target Queue_SeqQueue
Queue_SeqQueue_OBJECTS = \
"CMakeFiles/Queue_SeqQueue.dir/main.c.obj"

# External object files for target Queue_SeqQueue
Queue_SeqQueue_EXTERNAL_OBJECTS =

Queue_SeqQueue.exe: CMakeFiles/Queue_SeqQueue.dir/main.c.obj
Queue_SeqQueue.exe: CMakeFiles/Queue_SeqQueue.dir/build.make
Queue_SeqQueue.exe: CMakeFiles/Queue_SeqQueue.dir/linklibs.rsp
Queue_SeqQueue.exe: CMakeFiles/Queue_SeqQueue.dir/objects1.rsp
Queue_SeqQueue.exe: CMakeFiles/Queue_SeqQueue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Queue_SeqQueue.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Queue_SeqQueue.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Queue_SeqQueue.dir/build: Queue_SeqQueue.exe

.PHONY : CMakeFiles/Queue_SeqQueue.dir/build

CMakeFiles/Queue_SeqQueue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Queue_SeqQueue.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Queue_SeqQueue.dir/clean

CMakeFiles/Queue_SeqQueue.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue" "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue" "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue\cmake-build-debug" "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue\cmake-build-debug" "E:\#Programming\C&C++\Data-Structure\Queue-SeqQueue\cmake-build-debug\CMakeFiles\Queue_SeqQueue.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Queue_SeqQueue.dir/depend

