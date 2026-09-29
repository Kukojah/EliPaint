cmake_minimum_required(VERSION 3.10)
project(EliPaint)

cmake_policy(SET CMP0135 NEW)

include(FetchContent)

FetchContent_Declare(
    SFML
    URL "${CMAKE_CURRENT_SOURCE_DIR}/SFML-2.6.1.zip"
)

set(SFML_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SFML_BUILD_DOC OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(SFML)

add_executable(EliPaint main.cpp)

target_link_libraries(EliPaint PRIVATE sfml-graphics sfml-window sfml-system)