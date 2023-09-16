cmake_minimum_required(VERSION 3.5)

project(opengl-test LANGUAGES CXX)

include(${CMAKE_SOURCE_DIR}/libs/CMakeLists.txt)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SRC ${CMAKE_SOURCE_DIR}/src/main.cpp)

add_executable(opengl-test ${SRC})
target_link_libraries(opengl-test
    ${OPENGL_LIBRARIES}
    glfw
    libglew_static
)

include(GNUInstallDirs)
install(TARGETS opengl-test
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
