cmake_minimum_required(VERSION 3.31)
project(ProtX11)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin/")

include_directories(DX3D/Include)# DX3D/Source)
include_directories(DX3D/Source)

file(GLOB_RECURSE SOURCES "DX3D/Source/*.cpp")          # DO NOT CHANGE THIS TO A MANUAL LIST .. unless necessary

add_executable(ProtX11
        Game/main.cpp
        ${SOURCES})
#        DX3D/Source/DX3D/Core/Base.cpp)
#        DX3D/Include/DX3D/Core/Base.h)

target_link_libraries(${PROJECT_NAME} d3d11.lib)