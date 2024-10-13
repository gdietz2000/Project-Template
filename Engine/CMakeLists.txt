# Engine/CMakeLists.txt
project(Engine)

# Collect all source and header files for the Engine
set(ENGINE_SOURCES
    src/Core/Core.cpp
)

set(ENGINE_HEADERS
    include/Core/Core.h
)

# Define the Engine as a static library
add_library(engine STATIC ${ENGINE_SOURCES})

# Make the Engine headers accessible to other projects
target_include_directories(engine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)