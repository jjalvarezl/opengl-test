cmake_minimum_required(VERSION 3.5)

project(opengl-test LANGUAGES CXX)

find_package( OpenGL REQUIRED )

include_directories( ${OPENGL_INCLUDE_DIRS} )

set( BUILD_DIR ${CMAKE_SOURCE_DIR}/build )
set( GLFW_BUILD_DOCS OFF CACHE BOOL  "GLFW lib only" )
set( GLFW_INSTALL OFF CACHE BOOL  "GLFW lib only" )
set( GLFW_PATH ${CMAKE_SOURCE_DIR}/libs/glfw )

add_subdirectory( ${GLFW_PATH} )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SRC ${CMAKE_SOURCE_DIR}/src/main.cpp)

add_executable(opengl-test ${SRC})
target_link_libraries(opengl-test ${OPENGL_LIBRARIES} glfw)

include(GNUInstallDirs)
install(TARGETS opengl-test
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
