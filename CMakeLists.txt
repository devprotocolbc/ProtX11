cmake_minimum_required(VERSION 3.31)
project(ProtX11)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin/")

include_directories(DX3D/Include DX3D/Source)

file(GLOB_RECURSE SOURCES "DX3D/Source/*.cpp")      # -- necessary so not every file has to be added, it's annoying

add_executable(ProtX11
        Game/main.cpp
        ${SOURCES})
#        DX3D/Source/DX3D/Core/Base.cpp)
#        DX3D/Include/DX3D/Core/Base.h)
