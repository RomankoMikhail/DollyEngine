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
CMAKE_SOURCE_DIR = /home/romanko/git/DollyEngine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/romanko/git/DollyEngine/build

# Include any dependencies generated for this target.
include CMakeFiles/Dolly.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Dolly.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dolly.dir/flags.make

CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o: CMakeFiles/Dolly.dir/flags.make
CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o: ../src/Adapters/IniAdapter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanko/git/DollyEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o -c /home/romanko/git/DollyEngine/src/Adapters/IniAdapter.cpp

CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanko/git/DollyEngine/src/Adapters/IniAdapter.cpp > CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.i

CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanko/git/DollyEngine/src/Adapters/IniAdapter.cpp -o CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.s

CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o.requires:

.PHONY : CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o.requires

CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o.provides: CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolly.dir/build.make CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o.provides.build
.PHONY : CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o.provides

CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o.provides.build: CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o


CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o: CMakeFiles/Dolly.dir/flags.make
CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o: ../src/Containers/Config.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanko/git/DollyEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o -c /home/romanko/git/DollyEngine/src/Containers/Config.cpp

CMakeFiles/Dolly.dir/src/Containers/Config.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolly.dir/src/Containers/Config.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanko/git/DollyEngine/src/Containers/Config.cpp > CMakeFiles/Dolly.dir/src/Containers/Config.cpp.i

CMakeFiles/Dolly.dir/src/Containers/Config.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolly.dir/src/Containers/Config.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanko/git/DollyEngine/src/Containers/Config.cpp -o CMakeFiles/Dolly.dir/src/Containers/Config.cpp.s

CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o.requires:

.PHONY : CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o.requires

CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o.provides: CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolly.dir/build.make CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o.provides.build
.PHONY : CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o.provides

CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o.provides.build: CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o


CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o: CMakeFiles/Dolly.dir/flags.make
CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o: ../src/Containers/Tilemap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanko/git/DollyEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o -c /home/romanko/git/DollyEngine/src/Containers/Tilemap.cpp

CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanko/git/DollyEngine/src/Containers/Tilemap.cpp > CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.i

CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanko/git/DollyEngine/src/Containers/Tilemap.cpp -o CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.s

CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o.requires:

.PHONY : CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o.requires

CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o.provides: CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolly.dir/build.make CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o.provides.build
.PHONY : CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o.provides

CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o.provides.build: CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o


CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o: CMakeFiles/Dolly.dir/flags.make
CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o: ../src/Parsers/Ini.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanko/git/DollyEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o -c /home/romanko/git/DollyEngine/src/Parsers/Ini.cpp

CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanko/git/DollyEngine/src/Parsers/Ini.cpp > CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.i

CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanko/git/DollyEngine/src/Parsers/Ini.cpp -o CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.s

CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o.requires:

.PHONY : CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o.requires

CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o.provides: CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolly.dir/build.make CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o.provides.build
.PHONY : CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o.provides

CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o.provides.build: CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o


CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o: CMakeFiles/Dolly.dir/flags.make
CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o: ../src/Utils/Base64.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanko/git/DollyEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o -c /home/romanko/git/DollyEngine/src/Utils/Base64.cpp

CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanko/git/DollyEngine/src/Utils/Base64.cpp > CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.i

CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanko/git/DollyEngine/src/Utils/Base64.cpp -o CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.s

CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o.requires:

.PHONY : CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o.requires

CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o.provides: CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolly.dir/build.make CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o.provides.build
.PHONY : CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o.provides

CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o.provides.build: CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o


CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o: CMakeFiles/Dolly.dir/flags.make
CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o: ../src/thirdparty/pugixml.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanko/git/DollyEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o -c /home/romanko/git/DollyEngine/src/thirdparty/pugixml.cpp

CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanko/git/DollyEngine/src/thirdparty/pugixml.cpp > CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.i

CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanko/git/DollyEngine/src/thirdparty/pugixml.cpp -o CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.s

CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o.requires:

.PHONY : CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o.requires

CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o.provides: CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolly.dir/build.make CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o.provides.build
.PHONY : CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o.provides

CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o.provides.build: CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o


CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o: CMakeFiles/Dolly.dir/flags.make
CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o: ../src/HanoiModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanko/git/DollyEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o -c /home/romanko/git/DollyEngine/src/HanoiModel.cpp

CMakeFiles/Dolly.dir/src/HanoiModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolly.dir/src/HanoiModel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanko/git/DollyEngine/src/HanoiModel.cpp > CMakeFiles/Dolly.dir/src/HanoiModel.cpp.i

CMakeFiles/Dolly.dir/src/HanoiModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolly.dir/src/HanoiModel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanko/git/DollyEngine/src/HanoiModel.cpp -o CMakeFiles/Dolly.dir/src/HanoiModel.cpp.s

CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o.requires:

.PHONY : CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o.requires

CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o.provides: CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolly.dir/build.make CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o.provides.build
.PHONY : CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o.provides

CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o.provides.build: CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o


CMakeFiles/Dolly.dir/src/main.cpp.o: CMakeFiles/Dolly.dir/flags.make
CMakeFiles/Dolly.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romanko/git/DollyEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Dolly.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Dolly.dir/src/main.cpp.o -c /home/romanko/git/DollyEngine/src/main.cpp

CMakeFiles/Dolly.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Dolly.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romanko/git/DollyEngine/src/main.cpp > CMakeFiles/Dolly.dir/src/main.cpp.i

CMakeFiles/Dolly.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Dolly.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romanko/git/DollyEngine/src/main.cpp -o CMakeFiles/Dolly.dir/src/main.cpp.s

CMakeFiles/Dolly.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/Dolly.dir/src/main.cpp.o.requires

CMakeFiles/Dolly.dir/src/main.cpp.o.provides: CMakeFiles/Dolly.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Dolly.dir/build.make CMakeFiles/Dolly.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/Dolly.dir/src/main.cpp.o.provides

CMakeFiles/Dolly.dir/src/main.cpp.o.provides.build: CMakeFiles/Dolly.dir/src/main.cpp.o


# Object files for target Dolly
Dolly_OBJECTS = \
"CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o" \
"CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o" \
"CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o" \
"CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o" \
"CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o" \
"CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o" \
"CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o" \
"CMakeFiles/Dolly.dir/src/main.cpp.o"

# External object files for target Dolly
Dolly_EXTERNAL_OBJECTS =

Dolly: CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o
Dolly: CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o
Dolly: CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o
Dolly: CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o
Dolly: CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o
Dolly: CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o
Dolly: CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o
Dolly: CMakeFiles/Dolly.dir/src/main.cpp.o
Dolly: CMakeFiles/Dolly.dir/build.make
Dolly: /usr/lib/x86_64-linux-gnu/libsfml-network.so
Dolly: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
Dolly: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
Dolly: /usr/lib/x86_64-linux-gnu/libsfml-window.so
Dolly: /usr/lib/x86_64-linux-gnu/libsfml-system.so
Dolly: /usr/lib/x86_64-linux-gnu/libz.so
Dolly: CMakeFiles/Dolly.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/romanko/git/DollyEngine/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable Dolly"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Dolly.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Dolly.dir/build: Dolly

.PHONY : CMakeFiles/Dolly.dir/build

CMakeFiles/Dolly.dir/requires: CMakeFiles/Dolly.dir/src/Adapters/IniAdapter.cpp.o.requires
CMakeFiles/Dolly.dir/requires: CMakeFiles/Dolly.dir/src/Containers/Config.cpp.o.requires
CMakeFiles/Dolly.dir/requires: CMakeFiles/Dolly.dir/src/Containers/Tilemap.cpp.o.requires
CMakeFiles/Dolly.dir/requires: CMakeFiles/Dolly.dir/src/Parsers/Ini.cpp.o.requires
CMakeFiles/Dolly.dir/requires: CMakeFiles/Dolly.dir/src/Utils/Base64.cpp.o.requires
CMakeFiles/Dolly.dir/requires: CMakeFiles/Dolly.dir/src/thirdparty/pugixml.cpp.o.requires
CMakeFiles/Dolly.dir/requires: CMakeFiles/Dolly.dir/src/HanoiModel.cpp.o.requires
CMakeFiles/Dolly.dir/requires: CMakeFiles/Dolly.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/Dolly.dir/requires

CMakeFiles/Dolly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dolly.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dolly.dir/clean

CMakeFiles/Dolly.dir/depend:
	cd /home/romanko/git/DollyEngine/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/romanko/git/DollyEngine /home/romanko/git/DollyEngine /home/romanko/git/DollyEngine/build /home/romanko/git/DollyEngine/build /home/romanko/git/DollyEngine/build/CMakeFiles/Dolly.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Dolly.dir/depend

