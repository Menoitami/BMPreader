cmake_minimum_required(VERSION 3.10)


project(bmpreader VERSION 1.0)


add_library(bmpClass  STATIC ${CMAKE_CURRENT_SOURCE_DIR}/BMPreader/BMPreader.h  ${CMAKE_CURRENT_SOURCE_DIR}/BMPreader/BMPreader.cpp )


add_executable(bmpreader main.cpp)


target_link_libraries(bmpreader PUBLIC bmpClass)