# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\c_porject\function_main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\c_porject\function_main\build

# Include any dependencies generated for this target.
include CMakeFiles/MyCMakeproject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyCMakeproject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyCMakeproject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyCMakeproject.dir/flags.make

CMakeFiles/MyCMakeproject.dir/codegen:
.PHONY : CMakeFiles/MyCMakeproject.dir/codegen

CMakeFiles/MyCMakeproject.dir/func.c.obj: CMakeFiles/MyCMakeproject.dir/flags.make
CMakeFiles/MyCMakeproject.dir/func.c.obj: D:/c_porject/function_main/func.c
CMakeFiles/MyCMakeproject.dir/func.c.obj: CMakeFiles/MyCMakeproject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\c_porject\function_main\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MyCMakeproject.dir/func.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyCMakeproject.dir/func.c.obj -MF CMakeFiles\MyCMakeproject.dir\func.c.obj.d -o CMakeFiles\MyCMakeproject.dir\func.c.obj -c D:\c_porject\function_main\func.c

CMakeFiles/MyCMakeproject.dir/func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MyCMakeproject.dir/func.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\c_porject\function_main\func.c > CMakeFiles\MyCMakeproject.dir\func.c.i

CMakeFiles/MyCMakeproject.dir/func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MyCMakeproject.dir/func.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\c_porject\function_main\func.c -o CMakeFiles\MyCMakeproject.dir\func.c.s

CMakeFiles/MyCMakeproject.dir/global_variables.c.obj: CMakeFiles/MyCMakeproject.dir/flags.make
CMakeFiles/MyCMakeproject.dir/global_variables.c.obj: D:/c_porject/function_main/global_variables.c
CMakeFiles/MyCMakeproject.dir/global_variables.c.obj: CMakeFiles/MyCMakeproject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\c_porject\function_main\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MyCMakeproject.dir/global_variables.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyCMakeproject.dir/global_variables.c.obj -MF CMakeFiles\MyCMakeproject.dir\global_variables.c.obj.d -o CMakeFiles\MyCMakeproject.dir\global_variables.c.obj -c D:\c_porject\function_main\global_variables.c

CMakeFiles/MyCMakeproject.dir/global_variables.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MyCMakeproject.dir/global_variables.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\c_porject\function_main\global_variables.c > CMakeFiles\MyCMakeproject.dir\global_variables.c.i

CMakeFiles/MyCMakeproject.dir/global_variables.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MyCMakeproject.dir/global_variables.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\c_porject\function_main\global_variables.c -o CMakeFiles\MyCMakeproject.dir\global_variables.c.s

CMakeFiles/MyCMakeproject.dir/main.c.obj: CMakeFiles/MyCMakeproject.dir/flags.make
CMakeFiles/MyCMakeproject.dir/main.c.obj: D:/c_porject/function_main/main.c
CMakeFiles/MyCMakeproject.dir/main.c.obj: CMakeFiles/MyCMakeproject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\c_porject\function_main\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/MyCMakeproject.dir/main.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyCMakeproject.dir/main.c.obj -MF CMakeFiles\MyCMakeproject.dir\main.c.obj.d -o CMakeFiles\MyCMakeproject.dir\main.c.obj -c D:\c_porject\function_main\main.c

CMakeFiles/MyCMakeproject.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/MyCMakeproject.dir/main.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\c_porject\function_main\main.c > CMakeFiles\MyCMakeproject.dir\main.c.i

CMakeFiles/MyCMakeproject.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/MyCMakeproject.dir/main.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\c_porject\function_main\main.c -o CMakeFiles\MyCMakeproject.dir\main.c.s

# Object files for target MyCMakeproject
MyCMakeproject_OBJECTS = \
"CMakeFiles/MyCMakeproject.dir/func.c.obj" \
"CMakeFiles/MyCMakeproject.dir/global_variables.c.obj" \
"CMakeFiles/MyCMakeproject.dir/main.c.obj"

# External object files for target MyCMakeproject
MyCMakeproject_EXTERNAL_OBJECTS =

MyCMakeproject.exe: CMakeFiles/MyCMakeproject.dir/func.c.obj
MyCMakeproject.exe: CMakeFiles/MyCMakeproject.dir/global_variables.c.obj
MyCMakeproject.exe: CMakeFiles/MyCMakeproject.dir/main.c.obj
MyCMakeproject.exe: CMakeFiles/MyCMakeproject.dir/build.make
MyCMakeproject.exe: CMakeFiles/MyCMakeproject.dir/linkLibs.rsp
MyCMakeproject.exe: CMakeFiles/MyCMakeproject.dir/objects1.rsp
MyCMakeproject.exe: CMakeFiles/MyCMakeproject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\c_porject\function_main\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable MyCMakeproject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MyCMakeproject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyCMakeproject.dir/build: MyCMakeproject.exe
.PHONY : CMakeFiles/MyCMakeproject.dir/build

CMakeFiles/MyCMakeproject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MyCMakeproject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MyCMakeproject.dir/clean

CMakeFiles/MyCMakeproject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\c_porject\function_main D:\c_porject\function_main D:\c_porject\function_main\build D:\c_porject\function_main\build D:\c_porject\function_main\build\CMakeFiles\MyCMakeproject.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MyCMakeproject.dir/depend

