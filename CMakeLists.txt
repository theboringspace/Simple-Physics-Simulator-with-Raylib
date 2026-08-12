cmake_minimum_required(VERSION 3.11)
project(myproject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(C:/repos/raylib raylib_build)

add_executable(myproject 
            src/main.cpp
            src/Body.cpp
            src/GravityForce.cpp)
target_link_libraries(myproject raylib)

# Windows-specific system libs raylib needs
if (WIN32)
    target_link_libraries(myproject opengl32 gdi32 winmm)
endif()