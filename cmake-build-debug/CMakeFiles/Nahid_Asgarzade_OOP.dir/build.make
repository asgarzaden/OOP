# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Nahid_Asgarzade_OOP.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Nahid_Asgarzade_OOP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Nahid_Asgarzade_OOP.dir/flags.make

CMakeFiles/Nahid_Asgarzade_OOP.dir/main.cpp.obj: CMakeFiles/Nahid_Asgarzade_OOP.dir/flags.make
CMakeFiles/Nahid_Asgarzade_OOP.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Nahid_Asgarzade_OOP.dir/main.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Nahid_Asgarzade_OOP.dir\main.cpp.obj -c C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP\main.cpp

CMakeFiles/Nahid_Asgarzade_OOP.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Nahid_Asgarzade_OOP.dir/main.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP\main.cpp > CMakeFiles\Nahid_Asgarzade_OOP.dir\main.cpp.i

CMakeFiles/Nahid_Asgarzade_OOP.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Nahid_Asgarzade_OOP.dir/main.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP\main.cpp -o CMakeFiles\Nahid_Asgarzade_OOP.dir\main.cpp.s

# Object files for target Nahid_Asgarzade_OOP
Nahid_Asgarzade_OOP_OBJECTS = \
"CMakeFiles/Nahid_Asgarzade_OOP.dir/main.cpp.obj"

# External object files for target Nahid_Asgarzade_OOP
Nahid_Asgarzade_OOP_EXTERNAL_OBJECTS =

Nahid_Asgarzade_OOP.exe: CMakeFiles/Nahid_Asgarzade_OOP.dir/main.cpp.obj
Nahid_Asgarzade_OOP.exe: CMakeFiles/Nahid_Asgarzade_OOP.dir/build.make
Nahid_Asgarzade_OOP.exe: CMakeFiles/Nahid_Asgarzade_OOP.dir/linklibs.rsp
Nahid_Asgarzade_OOP.exe: CMakeFiles/Nahid_Asgarzade_OOP.dir/objects1.rsp
Nahid_Asgarzade_OOP.exe: CMakeFiles/Nahid_Asgarzade_OOP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Nahid_Asgarzade_OOP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Nahid_Asgarzade_OOP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Nahid_Asgarzade_OOP.dir/build: Nahid_Asgarzade_OOP.exe
.PHONY : CMakeFiles/Nahid_Asgarzade_OOP.dir/build

CMakeFiles/Nahid_Asgarzade_OOP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Nahid_Asgarzade_OOP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Nahid_Asgarzade_OOP.dir/clean

CMakeFiles/Nahid_Asgarzade_OOP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP\cmake-build-debug C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP\cmake-build-debug C:\Users\User\CLionProjects\Nahid_Asgarzade_OOP\cmake-build-debug\CMakeFiles\Nahid_Asgarzade_OOP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Nahid_Asgarzade_OOP.dir/depend

