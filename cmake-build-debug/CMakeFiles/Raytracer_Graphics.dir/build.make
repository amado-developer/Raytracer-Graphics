# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/amado-developer/College/Graphics/Raytracer-Graphics

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Raytracer_Graphics.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Raytracer_Graphics.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Raytracer_Graphics.dir/flags.make

CMakeFiles/Raytracer_Graphics.dir/main.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/main.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/main.cpp

CMakeFiles/Raytracer_Graphics.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/main.cpp > CMakeFiles/Raytracer_Graphics.dir/main.cpp.i

CMakeFiles/Raytracer_Graphics.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/main.cpp -o CMakeFiles/Raytracer_Graphics.dir/main.cpp.s

CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.o: ../Raytracer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/Raytracer.cpp

CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/Raytracer.cpp > CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.i

CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/Raytracer.cpp -o CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.s

CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.o: ../Lib.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/Lib.cpp

CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/Lib.cpp > CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.i

CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/Lib.cpp -o CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.s

CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.o: ../Sphere.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/Sphere.cpp

CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/Sphere.cpp > CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.i

CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/Sphere.cpp -o CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.s

CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.o: ../Materials.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/Materials.cpp

CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/Materials.cpp > CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.i

CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/Materials.cpp -o CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.s

CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.o: ../Intersect.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/Intersect.cpp

CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/Intersect.cpp > CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.i

CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/Intersect.cpp -o CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.s

CMakeFiles/Raytracer_Graphics.dir/Light.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/Light.cpp.o: ../Light.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/Light.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/Light.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/Light.cpp

CMakeFiles/Raytracer_Graphics.dir/Light.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/Light.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/Light.cpp > CMakeFiles/Raytracer_Graphics.dir/Light.cpp.i

CMakeFiles/Raytracer_Graphics.dir/Light.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/Light.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/Light.cpp -o CMakeFiles/Raytracer_Graphics.dir/Light.cpp.s

CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.o: ../Plane.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/Plane.cpp

CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/Plane.cpp > CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.i

CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/Plane.cpp -o CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.s

CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.o: ../Texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/Texture.cpp

CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/Texture.cpp > CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.i

CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/Texture.cpp -o CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.s

CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.o: CMakeFiles/Raytracer_Graphics.dir/flags.make
CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.o: ../Cube.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.o -c /Users/amado-developer/College/Graphics/Raytracer-Graphics/Cube.cpp

CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/amado-developer/College/Graphics/Raytracer-Graphics/Cube.cpp > CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.i

CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/amado-developer/College/Graphics/Raytracer-Graphics/Cube.cpp -o CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.s

# Object files for target Raytracer_Graphics
Raytracer_Graphics_OBJECTS = \
"CMakeFiles/Raytracer_Graphics.dir/main.cpp.o" \
"CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.o" \
"CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.o" \
"CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.o" \
"CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.o" \
"CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.o" \
"CMakeFiles/Raytracer_Graphics.dir/Light.cpp.o" \
"CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.o" \
"CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.o" \
"CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.o"

# External object files for target Raytracer_Graphics
Raytracer_Graphics_EXTERNAL_OBJECTS =

Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/main.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/Raytracer.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/Lib.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/Sphere.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/Materials.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/Intersect.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/Light.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/Plane.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/Texture.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/Cube.cpp.o
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/build.make
Raytracer_Graphics: CMakeFiles/Raytracer_Graphics.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable Raytracer_Graphics"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Raytracer_Graphics.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Raytracer_Graphics.dir/build: Raytracer_Graphics

.PHONY : CMakeFiles/Raytracer_Graphics.dir/build

CMakeFiles/Raytracer_Graphics.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Raytracer_Graphics.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Raytracer_Graphics.dir/clean

CMakeFiles/Raytracer_Graphics.dir/depend:
	cd /Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/amado-developer/College/Graphics/Raytracer-Graphics /Users/amado-developer/College/Graphics/Raytracer-Graphics /Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug /Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug /Users/amado-developer/College/Graphics/Raytracer-Graphics/cmake-build-debug/CMakeFiles/Raytracer_Graphics.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Raytracer_Graphics.dir/depend

