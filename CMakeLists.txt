cmake_minimum_required(VERSION 2.8)

project(DollyEngine)
set(EXECUTABLE_NAME "Dolly")

file (GLOB CPP_FILES src/*/*.cpp src/*.cpp)

add_executable(${EXECUTABLE_NAME} ${CPP_FILES})
target_include_directories(${EXECUTABLE_NAME} PRIVATE src)

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
#Find any version 2.X of SFML
#See the FindSFML.cmake file for additional details and instructions
find_package(SFML 2 REQUIRED network audio graphics window system)
if(SFML_FOUND)
  include_directories(${SFML_INCLUDE_DIR})
  target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
endif()

find_package( ZLIB REQUIRED )
if ( ZLIB_FOUND )
    include_directories( ${ZLIB_INCLUDE_DIRS} )
    target_link_libraries( ${EXECUTABLE_NAME} ${ZLIB_LIBRARIES} )
endif( ZLIB_FOUND )



