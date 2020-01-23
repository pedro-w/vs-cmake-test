cmake_minimum_required(VERSION 3.10)

# set the project name
project(vscmake VERSION 1.0 LANGUAGES C)
set(BUILD_SHARED_LIBS ON)
# Put libraries into `lib'.
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

# add the executable
add_executable(Test test.c)
# add the library
add_library(Helper SHARED helper.c)
target_compile_definitions(Helper PRIVATE HELPER_LIBRARY)

target_link_libraries(Test PUBLIC Helper)
