cmake_minimum_required(VERSION 3.31)
project(GestaltOS)

set(CMAKE_CXX_STANDARD 11)

set(SDL3_PATH "C:/Environment/SDL3/x86_64-w64-mingw32")
set(GLM_PATH "C:/Environment/glm")

include_directories(${SDL3_PATH}/include)
include_directories(${GLM_PATH}/include)

link_directories(${SDL3_PATH}/lib)
link_directories(${GLM_PATH}/lib)

add_executable(GestaltOS
        src/main.cpp)

target_link_libraries(GestaltOS libSDL3.dll.a)