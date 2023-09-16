find_package( OpenGL REQUIRED )

include_directories( ${OPENGL_INCLUDE_DIRS} )

set( GLFW_BUILD_DOCS OFF CACHE BOOL  "GLFW lib only" )
set( GLFW_INSTALL OFF CACHE BOOL  "GLFW lib only" )

add_subdirectory( ${CMAKE_SOURCE_DIR}/libs/glfw ) # https://www.glfw.org
add_subdirectory( ${CMAKE_SOURCE_DIR}/libs/glew-cmake )
