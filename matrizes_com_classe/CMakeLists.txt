cmake_minimum_required(VERSION 3.5)
project(all_any_none VERSION 0.1 LANGUAGES CXX )

# set the compiling flags
set ( CMAKE_CXX_FLAGS "-Wall" )

#--------------------------------
# This is for old cmake versions
#set (CMAKE_CXX_STANDARD 11)
#--------------------------------

### [1] Application target
# configura o diretório contendo os .h, assim você pode incluílos apenas com include "arquivo.h"
include_directories( include )

### [2] Test engine
# includes do test manager
include_directories( test_manager/include )

set ( EXEC_NAME "program")

# Cria um executável com nome "run_tests", adiciona neste executável os arquivos do test manager e o seu main.cpp
add_executable( ${EXEC_NAME}
                src/main.cpp
                src/Matriz.cpp )

# define C++11 standard
set_property(TARGET all_tests PROPERTY CXX_STANDARD 11)

add_custom_target(
    run_tests
    COMMAND python3 ${CMAKE_SOURCE_DIR}/../scripts/verify-inputs.py ./${APP_NAME}
    DEPENDS ${EXEC_NAME}
)

# The end
