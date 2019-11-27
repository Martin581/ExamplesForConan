cmake_minimum_required(VERSION 2.8.12)
project(RootSolversUseCase CXX)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(UseCase usecase.cpp)
target_link_libraries(UseCase ${CONAN_LIBS})