# Application/CMakeLists.txt
project(Application)

# Collect all source and header files for the Application
set(APP_SOURCES
    src/main.cpp
    src/Application.cpp
)

set(APP_HEADERS
    include/Application/Application.h
)

# Define the Application executable
add_executable(application ${APP_SOURCES})

# Make Application headers accessible (if needed in other parts)
target_include_directories(application PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Link the Engine library with the Application executable
target_link_libraries(application PRIVATE engine)

# Set the output directory for the application executable
set_target_properties(application PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)