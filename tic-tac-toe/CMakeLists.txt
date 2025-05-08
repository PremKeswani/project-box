cmake_minimum_required(VERSION 3.10)
project(tictactoe C)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add server executable
add_executable(server src/server.c)
target_link_libraries(server pthread)

# Add client executable
add_executable(client src/client.c)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build) 