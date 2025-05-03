cmake_minimum_required(VERSION 3.31)
project(GestaltOS)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_SOURCE_DIR})
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_SOURCE_DIR})

set(EXTERNAL_PATH "./external")

include_directories(${EXTERNAL_PATH}/eventpp/include)
include_directories(${EXTERNAL_PATH}/SDL3/x86_64-w64-mingw32/include)
include_directories(${EXTERNAL_PATH}/glm/include)

link_directories(${EXTERNAL_PATH}/SDL3/x86_64-w64-mingw32/lib)
link_directories(${EXTERNAL_PATH}/glm/lib)

add_executable(GestaltOS
        src/main.cpp
        src/test.cpp
        src/test.hpp
        src/core/core.cpp
        src/core/core.hpp
        src/core/updatable.cpp
        src/core/updatable.hpp
        src/game.cpp
        src/game.hpp)

target_link_libraries(GestaltOS
        libSDL3.dll.a
        libSDL3_image.dll.a
        libSDL3_mixer.dll.a
        libSDL3_ttf.dll.a)